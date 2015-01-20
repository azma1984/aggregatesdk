// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceContext.java

#ifndef _DeviceContext_H_
#define _DeviceContext_H_

#include "server/ServerContext.h"
#include "device/DeviceDriver.h"
#include "device/DeviceSettingStatus.h"
#include "device/sync/SettingSynchronizationOptions.h"
#include "device/sync/SynchronizationHandler.h"
#include "device/AccessSettingReinizializer.h"
#include "util/date.h"
//#include <mutex>

struct DeviceContext
    : public ServerContext
{
    static const int CONNECTION_STATUS_OFFLINE = 0;
    static const int CONNECTION_STATUS_ONLINE = 1;
    static const int CONNECTION_STATUS_SUSPENDED = 2;
    static const int CONNECTION_STATUS_UNKNOWN = 3;
    static const int SYNC_STATUS_OK = 20;
    static const int SYNC_STATUS_WAITING = 30;
    static const int SYNC_STATUS_ERROR = 40;
    static const int SYNC_STATUS_UNDEFINED = 50;
    static const int SYNC_STATUS_CONNECTING = 70;
    static const int SYNC_STATUS_READING_METADATA = 80;
    static const int SYNC_STATUS_SYNCHRONIZING_SETTINGS = 90;
    static const int CURRENT_SYNC_STATUS_CONNECTING = 0;
    static const int CURRENT_SYNC_STATUS_READING_METADATA = 1;
    static const int CURRENT_SYNC_STATUS_SYNCHRONIZING_PROPERTIES = 2;
    static const int SYNC_MODE_NORMAL = 0;
    static const int SYNC_MODE_DISABLED = 1;
    static const int SYNC_MODE_DIRECT_ACCESS = 2;
    static const int SYNC_MODE_MASTER_VALUE = 3;
    static const int SYNC_MODE_IGNORE_MODIFICATION_TIME = 4;
    static const int SYNC_MODE_READ_ONLY = 5;
    static const int SYNC_MODE_DIRECT_WRITE = 6;
    static const int SYNC_MODE_CUSTOM = 100;
    static const int DIRECTION_NONE = -1;
    static const int DIRECTION_AUTO = 0;
    static const int DIRECTION_DEVICE_TO_SERVER = 1;
    static const int DIRECTION_SERVER_TO_DEVICE = 2;
    static const int HISTORY_RATE_CHANGES = -1;
    static const int HISTORY_RATE_ALL = 0;

	  // Fetching context state
  
  /**
   * Returns caller controller with effective permissions of the user owning this device account.
   * 
   * @return Caller controller
   */
    CallerController* getCallerController();

	  /**
   * Returns device driver used by this device account.
   * 
   * @return Device driver
   */
  //  DeviceDriver* getDriver();

	//  /**
 //  * This method returns string representation of device address or null if device has no address. The call is delegated to device driver.
 //  * 
 //  * @return Device address
 //  */
 //   std::string* getAddress();
	//  /**
 //  * This method returns the list of device assets.
 //  * 
 //  * @return Device assets list
 //  */
 //   std::list  getAssets();
	//  /**
 //  * Returns synchronization options of a device setting variable.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  * @return Synchronization options
 //  */
 //   SettingSynchronizationOptions* getSynchronizationOptions(const std::string &variable);
	//  /**
 //  * Returns synchronization status of a device setting variable.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  * @return Synchronization status
 //  */
	//DeviceSettingStatus* getSettingStatus(const std::string &variable);
	//  /**
 //  * Returns device online status. Note that online status may be reported incorrectly if device is suspended.
 //  * 
 //  * @return true if device is online, false otherwise
 //  */
 //   bool isOnline();
	//  // Changing context state
 // 
 // /**
 //  * Sets default synchronization period for the device account. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default period will be used only for newly created device accounts. This method will have no effect if default synchronization period has already been changed for an account.
 //  * 
 //  * @param period
 //  *          New default synchronization period
 //  */
 //   void setDefaultSynchronizationPeriod(long period);
	//  /**
 //  * Sets default status expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default status expression will be used only for newly created device accounts. This method will have no effect if default status expression has already been changed for an account.
 //  * 
 //  * @param expression
 //  *          New default status expression
 //  */
 //   void setDefaultStatusExpression(std::string* expression);
	//  /**
 //  * Sets default color expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default color expression will be used only for newly created device accounts. This method will have no effect if default color expression has already been changed for an account.
 //  * 
 //  * @param expression
 //  *          New default color expression
 //  */
 //   void setDefaultColorExpression(std::string* expression);
	//  /**
 //  * Sets default latitude expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default latitude expression will be used only for newly created device accounts. This method will have no effect if default latitude expression has already been changed for an account.
 //  * 
 //  * @param expression
 //  *          New default latitude expression
 //  */
 //   void setDefaultLatitudeExpression(std::string* expression);

	//  /**
 //  * Sets default longitude expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default longitude expression will be used only for newly created device accounts. This method will have no effect if default longitude expression has already been changed for an account.
 //  * 
 //  * @param expression
 //  *          New default longitude expression
 //  */
 //   void setDefaultLongitudeExpression(std::string* expression);
	//  /**
 //  * Sets default device setting cache mode. This method is often called from DeviceDriver.setupDeviceContext().
 //  * 
 //  * The default mode will be used only for newly created device accounts. This method will have no effect if default mode has already been changed for an account.
 //  * 
 //  * @param mode
 //  *          Cache mode ({@link com.tibbo.aggregate.common.device.GenericPropertiesConstants#CACHE_DATABASE} = Database,
 //  *          {@link com.tibbo.aggregate.common.device.GenericPropertiesConstants#CACHE_MEMORY} = Memory)
 //  */
 //   void setDefaultCacheMode(int mode);
	//  /**
 //  * Sets default synchronization options for a device setting variable. This call will modify system-wide list of default synchronization options that may be accessed via server global settings.
 //  * 
 //  * The default synchronization options will be used only for newly created device accounts. This method will have no effect if default setting synchronization options have already been changed for
 //  * an account.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  * @param options
 //  *          Default synchronization options
 //  */
 //   void setDefaultSynchronizationOptions(const std::string &variable, SettingSynchronizationOptions* options);
 //   /**
 //  * Sets default synchronization options for a device setting variable. This call can modify system-wide or local (account-wide) list of default synchronization options.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  * @param local
 //  *          Whether to modify system-wide or local default synchronization options list
 //  * @param options
 //  *          Default synchronization options
 //  */
	//void setDefaultSynchronizationOptions(const std::string &variable, bool local, SettingSynchronizationOptions* options);
	//  /**
 //  * Sets custom synchronization handler for a device setting variable.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  * @param handler
 //  *          Synchronization handler
 //  * @param forceCustomSyncMode
 //  *          Switch setting to a custom synchronization mode if true
 //  */
 //   void setCustomSynchronizationHandler(const std::string &variable, SynchronizationHandler* handler, bool forceCustomSyncMode);

	//  /**
 //  * Removes custom synchronization handler of a device setting variable.
 //  * 
 //  * If variable was in custom synchronization mode, the mode is changed to normal.
 //  * 
 //  * @param variable
 //  *          Name of variable
 //  */
 //   void removeCustomSynchronizationHandler(const std::string &variable);
	//  /**
 //  * Sets the "secondary" type of device context. Full type will be device.deviceType, where "device" is the base type.
 //  * 
 //  * This method should be called from {@link com.tibbo.aggregate.common.device.DeviceDriver#setupDeviceContext(DeviceContext)}.
 //  * 
 //  * @param deviceType
 //  *          Device type string
 //  * @throws ContextException
 //  *           If device type change fails since device controller of a new device type cannot be applied to current device context
 //  */
 //   void setDeviceType(std::string* deviceType) ;
	//  /**
 //  * Sets an access setting reinitializer in the device context. The reinitializer is supposed to react to a changed device access setting change. However, in most cases the system just reconnects to
 //  * the device and resynchronizes it after access setting change, so no custom reinitializers are necessary.
 //  * 
 //  * @param variable
 //  *          Name of access setting variable those changes should be tracked
 //  * @param reinitializer
 //  *          The reinitializer
 //  */
 //   void setAccessSettingReinitializer(const std::string &variable, AccessSettingReinizializer* reinitializer);
	//  // Controlling context
 // 
 // /**
 //  * Should be called by device driver to request reconnection to the hardware in the beginning of the next synchronization cycle.
 //  */
 //   void requestReconnection();
	//  /**
 //  * Should be called by the device driver to request full synchronization. The synchronization will be started right after the ongoing synchronization completes if it's currently running.
 //  */
 //   void requestSynchronization();
	//  /**
 //  * Same as {@link #requestSynchronization()}, but allows to temporarily enable extended connection status.
 //  */
 //   void requestSynchronization(bool useExtendedStatus);
	//  /**
 //  * Should be called by the driver to force re-reading of device assets during next synchronization.
 //  */
 //   void requestAssetsUpdate();
	//  /**
 //  * Should be called by the device driver once new setting's value was asynchronously received from the hardware. This method updates settings cache.
 //  */
 //   void asyncVariableUpdate(const std::string &variable, DataTable* value) /* throws(DisconnectionException, ContextException, DeviceException) */;
 //   /**
 //  * Should be called by the device driver once a new historical value of a device setting was received from hardware. This method stores value in the server database and updates associated
 //  * statistical channels.
 //  */
	//void processHistoricalValue(const std::string &variable, Date* timestamp, DataTable* value) ;

	//  /**
 //  * Returns synchronization lock.
 //  */
 //   std::mutex  getSynchronizationLock();
 // /**
 //  * Executes a synchronous synchronization using provided parameters.
 //  * 
 //  * Warning: the synchronization lock must be obtained before the call to this method and released later on.
 //  */
 //   SynchronizationResult* executeSynchronization(SynchronizationParameters* parameters);
	//  /**
 //  * Sets new synchronization status for the device. This method must be called by the driver in the end of synchronization only for devices those
 //  * {@link com.tibbo.aggregate.common.device.DeviceDriver#isUsesConnections()} method returns false. The method is normally called from
 //  * {@link com.tibbo.aggregate.common.device.DeviceDriver#finishSynchronization()}.
 //  * 
 //  * @param online
 //  *          New connection status of the device
 //  */
 //   void setOnline(bool online);
	//  /**
 //  * Forces the device driver to discover a new variable and adds it to context if found.
 //  * 
 //  * @return Definition of new variable if added or null otherwise
 //  */
 //   VariableDefinition* discoverDeviceVariable(const std::string &name, int timeout, void* helper) ;
	//  /**
 //  * Forces the device driver to discover a new function and adds it to context if found.
 //  * 
 //  * @return Definition of new function if added or null otherwise
 //  */
 //   FunctionDefinition* discoverDeviceFunction(const std::string &name, int timeout, void* helper) ;
	//  /**
 //  * Forces the device driver to discover a new event and adds it to context if found.
 //  * 
 //  * @return Definition of new event if added or null otherwise
 //  */
 //   EventDefinition* discoverDeviceEvent(const std::string &name, int timeout, void* helper) ;
};


#endif
