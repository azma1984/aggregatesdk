#ifndef _DeviceDriver_H_
#define _DeviceDriver_H_

#include "plugin/AggreGatePlugin.h"
#include "device/DeviceContext.h"
#include <string>
#include <list>
#include <set>

class DeviceDriver : public AggreGatePlugin
{
    // Device context control

    /**
    * <p>
    * Should return device connection properties as a single-record TableFormat. The format must include at least "name" field.
    *
    * <p>
    * This method is defined in AtestbstractDeviceDriver and should not be overridden in most cases.
    */
    virtual boost::shared_ptr<TableFormat> createConnectionPropertiesFormat() = 0;

    /**
    * <p>
    * This method is called once during creation of the device context (after device creation and on server startup). Driver implementation usually override it to add definitions of device
    * communication settings (e.g. IP address and port number) to the device context. Setup of synchronization settings for the whole device and individual settings is also performed at this point.
    *
    * <p>
    * Variable definitions representing device communication settings should belong to ContextUtils.GROUP_ACCESS variable group.
    */
    virtual void setupDeviceContext(boost::shared_ptr<DeviceContext> deviceContext) = 0;// throws ContextException;

    /**
    * In contrast to {@link #setupDeviceContext(DeviceContext)}, this method it called only once in the end of initial device account creation. Its implementation can correct necessary default values
    * of device context variables, such as metadata reading mode or device settings caching mode. Overriding this method is not necessary for most drivers.
    */
    virtual void configureDeviceAccount(boost::shared_ptr<DeviceContext> deviceContext, boost::shared_ptr<CallerController> caller) = 0 ;//throws ContextException;

    /**
    * <p>
    * This method is called when any variable belonging to ContextUtils.GROUP_ACCESS variable group is changed. Driver implementations may override it to respond to device communication settings
    * changes by resetting driver internal state.
    *
    * <p>
    * Note, that in most cases overriding this method is not necessary as driver implementations should re-read device communication settings from device context in the beginning of every
    * synchronization, e.g. from startSynchronization() method.
    */
    virtual void accessSettingUpdated(const std::string& name) = 0;

    /**
    * Should return implementation of a DiscoveryProvider is driver supports device discovery or null otherwise.
    */
    virtual DiscoveryProvider createDiscoveryProvider() = 0;

    // Synchronization process

    /**
    * This method is called once before every synchronization. The synchronization is silently skipped if it returns null. Certain drivers may override this method to skip synchronization if device
    * communication settings were not yet filled in.
    *
    * @throws ContextException
    *           Should be thrown by the driver to force generating Info event in addition to skipping the synchronization. This Info event contains exception message that is supposed to describe the
    *           reason of synchronization skip, e.g. "device address not specified". In order to avoid event flooding, driver should throw an exception only if full synchronization is performed.
    */
    virtual bool shouldSynchronize(boost::shared_ptr<SynchronizationParameters> parameters) = 0;//throws ContextException;

    /**
    * Called in the beginning of every synchronization cycle. Driver implementations may read communication settings from device context at this point.
    *
    * @throws DeviceException
    *           If some device communications were performed and error occurred
    */
    virtual void startSynchronization() = 0;//throws DeviceException;

    /**
    * This method should return true if device uses normal connection model.
    */
    virtual bool isUsesConnections() = 0;

    /**
    * This method should return true driver has successfully established a link with the hardware.
    */
    virtual bool isConnected() = 0;

    /**
    * This method is called if isConnected() method returned false or DeviceContext.setReconnectionRequired(true) was called by the driver during previous synchronization. It should establish
    * connection with the hardware.
    *
    * @throws DeviceException
    *           If connection has failed
    */
    virtual void connect() = 0;//throws DeviceException;

    /**
    * This method is called when device account is being deleted, server is being stopped, or DeviceContext.setReconnectionRequired(true) was called by the driver during previous synchronization. The
    * method should break a link with the hardware and clean up any internal data related to the connection.
    *
    * @throws DeviceException
    *           If proper disconnection has failed
    */
    virtual void disconnect() = 0;//throws DeviceException;

