#ifndef _EventProcessingRule_H_
#define _EventProcessingRule_H_

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>
#include "event/EventEnrichmentRule.h"
#include "datatable/TableFormat.h"

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
    static boost::shared_ptr<TableFormat> FORMAT_;
    std::string mask;
    std::string event;
    std::string prefilter;
    std::string deduplicator;
    int queue;
    bool duplicateDispatching;
    long period;
    std::list<boost::shared_ptr<EventEnrichmentRule>>  enrichments;
    boost::shared_ptr<Expression> prefilterExpression;
    boost::shared_ptr<Expression> deduplicatorExpression;
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
    boost::shared_ptr<Expression> getPrefilterExpression();
    std::string getDeduplicator();
    void setDeduplicator(const std::string& deduplicator);
    boost::shared_ptr<Expression> getDeduplicatorExpression();
    std::list<boost::shared_ptr<EventEnrichmentRule>>  getEnrichments();
    void setEnrichments(std::list<boost::shared_ptr<EventEnrichmentRule>  enrichments);
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
    bool equals(EventProcessingRule* obj);

    // Generated
    EventProcessingRule();
    EventProcessingRule(const std::string& mask, const std::string& event);

    static boost::shared_ptr<TableFormat>& FORMAT();
};
#endif  //_EventProcessingRule_H_
