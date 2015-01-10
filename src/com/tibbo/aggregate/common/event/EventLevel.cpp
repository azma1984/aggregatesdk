#include "event/EventLevel.h"
#include "Cres.h"

const int EventLevel::NUM_LEVELS = 5;

const int EventLevel::NONE = 0;
const int EventLevel::NOTICE = 1;
const int EventLevel::INFO = 2;
const int EventLevel::WARNING = 3;
const int EventLevel::ERROR = 4;
const int EventLevel::FATAL = 5;


bool EventLevel::isValid(int level)
{
    return (LEVELS().find(level) != LEVELS().end());
}

const std::string EventLevel::getName(int level)
{
    std::map<int, std::string>::iterator it = LEVELS().find(level);
    if (it != LEVELS().end()) {
        return it.second();
    }

    return std::string("");
}

std::map<int, std::string> EventLevel::getSelectionValues()
{
    return SELECTION_VALUES();
}

std::map<int, std::string> &EventLevel::LEVELS()
{
    typedef std::pair<int, std::string> levelPair;

    if (LEVELS_.empty()) {
        LEVELS_.insert( levelPair(NOTICE, Cres::get().getString("conElNotice")) );
        LEVELS_.insert( levelPair(INFO, Cres::get().getString("conElInfo")) );
        LEVELS_.insert( levelPair(WARNING, Cres::get().getString("conElWarning")) );
        LEVELS_.insert( levelPair(ERROR, Cres::get().getString("conElError")) );
        LEVELS_.insert( levelPair(FATAL, Cres::get().getString("conElFatal")) );
        LEVELS_.insert( levelPair(NONE, Cres::get().getString("conElNotDefined")) );
    }

    return LEVELS_;
}

static std::map<int, std::string> &EventLevel::SELECTION_VALUES()
{
    typedef std::pair<int, std::string> levelPair;

    if (SELECTION_VALUES_.empty()) {
        SELECTION_VALUES_.insert( levelPair(0, Cres::get().getString("none")) );

        for (int i = 1; i <= EventLevel.NUM_LEVELS; i++) {
            SELECTION_VALUES_.insert( levelPair(i, getName(i)) );
        }
    }

    return SELECTION_VALUES_;
}
