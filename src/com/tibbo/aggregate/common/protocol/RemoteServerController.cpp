// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteServerController.java
#include <RemoteServerController.h>

RemoteServerController::RemoteServerController(RemoteServer *device, bool async, bool useContextManager)
{
	if(useContextManager)
	{
	 setContextManager(new RemoteContextManager(device, async));
	}
}


void RemoteServerController::setContextManager(RemoteContextManager* contextManager)
{
	this->contextManager = contextManager;
}

bool RemoteServerController::connectImpl()
{
	try {
		if(dataChannel == NULL && getDevice()->getAddress() != NULL)
		{

			Log::PROTOCOL())->debug(std::stringBuilder().append(u"Connecting to remote server ("_j)->append(java_cast< RemoteServer* >(getDevice())))
				->append(u")"_j)->toString());


			auto sslFactory = SslHelper::getTrustedSocketFactory();

			::javax::net::ssl::SSLSocket* sslSocket;

			try
			{
				sslSocket = java_cast< ::javax::net::ssl::SSLSocket* >(sslFactory)->createSocket(java_cast< RemoteServer* >(getDevice()))->getAddress(), java_cast< RemoteServer* >(getDevice()))->getPort()));
			}
			catch (std::exception* ex)
			{
				auto msg = getConnectionErrorMessage();
				if(msg == 0) {
					throw ex;
				} else {
					throw new RemoteDeviceErrorException(msg, static_cast< ::java::lang::Throwable* >(ex));
				}
			}
			sslSocket)->setEnabledCipherSuites(sslSocket)->getSupportedCipherSuites());
			sslSocket)->setSoTimeout((new ::java::lang::Long(java_cast< RemoteServer* >(getDevice()))->getConnectionTimeout()))->intValue());
			sslSocket)->startHandshake();
			dataChannel = new ::com::tibbo::aggregate::common::util::BlockingChannel(sslSocket);
		}

		if(dataChannel != 0)
		{
            setCommandParser(static_cast< ::com::tibbo::aggregate::common::communication::CommandParser* >(new AggreGateCommandParser(dataChannel, AggreGateCommand::START_CHAR, AggreGateCommand::END_CHAR)));
        }
        Log::PROTOCOL())->debug(u"Connection with remote server established"_j);
	}
	catch (std::exception* ex)
	{
        throw new RemoteDeviceErrorException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"devErrConnecting"_j), new voidArray({std::stringBuilder().append(java_cast< RemoteServer* >(getDevice()))->getDescription())->append(u" ("_j)
            ->append(java_cast< RemoteServer* >(getDevice()))->getInfo())
            ->append(u")"_j)->toString())})))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
    }
    super::connectImpl();
    if(java_cast< RemoteContextManager* >(getContextManager()) != 0) {
        java_cast< RemoteContextManager* >(getContextManager()))->setRoot(new ProxyContext(Contexts::CTX_ROOT(), this));
        java_cast< RemoteContextManager* >(getContextManager()))->restart();
    }
    return true;
}


  /*
std::string RemoteServerController::getConnectionErrorMessage()
{
    return 0;
}

bool RemoteServerController::loginImpl()
{
    if(java_cast< RemoteContextManager* >(getContextManager()) != 0) {
        java_cast< RemoteContextManager* >(getContextManager()))->restart();
    }
    auto loginInput = new DataTable(::com::tibbo::aggregate::common::server::CommonServerFormats::FIFT_LOGIN(), new voidArray({java_cast< RemoteServer* >(getDevice()))->getUsername()), java_cast< RemoteServer* >(getDevice()))->getPassword())}));
    callRemoteFunction(Contexts::CTX_ROOT(), ::com::tibbo::aggregate::common::server::RootContextConstants::F_LOGIN(), 0, loginInput);
    if(java_cast< RemoteContextManager* >(getContextManager()) != 0) {
        java_cast< ProxyContext* >(java_cast< RemoteContextManager* >(getContextManager()))->getRoot()))->reinitialize();
    }
    return true;
}

void RemoteServerController::start()
{
}

void RemoteServerController::disconnectImpl()
{
    if(dataChannel != 0 && dataChannel)->isOpen()) {
        try {
            dataChannel)->close();
        } catch (std::exception* ex) {
            Log::PROTOCOL())->error(u"Error closing socket"_j, ex);
        }
    }
    dataChannel;
    super::disconnectImpl();
}

void RemoteServerController::send(OutgoingAggreGateCommand* cmd)
{
    cmd)->send(static_cast< ::java::nio::channels::ByteChannel* >(dataChannel));
}

void RemoteServerController::send(::com::tibbo::aggregate::common::communication::Command* cmd)
{ 
    send(dynamic_cast< OutgoingAggreGateCommand* >(cmd));
}

void RemoteServerController::setDataChannel(::com::tibbo::aggregate::common::util::BlockingChannel* socketChannel)
{
    this->dataChannel = socketChannel;
}

com::tibbo::aggregate::common::util::BlockingChannel* RemoteServerController::getDataChannel()
{
    return dataChannel;
}

bool RemoteServerController::isConnected()
{
    return super::isConnected() && dataChannel != 0 && dataChannel)->isOpen();
}

std::string RemoteServerController::getAddress()
{
    return dataChannel != 0 ? dataChannel)->getSocket())->getInetAddress())->getHostAddress() : static_cast< const std::string & >(0);
}

 */

