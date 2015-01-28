#ifndef SynchronizationHandlerH
#define SynchronizationHandlerH

#include "Cres.h"
#include "context/VariableDefinition.h"
#include "context/VariableStatus.h"
#include "device/DeviceContext.h"
#include "device/DeviceDriver.h"
#include "device/DeviceSettingStatus.h"
#include "device/sync/SettingSynchronizationOptions.h"
#include "device/sync/ValueWriter.h"
#include "device/sync/ValueReader.h"
#include "device/sync/AbstractValueWriter.h"
#include "device/sync/AbstractValueReader.h"


class SynchronizationHandler
{
 private:
    SettingSynchronizationOptionsPtr synchronizationOptions;
    DeviceContextPtr deviceContext;
    std::string variable;
    VariableStatusPtr customStatus;
    bool synchronizationEnabled;

public:
    void initialize(DeviceContextPtr deviceContext, const std::string & variable, SettingSynchronizationOptionsPtr synchronizationOptions, bool check);
    void deinitialize();
    void startSynchronization();
    bool isSynchronizationEnabled();


    void setSynchronizationEnabled(bool synchronizationEnabled);


    DataTablePtr readFromCache(CallerControllerPtr caller, RequestControllerPtr request);
    void writeToCache(CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value);
    ValueWriter* createServerWriter();
    ValueReader* createServerReader();
    DatePtr getServerModificationTime();
    DatePtr getDeviceModificationTime();
    bool isUpdatedOnTheServer(CallerControllerPtr caller);
    int getDirectionOverride();
    VariableDefinitionPtr getPersistentDefinition(VariableDefinitionPtr vd);
    SettingSynchronizationOptionsPtr getSynchronizationOptions();


    DeviceContextPtr getDeviceContext();
    std::string getVariable();


    VariableStatusPtr getCustomStatus();
    void setCustomStatus(VariableStatusPtr customStatus);


    SynchronizationHandler();
};


#endif 
