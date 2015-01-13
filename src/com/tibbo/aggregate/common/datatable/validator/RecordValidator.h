#ifndef _RECORD_VALIDATOR_H_
#define _RECORD_VALIDATOR_H_

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "datatable/DataTable.h"
#include "datatable/DataRecord.h"
#include <string>
#include <boost/shared_ptr.hpp>


class RecordValidator : public Interface, public Cloneable
{
	/*
public:
    virtual char getType() = 0;
    virtual std::string encode() = 0;
    virtual void validate(boost::shared_ptr<DataTable> table, boost::shared_ptr<DataRecord> record) = 0; 
	*/
};
#endif 
