// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/TimeUnitsManager.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::TimeUnitsManager
    
{

public:
    typedef void super;

private:
    int minUnit;
    int maxUnit;
    std::list  units;
protected:
    void ctor();
    void ctor(std::string* editorOptions);
    void ctor(int minUnit, int maxUnit);

private:
    void selectUnits();
    void parseEditorOptions(std::string* editorOptions);

public:
    int getMinUnit();
    std::list  getUnits();
    void setMinUnit(int minUnit);
    int getMaxUnit();
    void setMaxUnit(int maxUnit);
    TimeUnit* selectUnitByPeriod(long newPeriod);
    TimeUnit* getUnitByDescription(std::string* description);
    std::string* createTimeString(long period);

    // Generated
    TimeUnitsManager();
    TimeUnitsManager(std::string* editorOptions);
    TimeUnitsManager(int minUnit, int maxUnit);
protected:
    TimeUnitsManager(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
