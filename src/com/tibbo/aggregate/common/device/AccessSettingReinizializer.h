#ifndef _AccessSettingReinizializer_H_
#define _AccessSettingReinizializer_H_

#include <boost/shared_ptr.hpp>
#include "util/Interface.h"
#include "context/VariableDefinition.h"
#include "context/CallerController.h"
#include "datatable/DataTable.h"

class AccessSettingReinizializer : public Interface
{
    virtual bool reinitialize(boost::shared_ptr<VariableDefinition> def, boost::shared_ptr<CallerController> caller,
                      boost::shared_ptr<DataTable> value) /* throws(ContextException) */ = 0;
};
#endif  //_AccessSettingReinizializer_H_
