#pragma once

#include <boost/enable_shared_from_this.hpp>
#include "util/Pointers.h"
#include "util/AgObject.h"

class AggreGateBean : public AgObject, public boost::enable_shared_from_this<AggreGateBean>
{
private:
    TableFormatPtr format;

public:
    DataTablePtr toDataTable();
    DataRecordPtr toDataRecord();
    TableFormatPtr getFormat();

    AggreGateBean(TableFormatPtr format);
    AggreGateBean(TableFormatPtr format, DataRecordPtr data);

};

