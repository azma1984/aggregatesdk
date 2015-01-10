#include "event/EventProcessingRule.h"
#include "data/Event.h"
#include "datatable/DataTableConversion.h"
#include "datatable/field/StringFieldFormat.h"
#include "datatable/field/LongFieldFormat.h"
#include "datatable/validator/TableKeyFieldsValidator.h"
#include "Cres.h"
#include "datatable/DataTableBindingProvider.h"

#include <limits>

const std::string EventProcessingRule::FIELD_MASK = "mask";
const std::string EventProcessingRule::FIELD_EVENT = "event";
const std::string EventProcessingRule::FIELD_PREFILTER = "prefilter";
const std::string EventProcessingRule::FIELD_DEDUPLICATOR = "deduplicator";
const std::string EventProcessingRule::FIELD_QUEUE = "queue";
const std::string EventProcessingRule::FIELD_DUPLICATE_DISPATCHING = "duplicateDispatching";
const std::string EventProcessingRule::FIELD_PERIOD = "period";
const std::string EventProcessingRule::FIELD_ENRICHMENTS = "enrichments";


EventProcessingRule::EventProcessingRule()
{

}

EventProcessingRule::EventProcessingRule(const std::string& mask, const std::string& event)
{
    this->mask = mask;
    this->event = event;
}

boost::shared_ptr<TableFormat>& EventProcessingRule::FORMAT()
{
    if (FORMAT_.get() == NULL) {
        FORMAT_->addTableValidator(new TableKeyFieldsValidator());

        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_MASK_).append("><S><F=NK><D=").append(Cres::get().getString("conContextMask")).append("><E=contextmask>") );
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_EVENT_).append("><S><F=EK><V=<L=1 ").append( INT_MAX )
                                               .append(">><D=").append(Cres::get().getString("efEventName")).append(">") );
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_PREFILTER_).append("><S><D=").append(Cres::get().getString("efPrefilter"))
                                               .append("><H=").append(Cres.get().getString("efPrefilterHelp")).append("><E=")
                                               .append(StringFieldFormat::EDITOR_EXPRESSION).append(">"));
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_DEDUPLICATOR_).append("><S><D=").append(Cres::get().getString("efDeduplicator"))
                                               .append("><E=").append(StringFieldFormat::EDITOR_EXPRESSION).append(">"));
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_QUEUE_).append("><I><A=100><D=").append(Cres::get().getString("efMemoryQueue")).append(">"));
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_DUPLICATE_DISPATCHING_).append("><B><D=").append(Cres::get().getString("efDuplicateDispatching")).append(">"));
        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_PERIOD_).append("><L><A=").append(Event::DEFAULT_EVENT_EXPIRATION_PERIOD)
                                               .append("><D=").append(Cres::get().getString("confExpirationPeriod")).append("><E=")
                                               .append(LongFieldFormat::EDITOR_PERIOD).append("><O=")
                                               .append(LongFieldFormat::encodePeriodEditorOptions(TimeHelper::HOUR, TimeHelper::YEAR)).append(">") );

        FieldFormat* ff = FieldFormat::create( std::string("<").append(FIELD_ENRICHMENTS_).append("><T><D=")
                                               .append(Cres::get().getString("enrichments")).append(">") );
        ff->setDefault(new DataTable(EventEnrichmentRule::FORMAT()) );
        FORMAT_->addField( ff );

        std::string ref = std::string(FIELD_EVENT_).append("#").append(DataTableBindingProvider::PROPERTY_CHOICES);
        std::string exp = std::string("{").append(Contexts::CTX_UTILITIES).append(":").append(UtilitiesContextConstants::F_EVENTS_BY_MASK)
                                    .append("('{").append(FIELD_MASK_).append("}')}");
        FORMAT_->addBinding(ref, exp);

        ref = std::string(FIELD_PREFILTER_).append("#").append(DataTableBindingProvider::PROPERTY_OPTIONS);
        exp = std::string(Functions::EXPRESSION_EDITOR_OPTIONS).append("({").append(FIELD_MASK_).append("}, {").append(FIELD_EVENT_)
                        .append("}, ").append(ContextUtils::ENTITY_EVENT).append(")");
        FORMAT_->addBinding(ref, exp);

        ref = std::string(FIELD_DEDUPLICATOR_).append("#").append(DataTableBindingProvider::PROPERTY_OPTIONS);
        exp = std::string(Functions::EXPRESSION_EDITOR_OPTIONS).append("({").append(FIELD_MASK_).append("}, {").append(FIELD_EVENT_)
                        .append("}, " ).append(ContextUtils::ENTITY_EVENT).append(")");
        FORMAT->addBinding(ref, exp);

        ref = std::string(FIELD_QUEUE_).append("#").append(DataTableBindingProvider::PROPERTY_ENABLED);
        exp = std::string("length({").append(FIELD_DEDUPLICATOR_).append("}) > 0");
        FORMAT_->addBinding(ref, exp);

        FORMAT->setReorderable(true);

        DataTableConversion::registerFormatConverter(new DefaultFormatConverter(EventProcessingRule.class, FORMAT())));
    }
}

