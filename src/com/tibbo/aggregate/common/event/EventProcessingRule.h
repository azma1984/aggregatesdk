#ifndef _EventProcessingRule_H_
#define _EventProcessingRule_H_

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>
#include "event/EventEnrichmentRule.h"
#include "datatable/TableFormat.h"
#include "data/Event.h"
#include "datatable/DataTableConversion.h"
#include "datatable/field/StringFieldFormat.h"
#include "datatable/field/LongFieldFormat.h"
#include "datatable/validator/TableKeyFieldsValidator.h"
#include "Cres.h"
#include "datatable/DataTableBindingProvider.h"
#include "datatable/converter/DefaultFormatConverter.h"

class EventProcessingRule
{
private:
    static const std::string FIELD_MASK_;
    static const std::string FIELD_EVENT_;
    static const std::string FIELD_PREFILTER_;
    static const std::string FIELD_DEDUPLICATOR_;
    static const std::string FIELD_QUEUE_;
    static const std::string FIELD_DUPLICATE_DISPATCHING_;
    static const std::string FIELD_PERIOD_;
    static const std::string FIELD_ENRICHMENTS_;
    static TableFormatPtr FORMAT_;
    std::string mask;
    std::string event;
    std::string prefilter;
    std::string deduplicator;
    int queue;
    bool duplicateDispatching;
    long period;
	std::list< EventEnrichmentRulePtr >  enrichments;
    ExpressionPtr prefilterExpression;
    ExpressionPtr deduplicatorExpression;
    long filtered;
    long saved;
    long duplicates;

public:
    std::string getEvent();
    std::string getMask();
    long getPeriod();
    void setEvent(const std::string& event);
    void setMask(const std::string& mask);
    void setPeriod(long period);
    std::string getPrefilter();
    void setPrefilter(const std::string& prefilter);
    ExpressionPtr getPrefilterExpression();
    std::string getDeduplicator();
    void setDeduplicator(const std::string& deduplicator);
    ExpressionPtr getDeduplicatorExpression();
	std::list< EventEnrichmentRulePtr >  getEnrichments();
    void setEnrichments(std::list<EventEnrichmentRulePtr >  enrichments);
    int getQueue();
    void setQueue(int queue);
    bool isDuplicateDispatching();
    void setDuplicateDispatching(bool duplicateDispatching);
    void addFiltered();
    void addSaved();
    void addDuplicate();
    long getFiltered();
    long getSaved();
    long getDuplicates();
    std::string toString();
    int hashCode();
    bool equals(EventProcessingRulePtr obj);

    // Generated
    EventProcessingRule();
    EventProcessingRule(const std::string& mask, const std::string& event);

    static TableFormatPtr& FORMAT();
};
#endif  //_EventProcessingRule_H_
