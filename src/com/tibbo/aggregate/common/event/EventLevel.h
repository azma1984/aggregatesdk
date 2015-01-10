#ifndef _EventLevel_H_
#define _EventLevel_H_

#include <string>
#include <map>

class EventLevel
{
private:
    static std::map<int, std::string> LEVELS_;
    static std::map<int, std::string> SELECTION_VALUES_;

public:
    static const int NUM_LEVELS;
    static const int NONE;
    static const int NOTICE;
    static const int INFO;
    static const int WARNING;
    static const int ERROR;
    static const int FATAL;

    static bool isValid(int level);
    static const std::string getName(int level);
    static std::map<int, std::string> getSelectionValues();

private:
    static std::map<int, std::string>& LEVELS();
    static std::map<int, std::string>& SELECTION_VALUES();
};
