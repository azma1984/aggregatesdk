#ifndef _PermissionType_H_
#define _PermissionType_H_

#include <string>

class PermissionType
{
private:
    int pattern_;
    std::string name_;
    std::string description_;

public:
    PermissionType(int pattern, const std::string& name, const std::string& description) :
        pattern_(pattern), name_(name), description_(description) {}

    int getPattern() {
        return pattern_;
    }

    void setPattern(int pattern) {
        this->pattern_ = pattern;
    }

    std::string getName() {
        return name_;
    }

    void setName(const std::string& name) {
        this->name_ = name;
    }

    std::string getDescription() {
        return description_;
    }

    void setDescription(const std::string& description) {
        this->description_ = description;
    }
};
#endif  //_PermissionType_H_
