#ifndef _DeviceContext_H_
#define _DeviceContext_H_

#include "server/ServerContext.h"
#include "device/DeviceDriver.h"
//#include "device/DeviceSettingStatus.h"
//#include "device/sync/SettingSynchronizationOptions.h"
//#include "device/sync/SynchronizationHandler.h"
#include "device/AccessSettingReinizializer.h"
#include "util/date.h"
#include "device/sync/SynchronizationResult.h"
#include "device/sync/SynchronizationParameters.h"
#include <boost/thread/mutex.hpp>
#include <boost/thread.hpp>
class SettingSynchronizationOptions;

class DeviceSettingStatus;
class SynchronizationHandler;

class DeviceContext
    : public ServerContext
{
public:
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
   * @return
   */
    virtual CallerControllerPtr getCallerController()=0;

  /**
   * Returns device driver used by this device account.
   * 
   * @return DeviceDriverPtr/
    virtual DeviceDriverPtr getDriver()=0;

  /**
   * This method returns string representation of device address or null if device has no address. The call is delegated to device driver.
   * 
   * @return Device address
   */
   virtual  std::string getAddress()=0;
  /**
   * This method returns the list of device assets.
   * 
   * @return Device assets list
   */
   virtual  std::list<DeviceAssetDefinition> getAssets()=0;
  /**
   * Returns synchronization options of a device setting variable.
   * 
   * @param variable
   *          Name of variable
   * @return Synchronization options
   */
   virtual  SettingSynchronizationOptionsPtr getSynchronizationOptions(const std::string &variable)=0;
 /**
   * Returns synchronization status of a device setting variable.
   * 
   * @param variable
   *          Name of variable
   * @return Synchronization status
   */
	virtual DeviceSettingStatusPtr getSettingStatus(const std::string &variable)=0;
 /**
   * Returns device online status. Note that online status may be reported incorrectly if device is suspended.
   * 
   * @return true if device is online, false otherwise
   */
   virtual  bool isOnline()=0;
	  // Changing context state
  
  /**
   * Sets default synchronization period for the device account. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default period will be used only for newly created device accounts. This method will have no effect if default synchronization period has already been changed for an account.
   * 
   * @param period
   *          New default synchronization period
   */
   virtual  void setDefaultSynchronizationPeriod(long period)=0;
  /**
   * Sets default status expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default status expression will be used only for newly created device accounts. This method will have no effect if default status expression has already been changed for an account.
   * 
   */
   virtual  void setDefaultStatusExpression(const std::string & expression)=0;
  /**
   * Sets default color expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default color expression will be used only for newly created device accounts. This method will have no effect if default color expression has already been changed for an account.
   * 
   */
   virtual  void setDefaultColorExpression(const std::string & expression)=0;
  /**
   * Sets default latitude expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default latitude expression will be used only for newly created device accounts. This method will have no effect if default latitude expression has already been changed for an account.
   * 
   */
   virtual  void setDefaultLatitudeExpression(const std::string & expression)=0;

  /**
   * Sets default longitude expression for the device account. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default longitude expression will be used only for newly created device accounts. This method will have no effect if default longitude expression has already been changed for an account.
   * 
   */
    virtual void setDefaultLongitudeExpression(const std::string & expression)=0;
  /**
   * Sets default device setting cache mode. This method is often called from DeviceDriver.setupDeviceContext().
   * 
   * The default mode will be used only for newly created device accounts. This method will have no effect if default mode has already been changed for an account.
   * 
   * @param mode
   *          Cache mode ({@link com.tibbo.aggregate.common.device.GenericPropertiesConstants#CACHE_DATABASE} = Database,
   *          {@link com.tibbo.aggregate.common.device.GenericPropertiesConstants#CACHE_MEMORY} = Memory)
   */
    virtual void setDefaultCacheMode(int mode)=0;
  /**
   * Sets default synchronization options for a device setting variable. This call will modify system-wide list of default synchronization options that may be accessed via server global settings.
   * 
   * The default synchronization options will be used only for newly created device accounts. This method will have no effect if default setting synchronization options have already been changed for
   * an account.
   * 
   * @param variable
   *          Name of variable
   * @param options
   *          Default synchronization options
   */
    virtual void setDefaultSynchronizationOptions(const std::string &variable, SettingSynchronizationOptionsPtr options)=0;
  /**
   * Sets default synchronization options for a device setting variable. This call can modify system-wide or local (account-wide) list of default synchronization options.
   * 
   * @param variable
   *          Name of variable
   * @param local
   *          Whether to modify system-wide or local default synchronization options list
   * @param options
   *          Default synchronization options
   */
	virtual void setDefaultSynchronizationOptions(const std::string &variable, bool local, SettingSynchronizationOptionsPtr options)=0;
  /**
   * Sets custom synchronization handler for a device setting variable.
   * 
   * @param variable
   *          Name of variable
   * @param handler
   *          SynchronizationHandlerPtr @param forceCustomSyncMode
   *          Switch setting to a custom synchronization mode if true
   */
    virtual void setCustomSynchronizationHandler(const std::string &variable, SynchronizationHandlerPtr handler, bool forceCustomSyncMode)=0;

  /**
   * Removes custom synchronization handler of a device setting variable.
   * 
   * If variable was in custom synchronization mode, the mode is changed to normal.
   * 
   * @param variable
   *          Name of variable
   */
    virtual void removeCustomSynchronizationHandler(const std::string &variable)=0;
  /**
   * Sets the "secondary" type of device context. Full type will be device.deviceType, where "device" is the base type.
   * 
   * This method should be called from {@link com.tibbo.aggregate.common.device.DeviceDriver#setupDeviceContext(DeviceContext)}.
   * 
   * @param deviceType
   *          Device type string
   * @throws ContextException
   *           If device type change fails since device controller of a new device type cannot be applied to current device */
   virtual  void setDeviceType(const std::string & deviceType)=0 ;
  /**
   * Sets an access setting reinitializer in the device context. The reinitializer is supposed to react to a changed device access setting change. However, in most cases the system just reconnects to
   * the device and resynchronizes it after access setting change, so no custom reinitializers are necessary.
   * 
   * @param variable
   *          Name of access setting variable those changes should be tracked
   * @param reinitializer
   *          The reinitializer
   */
   virtual  void setAccessSettingReinitializer(const std::string &variable, AccessSettingReinizializer* reinitializer)=0;
	  // Controlling context
  
  /**
   * Should be called by device driver to request reconnection to the hardware in the beginning of the next synchronization cycle.
   */
    virtual void requestReconnection()=0;
  /**
   * Should be called by the device driver to request full synchronization. The synchronization will be started right after the ongoing synchronization completes if it's currently running.
   */
   virtual  void requestSynchronization()=0;
  /**
   * Same as {@link #requestSynchronization()}, but allows to temporarily enable extended connection status.
   */
   virtual  void requestSynchronization(bool useExtendedStatus)=0;
  /**
   * Should be called by the driver to force re-reading of device assets during next synchronization.
   */
   virtual  void requestAssetsUpdate()=0;
  /**
   * Should be called by the device driver once new setting's value was asynchronously received from the hardware. This method updates settings cache.
   */
    virtual void asyncVariableUpdate(const std::string &variable, DataTablePtr value)=0 /* throws(DisconnectionException, ContextException, DeviceException) */;
  /**
   * Should be called by the device driver once a new historical value of a device setting was received from hardware. This method stores value in the server database and updates associated
   * statistical channels.
   */
	virtual void processHistoricalValue(const std::string &variable, DatePtr timestamp, DataTablePtr value)=0 ;

  /**
   * Returns synchronization lock.
   */
//   virtual  std::mutex  getSynchronizationLock(); todo - <mutex> not found
   /**
   * Executes a synchronous synchronization using provided parameters.
   * 
   * Warning: the synchronization lock must be obtained before the call to this method and released later on.
   */
   virtual  SynchronizationResultPtr executeSynchronization(SynchronizationParametersPtr parameters)=0;
  /**
   * Sets new synchronization status for the device. This method must be called by the driver in the end of synchronization only for devices those
   * {@link com.tibbo.aggregate.common.device.DeviceDriver#isUsesConnections()} method returns false. The method is normally called from
   * {@link com.tibbo.aggregate.common.device.DeviceDriver#finishSynchronization()}.
   * 
   * @param online
   *          New connection status of the device
   */
   virtual  void setOnline(bool online)=0;
  /**
   * Forces the device driver to discover a new variable and adds it to context if found.
   * 
   * @return Definition of new variable if added or null otherwise
   */
   virtual  VariableDefinitionPtr discoverDeviceVariable(const std::string &name, int timeout, AgObjectPtr helper)=0 ;
  /**
   * Forces the device driver to discover a new function and adds it to context if found.
   * 
   * @return Definition of new function if added or null otherwise
   */
   virtual  FunctionDefinitionPtr discoverDeviceFunction(const std::string &name, int timeout, AgObjectPtr helper)=0 ;
  /**
   * Forces the device driver to discover a new event and adds it to context if found.
   * 
   * @return Definition of new event if added or null otherwise
   */
   virtual  EventDefinitionPtr discoverDeviceEvent(const std::string &name, int timeout, AgObjectPtr helper)=0 ;
};


#endif
