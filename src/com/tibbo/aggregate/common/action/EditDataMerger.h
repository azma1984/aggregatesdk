#ifndef EditDataMergerH
#define EditDataMergerH

#include "datatable/DataTable.h"
#include "util/Interface.h"
#include <boost/shared_ptr.hpp>

class EditDataMerger : public Interface
{
public:
    virtual DataTablePtr merge(DataTablePtr preset, DataTablePtr original) = 0;
};

#endif
