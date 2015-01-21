#pragma once

#include "datatable/DataTable.h"
#include "util/Interface.h"
#include <boost/shared_ptr.hpp>

class EditDataMerger : public Interface
{
public:
    virtual boost::shared_ptr<DataTable> merge(boost::shared_ptr<DataTable> preset, boost::shared_ptr<DataTable> original) = 0;
};
