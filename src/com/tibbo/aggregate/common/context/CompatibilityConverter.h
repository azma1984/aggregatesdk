#ifndef CompatibilityConverterH
#define CompatibilityConverterH
#include "util/Interface.h"
#include "datatable/DataTable.h"
#include <boost/shared_ptr.hpp>

class CompatibilityConverter : public Interface
{
public:
    virtual DataTablePtr convert(DataTablePtr oldValue, DataTablePtr newValue) = 0;
};
#endif 