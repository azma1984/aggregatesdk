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
    SettingSynchronizationOptions* synchronizationOptions;
    DeviceContext* deviceContext;
    std::string variable;
    VariableStatus* customStatus;
    bool synchronizationEnabled;

public:
    void initialize(DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check);
    void deinitialize();
    void startSynchronization();
    bool isSynchronizationEnabled();


    void setSynchronizationEnabled(bool synchronizationEnabled);


    DataTable* readFromCache(CallerController* caller, RequestController* request);
    void writeToCache(CallerController* caller, RequestController* request, DataTable* value);
    ValueWriter* createServerWriter();
    ValueReader* createServerReader();
    boost::shared_ptr<Date> getServerModificationTime();
    boost::shared_ptr<Date> getDeviceModificationTime();
    bool isUpdatedOnTheServer(CallerController* caller);
    int getDirectionOverride();
    VariableDefinition* getPersistentDefinition(VariableDefinition* vd);
    SettingSynchronizationOptions* getSynchronizationOptions();


    DeviceContext* getDeviceContext();
    std::string getVariable();


    VariableStatus* getCustomStatus();
    void setCustomStatus(VariableStatus* customStatus);


    SynchronizationHandler();
};


#endif 