    /**
    * Should return true if device driver has support for assets.
    */
    virtual  bool isUsesAssets() = 0;

    /**
    * This method returns the hierarchical list of assets provided by the device.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device assets reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    virtual std::list<DeviceAssetDefinition> readAssets() = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * Should return true if server should cache device-side values and pass them to {@link #writeVariableValue(VariableDefinition, DataTable, DataTable)} along with new values.
    */
    virtual bool isUseDeviceSideValuesCache() = 0;

    /**
    * <p>
    * This method should return definitions of device settings (variables). Its implementations may read device metadata or construct the definitions based on server-side device configuration.
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} method returns false.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    virtual std::list<VariableDefinition> readVariableDefinitions() = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * <p>
    * This method is similar to the {@link #readVariableDefinitions()}. If should return only definitions of variables that belong to enabled assets and their children.
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} returns true.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    std::list<VariableDefinition> readVariableDefinitions(std::list<DeviceAssetDefinition> assets) = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * <p>
    * This method should return definitions of device operations (functions). Its implementations may read device metadata or construct the definitions based on server-side device configuration.
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} method returns false.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    std::list<FunctionDefinition> readFunctionDefinitions() = 0;// throws ContextException, DeviceException, DisconnectionException;

    /**
    * <p>
    * This method is similar to the {@link #readFunctionDefinitions()}. If should return only definitions of functions that belong to enabled assets and their children.
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} returns true.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    virtual std::list<FunctionDefinition> readFunctionDefinitions(List<DeviceAssetDefinition> assets) = 0; throws ContextException, DeviceException, DisconnectionException;

    /**
    * <p>
    * This method should return definitions of events that may be generated by the device. Its implementations may read device metadata or construct the definitions based on server-side device
    * configuration.
    *
    * <p>
    * Note, that instances of these events may be generated by the driver asynchronously at any time after at least one device synchronization has finished. This is performed by calling
    * DeviceContext.fireEvent().
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} method returns false.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    virtual std::list<EventDefinition> readEventDefinitions() = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * <p>
    * This method is similar to the {@link #readEventDefinitions()}. If should return only definitions of events that belong to enabled assets and their children.
    *
    * <p>
    * The method is called only if {@link #isUsesAssets()} returns true.
    *
    * @throws ContextException
    *           If some server-side error occurred
    * @throws DeviceException
    *           If device metadata reading failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was interrupted during metadata reading
    */
    virtual std::list<EventDefinition> readEventDefinitions(std::list<DeviceAssetDefinition> assets) = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * Implementation of this method should read value of device setting pointed by the argument, convert it to the form of Data Table and return it.
    *
    * @throws ContextException
    *           If conversion of device value to the Data Table has occurred
    * @throws DeviceException
    *           If reading of device setting has failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was lost during operation
    */
    virtual boost::shared_ptr<DataTable> readVariableValue(boost::shared_ptr<VariableDefinition> vd) =0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * Implementation of this method should write server-side value of device setting into a hardware. This method will be called only if device setting definition is writable (e.g server-side changes
    * are allowed.
    *
    * @param deviceValue
    *          Previous value of setting received from device by calling {@link #readVariableValue(VariableDefinition)}. Will be NULL if server was restarted since previous read operation or
    *          {@link #isUseDeviceSideValuesCache()} returns false;
    *
    * @throws ContextException
    *           If conversion of the Data Table to a device value has occurred
    * @throws DeviceException
    *           If writing of device setting has failed (e.g. hardware error occurred)
    * @throws DisconnectionException
    *           If device connection was lost during operation
    */
    virtual void writeVariableValue(boost::shared_ptr<VariableDefinition> vd, boost::shared_ptr<DataTable> value,
                                    boost::shared_ptr<DataTable> deviceValue) = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * This method should implement the call of the device-side operation (function). It should decode parameters Data Table to a device native format, pass this input to the device and call requested
    * operation. Opeartion output should be encoded in the form of Data Table and returned by this method
    *
    * @throws ContextException
    *           If server-side error occurred (e.g. conversion of input/output between Data Tables and device native format)
    * @throws DeviceException
    *           If device-side error occurred
    * @throws DisconnectionException
    *           If device connection was lost during operation
    */
    virtual DataTable executeFunction(boost::shared_ptr<FunctionDefinition> fd, boost::shared_ptr<DataTable> parameters) = 0;//throws ContextException, DeviceException, DisconnectionException;

    /**
    * This method should return timestamp of device setting last modification time as reported by the hardware. If modification-time-based synchronization is not supported, the method should return
    * null.
    *
    * @throws DeviceException
    *           If device-side error occurred
    * @throws DisconnectionException
    *           If device connection was lost during operation
    */
    virtual Date getVariableModificationTime(const std::string& name) = 0;//throws DeviceException, DisconnectionException;

    /**
    * This method should update device-side modification time of a setting pointed by name argument or do nothing if modification-time-based synchronization is not supported.
    *
    * @throws DeviceException
    *           If device-side error occurred
    * @throws DisconnectionException
    *           If device connection was lost during operation
    */
    virtual void updateVariableModificationTime(const std::string& name, boost::shared_ptr<Date> value) = 0;//throws DeviceException, DisconnectionException;

    /**
    * This method allows the driver to report custom variable status to the system core. It should return null if no custom status should be used.
    */
    virtual VariableStatus getCustomVariableStatus(const std::string& name) = 0;//throws DeviceException, DisconnectionException;

    /**
    * This method is called in the end of every synchronization. Its implementations may perform some cleanup.
    *
    * @throws DeviceException
    *           If some device communications were performed and error occurred
    * @throws DeviceException
    *           If some device communications were performed and disconnection occurred
    */
    virtual void finishSynchronization() = 0;//throws DeviceException, DisconnectionException;

    // Driver info and status

    /**
    * This method should return string representation of device address or null if device has no address. The address will be used by device discovery module to find existing devices.
    *
    * @return Device address
    */
    virtual std::string getPrimaryAddress() = 0;

    /**
    * Returns the list of device addresses. For example, for a network device this list can contain device host name and IPv4/IPv6 addresses of devices' network interfaces.
    *
    * @return Set of device addresses
    */
    virtual std::set<std::string> getAddresses() = 0;

    /**
    * Returns device protocol description. This method should return null, if device protocol name matches driver description.
    *
    * @return Device protocol description
    */
    virtual std::string getProtocol() = 0;

    /**
    * Returns current status of device and/or driver or null if detailed status is not available.
    *
    * @return Textual description of device/driver status
    */
    virtual std::string getStatus() = 0;

    /**
    * Implementations of this method should provide list of expression that will be used to show device status on dynamic maps. The expressions may include relative references to variables/functions of
    * device context.
    *
    * @return The list of device status expressions
    */
    virtual std::list<Expression> getStatusExpressions(CallerController caller) = 0;

    /**
    * Tries to discover device variable that was not found during automatic metadata reading.
    *
    * @return Variable definition or null if nothing was found
    */
    virtual boost::shared_ptr<VariableDefinition> discoverVariable(const std::string& name, Object helper);

    /**
    * Tries to discover device variable that was not found during automatic metadata reading.
    *
    * @return Variable definition or null if nothing was found
    */
    virtual boost::shared_ptr<FunctionDefinition> discoverFunction(const std::string& name, Object helper);

    /**
    * Tries to discover device event that was not found during automatic metadata reading.
    *
    * @return Event definition or null if nothing was found
    */
    virtual boost::shared_ptr<EventDefinition> discoverEvent(const std::string& name, Object helper);
};
#endif  //_DeviceDriver_H_
