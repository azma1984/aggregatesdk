#pragma once
#include "datatable/DataTableException.h"


class ValidationException: public DataTableException
{
public:
   ValidationException(const std::string & message):DataTableException(message)
   {
   }

   ValidationException(const std::string &message, const std::string &details):DataTableException(message, details)
   {
   }
};

