// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventProcessingRule.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::event::EventProcessingRule
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_MASK_;
    static const std::string FIELD_EVENT_;
    static const std::string FIELD_PREFILTER_;
    static const std::string FIELD_DEDUPLICATOR_;
    static const std::string FIELD_QUEUE_;
    static const std::string FIELD_DUPLICATE_DISPATCHING_;
    static const std::string FIELD_PERIOD_;
    static const std::string FIELD_ENRICHMENTS_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    std::string* mask;
    std::string* event;
    std::string* prefilter;
    std::string* deduplicator;
    int queue;
    bool duplicateDispatching;
    long period;
    std::list  enrichments;
    ::com::tibbo::aggregate::common::expression::Expression* prefilterExpression;
    ::com::tibbo::aggregate::common::expression::Expression* deduplicatorExpression;
    long filtered;
    long saved;
    long duplicates;
protected:
    void ctor();
    void ctor(std::string* mask, std::string* event);

public:
    std::string* getEvent();
    std::string* getMask();
    long getPeriod();
    void setEvent(std::string* event);
    void setMask(std::string* mask);
    void setPeriod(long period);
    std::string* getPrefilter();
    void setPrefilter(std::string* prefilter);
    ::com::tibbo::aggregate::common::expression::Expression* getPrefilterExpression();
    std::string* getDeduplicator();
    void setDeduplicator(std::string* deduplicator);
    ::com::tibbo::aggregate::common::expression::Expression* getDeduplicatorExpression();
    std::list  getEnrichments();
    void setEnrichments(std::list  enrichments);
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
    std::string* toString();
    int hashCode();
    bool equals(void* obj);

    // Generated
    EventProcessingRule();
    EventProcessingRule(std::string* mask, std::string* event);
protected:
    EventProcessingRule(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static const std::string& FIELD_MASK();
    static const std::string& FIELD_EVENT();
    static const std::string& FIELD_PREFILTER();
    static const std::string& FIELD_DEDUPLICATOR();
    static const std::string& FIELD_QUEUE();
    static const std::string& FIELD_DUPLICATE_DISPATCHING();
    static const std::string& FIELD_PERIOD();
    static const std::string& FIELD_ENRICHMENTS();

public:
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();

private:
    ::java::lang::Class* getClass0();
};
