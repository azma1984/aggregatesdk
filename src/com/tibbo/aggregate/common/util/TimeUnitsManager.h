#pragma once

#include "util/TimeUnit.h"
#include <list>


class TimeUnitsManager
{
private:
    int minUnit;
    int maxUnit;
    std::list<TimeUnit>  units;

private:
    void selectUnits();
    void parseEditorOptions(const std::string & editorOptions);

public:
    int getMinUnit();
    std::list<TimeUnit> getUnits();
    void setMinUnit(int minUnit);
    int getMaxUnit();
    void setMaxUnit(int maxUnit);
    /* Not used
    TimeUnit* selectUnitByPeriod(long newPeriod);
    TimeUnit* getUnitByDescription(const std::string & description);
    */
    std::string createTimeString(long period) const;

    TimeUnitsManager();
    TimeUnitsManager(const std::string & editorOptions);
    TimeUnitsManager(int minUnit, int maxUnit);
};
