#ifndef _DemoDeviceDriver_H_
#define _DemoDeviceDriver_H_


#include "device/AbstractDeviceDriver.h"
#include "context/ContextUtils.h"
#include "context/EventDefinition.h"
#include "context/FunctionDefinition.h"
#include "context/VariableDefinition.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "device/DeviceContext.h"
#include "util/TimeHelper.h"

//todo - class stub
class DemoDeviceDriver : public AbstractDeviceDriver
{
 private:
    std::string demoSettingValue;

public:
    void setupDeviceContext(DeviceContextPtr deviceContext);
    VariableDefinitionPtr readVariableDefinitions();
    FunctionDefinitionPtr  readFunctionDefinitions();
    EventDefinitionPtr     readEventDefinitions();
    DataTablePtr readVariableValue(VariableDefinitionPtr vd);
    void writeVariableValue(VariableDefinitionPtr vd, DataTablePtr value, DataTablePtr deviceValue);
    DataTablePtr executeFunction(FunctionDefinitionPtr fd, DataTablePtr parameters);
    void finishSynchronization();

    DemoDeviceDriver();

};
#endif 