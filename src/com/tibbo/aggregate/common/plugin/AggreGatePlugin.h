#ifndef _AggreGatePlugin_H_
#define _AggreGatePlugin_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Interface.h"
#include "context/Context.h"


class AggreGatePlugin : public Interface
    
{
    /**
    * Returns plugin ID
    *
    * @return Plugin ID
    */
    virtual std::string getId() = 0;

    /**
    * Returns plugin short ID (last "segment" of full ID).
    *
    * @return Plugin short ID
    */
    virtual std::string getShortId() = 0;

    /**
    * Returns plugin description
    *
    * @return Plugin description
    */
    virtual std::string getDescription() = 0;

    /**
    * Returns sort index used to sort plugins in the list. Plugins with zero sort index are used according to their descriptions.
    *
    * @return Plugin sort index
    */
    virtual int getSortIndex() = 0;

    /**
    * This method is called once during server startup. Its implementation will in most cases call createGlobalConfigContext() to create plugin global configuration. Another typical use is opening some
    * listening server socket to accept connections or receive network datagrams.
    *
    * Note, that this method is called during server context tree initialization. Not all server contexts may be available at the time of its call. To access any server context during plugin startup,
    * override globalStart() method.
    *
    * @throws PluginException
    *           If an error occurred during initialization
    */
    virtual void globalInit(ContextPtr rootContext) = 0;// throws PluginException;

    /**
    * This method is called once for every system user upon its creation or server startup. Its implementation will in most cases call createUserConfigContext() to create plugin user-level
    * configuration.
    *
    * This method won't be called if user-level configuration is disabled for the user.
    *
    * @throws PluginException
    *           If an error occurred during initialization
    */
    virtual void userInit(ContextPtr userContext) = 0;// throws PluginException;

    /**
    * This method is called once during server shutdown. It's usually used to terminate any threads created by the plugin and close all server sockets opened by it.
    *
    * @throws PluginException
    *           If an error occurred during de-initialization
    */
    virtual void globalDeinit(ContextPtr rootContext) = 0;//throws PluginException;

    /**
    * This method is called once for every system user upon its deletion or server shutdown. The method will be called even if user-level configuration is disabled for the user.
    *
    * @throws PluginException
    *           If an error occurred during de-initialization
    */
    virtual void userDeinit(ContextPtr userContext) = 0;//throws PluginException;

    /**
    * This method is called once for every plugin at the moment when server context tree is fully initialized and all contexts are available.
    *
    * @throws PluginException
    *           If an error occurred during plugin startup
    */
    virtual void globalStart() = 0;//throws PluginException;

    /**
    * This method is called once for every plugin upon server shutdown.
    *
    * @throws PluginException
    *           If an error occurred during plugin shutdown
    */
    virtual void globalStop() = 0;//throws PluginException;

    /**
    * This method creates and returns context containing plugin's global configuration. There is no need to keep reference to this context for future use as it may be accessed via
    * getGlobalConfigContext() method.
    *
    * @param rootContextPtr          Server root ContextPtr @param requestReboot
    *          Prompt an operator to reboot server after a global plugin property change
    * @param properties
    *          List of global plugin properties
	* @return Plugin global config Context*/
    virtual ContextPtrcreateGlobalConfigContext(ContextPtr rootContext, bool requestReboot,
                                               VariableDefinitionPtr properties) = 0;

    /**
    * This method creates and returns context containing plugin's user-level configuration. There is no need to keep reference to this context for future use as it may be accessed via
    * getUserConfigContext() method.
    *
    * @param userContextPtr          Context of user to associate the configuration with
    * @param requestReboot
    *          Prompt an operator to reboot server after a global plugin property change
    * @param properties
    *          List of user-level plugin properties
	* @return Plugin user-level config Context*/
    virtual ContextPtrcreateUserConfigContext(ContextPtr userContext, bool requestReboot,
                                            VariableDefinitionPtr properties) = 0;

    /**
	* Returns plugin's global configuration Context*
	* @return Global configuration Context*/
    virtual ContextPtrgetGlobalConfigContext() = 0;

    /**
    * Returns plugin's user-level configuration context or NULL if user-level configuration is disabled for the user.
    *
    * @return User-level configuration Context*/
    virtual ContextPtrgetUserConfigContext(const std::string& username) = 0;
};
#endif  //_AggreGatePlugin_H_