std::string EventProcessingRule::getEvent()
{
    return event;
}

std::string EventProcessingRule::getMask()
{
    return mask;
}

long EventProcessingRule::getPeriod()
{
    return period;
}

void EventProcessingRule::setEvent(const std::string& event)
{
    this->event = event;
}

void EventProcessingRule::setMask(const std::string& mask)
{
    this->mask = mask;
}

void EventProcessingRule::setPeriod(long period)
{
    this->period = period;
}

std::string EventProcessingRule::getPrefilter()
{
    return  prefilter;
}

void EventProcessingRule::setPrefilter(const std::string& prefilter)
{
    this->prefilter = prefilter;
    this->prefilterExpression.reset();
}

boost::shared_ptr<Expression> EventProcessingRule::getPrefilterExpression()
{
    if (prefilterExpression.get() == NULL)
    {
        prefilterExpression = (prefilter.length() > 0) ? new Expression(prefilter) : NULL;
    }

    return prefilterExpression;
}

std::string EventProcessingRule::getDeduplicator()
{
    return deduplicator;
}

void EventProcessingRule::setDeduplicator(const std::string& deduplicator)
{
    this->deduplicator = deduplicator;
    this->deduplicatorExpression.reset();
}

boost::shared_ptr<Expression> EventProcessingRule::getDeduplicatorExpression()
{
    if (deduplicatorExpression.get() == NULL)
    {
        deduplicatorExpression = (deduplicator.length() > 0) ? new Expression(deduplicator) : NULL;
    }

    return deduplicatorExpression;
}

std::list<boost::shared_ptr<EventEnrichmentRule> > EventProcessingRule::getEnrichments()
{
    return enrichments;
}

void EventProcessingRule::setEnrichments(std::list<boost::shared_ptr<EventEnrichmentRule> enrichments)
{
    this->enrichments = enrichments;
}

int EventProcessingRule::getQueue()
{
    return queue;
}

void EventProcessingRule::setQueue(int queue)
{
    this->queue = queue;
}

bool EventProcessingRule::isDuplicateDispatching()
{
    return duplicateDispatching;
}

void EventProcessingRule::setDuplicateDispatching(bool duplicateDispatching)
{
    this->duplicateDispatching = duplicateDispatching;
}

void EventProcessingRule::addFiltered()
{
    this->filtered++;
}

void EventProcessingRule::addSaved()
{
    this->saved++;
}

void EventProcessingRule::addDuplicate()
{
    this->duplicates++;
}

long EventProcessingRule::getFiltered()
{
    return filtered;
}

long EventProcessingRule::getSaved()
{
    return saved;
}

long EventProcessingRule::getDuplicates()
{
    return duplicates;
}

std::string EventProcessingRule::toString()
{
    return std::string("EventProcessingRule [event=").append(event).append(", mask=").append(mask).append("]");
}

/*
int EventProcessingRule::hashCode()
{
    int prime = 31;
    int result = 1;
    result = prime * result + ((event == null) ? 0 : event.hashCode());
    result = prime * result + ((mask == null) ? 0 : mask.hashCode());
    return result;
}
*/

bool EventProcessingRule::equals(EventProcessingRule* other)
{
    if (this == other)
        return true;

    if (other == NULL)
        return false;

    if (event != other->event)
        return false;

    if (mask != other->mask)
        return false;

    return true;
}
