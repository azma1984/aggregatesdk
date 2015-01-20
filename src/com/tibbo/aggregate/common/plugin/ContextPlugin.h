#ifndef _ContextPlugin_H_
#define _ContextPlugin_H_


#include "plugin/AggreGatePlugin.h"

struct ContextPlugin : public AggreGatePlugin
{
    /**
    * This method is called right after plugin creation.
    */
    virtual void initialize() = 0;// throws PluginException;

    /**
    * This method is called right before plugin destruction.
    */
    virtual void deinitialize() = 0;// throws PluginException;

    /**
    * This method is called when server context tree is fully loaded.
    *
    * @param contextManager
    *          Server context manager
    * @throws ContextException
    *           If some context API calls from within this method have thrown an exception
    * @throws PluginException
    *           If plugin internal error occurred
    */
    virtual  void install(ContextManager contextManager) = 0;// throws ContextException, PluginException;

    /**
    * This method is called before server context tree is destroyed.
    *
    * @param contextManager
    *          Server context manager
    * @throws ContextException
    *           If some context API calls from within this method have thrown an exception
    * @throws PluginException
    *           If plugin internal error occurred
    */
    virtual void deinstall(ContextManager contextManager) = 0 ;//throws ContextException, PluginException;

    /**
    * This method is called when a new server context is created or loaded upon server startup.
    *
    * @param context
    *          Server context
    * @throws ContextException
    *           If some context API calls from within this method have thrown an exception
    * @throws PluginException
    *           If plugin internal error occurred
    */
    virtual void install(ServerContext context) = 0 ;//throws ContextException, PluginException;

    /**
    * This method is called when a server context is destroyed or removed upon server shutdown.
    *
    * @param context
    *          Server context
    * @throws ContextException
    *           If some context API calls from within this method have thrown an exception
    * @throws PluginException
    *           If plugin internal error occurred
    */
    virtual void deinstall(ServerContext context) = 0;//throws ContextException, PluginException;

    /**
    * This method is called in the very end of server startup.
    *
    * @throws PluginException
    *           If plugin internal error occurred
    *
    */
    virtual void launch() = 0;//throws PluginException;

    /**
    * This method is called in the very beginning of server shutdown.
    *
    * @throws PluginException
    *           If plugin internal error occurred
    *
    */
    virtual void shutdown() = 0;// throws PluginException;
};
#endif  /_ContextPlugin_H_
