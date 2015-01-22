#pragma once

#include "action/StringIdentifier.h"

class ActionIdentifier: public StringIdentifier
{

public:
    ActionIdentifier(const std::string &id):StringIdentifier(id) {}
};
