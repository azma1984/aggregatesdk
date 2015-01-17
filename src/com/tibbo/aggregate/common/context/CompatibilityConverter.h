#pragma once

#include "util/Interface.h"
#include "datatable/DataTable.h"
#include <boost/shared_ptr.hpp>

class CompatibilityConverter : public Interface
{
public:
    virtual boost::shared_ptr<DataTable> convert(boost::shared_ptr<DataTable> oldValue, boost::shared_ptr<DataTable> newValue) = 0;
};
