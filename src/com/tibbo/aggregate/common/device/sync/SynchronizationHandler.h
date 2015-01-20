#ifndef SynchronizationHandlerH
#define SynchronizationHandlerH

#include "Cres.h"
#include "context/VariableDefinition.h"
//#include "context/VariableStatus.h"
//#include "device/DeviceContext.h"
//#include "device/DeviceDriver.h"
//#include "device/DeviceSettingStatus.h"
//#include "device/sync/SettingSynchronizationOptions.h"

//todo Class stub
class SynchronizationHandler
{
 private:
//    SettingSynchronizationOptions* synchronizationOptions;
//    DeviceContext* deviceContext;
//    const std::string & variable;
//    VariableStatus* customStatus;
    bool synchronizationEnabled;

//public:
//    void initialize(DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check);
//    void deinitialize();
//    void startSynchronization();
//    bool isSynchronizationEnabled();
//
//public: 
//    void setSynchronizationEnabled(bool synchronizationEnabled);
//
//public:
//    DataTable* readFromCache(CallerController* caller, RequestController* request);
//    void writeToCache(CallerController* caller, RequestController* request, DataTable* value);
//    ValueWriter* createServerWriter();
//    ValueReader* createServerReader();
//    Date* getServerModificationTime();
//    Date* getDeviceModificationTime();
//    bool isUpdatedOnTheServer(CallerController* caller);
//    int getDirectionOverride();
//    VariableDefinition* getPersistentDefinition(VariableDefinition* vd);
//    SettingSynchronizationOptions* getSynchronizationOptions();
//
//public: 
//    DeviceContext* getDeviceContext();
//    const std::string & getVariable();
//
//public:
//    VariableStatus* getCustomStatus();
//    void setCustomStatus(VariableStatus* customStatus);
//
//
    SynchronizationHandler();
};


#endif 
