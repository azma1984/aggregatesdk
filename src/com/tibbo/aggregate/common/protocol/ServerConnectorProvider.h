
#ifndef ServerConnectorProviderH
#define ServerConnectorProviderH


class ServerConnectorProvider
{
   virtual RemoteConnectorPtr getConnector(const std::string & name)=0;
};

#endif
