#ifndef RequestIdentifierH
#define RequestIdentifierH

#include "StringIdentifier.h"

class RequestIdentifier : public StringIdentifier
{
 public:
	RequestIdentifier(const std::string &id):StringIdentifier(id)
	{

    }

};

#endif
