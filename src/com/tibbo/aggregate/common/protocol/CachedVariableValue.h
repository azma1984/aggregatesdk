#ifndef CachedVariableValueH
#define CachedVariableValueH

#include "datatable/DataTable.h"


class CachedVariableValue
{

private:
    DatePtr timestamp;
    DataTablePtr value;

public:
    DatePtr getTimestamp();
    void setTimestamp(DatePtr timestamp);
    DataTablePtr getValue();
    void setValue(DataTablePtr value);


    CachedVariableValue(DatePtr timestamp, DataTablePtr value);


};

#endif
