#pragma once
#include "context/ContextException.h"

class DataTableException : public ContextException
{
public:
   DataTableException(const std::string & message):ContextException(message)
   {
   }

   DataTableException(const std::string &message, const std::string &details):ContextException(message, details)
   {
   }
};
