#include "event/EventProcessingRule.h"
#include "datatable/DataTableConversion.h"
#include "datatable/validator/TableKeyFieldsValidator.h"

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

        FORMAT.addField(FieldFormat.create("<" + FIELD_MASK + "><S><F=NK><D=" + Cres.get().getString("conContextMask") + "><E=contextmask>"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_EVENT + "><S><F=EK><V=<L=1 " + Integer.MAX_VALUE + ">><D=" + Cres.get().getString("efEventName") + ">"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_PREFILTER + "><S><D=" + Cres.get().getString("efPrefilter") + "><H=" + Cres.get().getString("efPrefilterHelp") + "><E="
            + StringFieldFormat.EDITOR_EXPRESSION + ">"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_DEDUPLICATOR + "><S><D=" + Cres.get().getString("efDeduplicator") + "><E=" + StringFieldFormat.EDITOR_EXPRESSION + ">"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_QUEUE + "><I><A=100><D=" + Cres.get().getString("efMemoryQueue") + ">"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_DUPLICATE_DISPATCHING + "><B><D=" + Cres.get().getString("efDuplicateDispatching") + ">"));
        FORMAT.addField(FieldFormat.create("<" + FIELD_PERIOD + "><L><A=" + Event.DEFAULT_EVENT_EXPIRATION_PERIOD + "><D=" + Cres.get().getString("confExpirationPeriod") + "><E="
            + LongFieldFormat.EDITOR_PERIOD + "><O=" + LongFieldFormat.encodePeriodEditorOptions(TimeHelper.HOUR, TimeHelper.YEAR) + ">"));

        FieldFormat ff = FieldFormat.create("<" + FIELD_ENRICHMENTS + "><T><D=" + Cres.get().getString("enrichments") + ">");
        ff.setDefault(new DataTable(EventEnrichmentRule.FORMAT));
        FORMAT.addField(ff);

        String ref = FIELD_EVENT + "#" + DataTableBindingProvider.PROPERTY_CHOICES;
        String exp = "{" + Contexts.CTX_UTILITIES + ":" + UtilitiesContextConstants.F_EVENTS_BY_MASK + "('{" + FIELD_MASK + "}')}";
        FORMAT.addBinding(ref, exp);

        ref = FIELD_PREFILTER + "#" + DataTableBindingProvider.PROPERTY_OPTIONS;
        exp = Functions.EXPRESSION_EDITOR_OPTIONS + "({" + FIELD_MASK + "}, {" + FIELD_EVENT + "}, " + ContextUtils.ENTITY_EVENT + ")";
        FORMAT.addBinding(ref, exp);

        ref = FIELD_DEDUPLICATOR + "#" + DataTableBindingProvider.PROPERTY_OPTIONS;
        exp = Functions.EXPRESSION_EDITOR_OPTIONS + "({" + FIELD_MASK + "}, {" + FIELD_EVENT + "}, " + ContextUtils.ENTITY_EVENT + ")";
        FORMAT.addBinding(ref, exp);

        ref = FIELD_QUEUE + "#" + DataTableBindingProvider.PROPERTY_ENABLED;
        exp = "length({" + FIELD_DEDUPLICATOR + "}) > 0";
        FORMAT.addBinding(ref, exp);

        FORMAT.setReorderable(true);

        DataTableConversion::registerFormatConverter(new DefaultFormatConverter(EventProcessingRule.class, FORMAT));
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
