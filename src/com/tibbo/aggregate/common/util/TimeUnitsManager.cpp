#include "util/TimeUnitsManager.h"
#include "util/TimeHelper.h"
#include "util/SString.h"

#include <limits>


TimeUnitsManager::TimeUnitsManager()
{
    this->minUnit = 0;
    this->maxUnit = INT_MAX;
}

TimeUnitsManager::TimeUnitsManager(const std::string & editorOptions)
{
    if (editorOptions.length() > 0) {
        parseEditorOptions(editorOptions);
    }

    selectUnits();
}

TimeUnitsManager::TimeUnitsManager(int minUnit, int maxUnit)
{
    this->minUnit = minUnit;
    this->maxUnit = maxUnit;

    selectUnits();
}

void TimeUnitsManager::selectUnits()
{
    std::list<TimeUnit*> tu = TimeHelper::getInstance().getUnits();
    for (std::list<TimeUnit*>::iterator it = tu.begin(); it != tu.end(); ++it) {
        if ( (static_cast<TimeUnit*>(*it)->getUnit() >= minUnit) && (static_cast<TimeUnit*>(*it).getUnit() <= maxUnit) )
        {
            units.insert(*unit);
        }
    }
}

void TimeUnitsManager::parseEditorOptions(const std::string & editorOptions)
{
    std::vector<std::string> parts = SString::split(editorOptions, ' ');
    if (parts.size() > 0) {
        minUnit = SString::fromNumber(parts.at(0));
    }
    if (parts.size() > 1) {
        maxUnit = SString::fromNumber(parts.at(1));
    }
}

int TimeUnitsManager::getMinUnit()
{
    return minUnit;
}

std::list<TimeUnit> TimeUnitsManager::getUnits()
{
    return units;
}

void TimeUnitsManager::setMinUnit(int minUnit)
{
    this->minUnit = minUnit;
}

int TimeUnitsManager::getMaxUnit()
{
    return maxUnit
}

void TimeUnitsManager::setMaxUnit(int maxUnit)
{
    this->maxUnit = maxUnit;
}
