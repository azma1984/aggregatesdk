#ifndef _TABLE_VALIDATOR_H_
#define _TABLE_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "datatable/DataTable.h"

#include <string>
#include <boost/shared_ptr.hpp>


class TableValidator : public Interface, public Cloneable
{
	/*
    virtual std::string getType() = 0;
    virtual std::string encode() = 0;
    virtual void validate(boost::shared_ptr<DataTable> table) = 0; 
	*/
};
#endif  //_TABLE_VALIDATOR_H_
