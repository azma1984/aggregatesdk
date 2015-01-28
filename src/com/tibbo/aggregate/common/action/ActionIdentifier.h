#ifndef ActionIdentifierH
#define ActionIdentifierH

#include "action/StringIdentifier.h"

class ActionIdentifier: public StringIdentifier
{

public:
    ActionIdentifier(const std::string &id):StringIdentifier(id) {}
};

#endif



