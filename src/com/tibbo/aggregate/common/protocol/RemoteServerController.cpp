
#include "protocol/RemoteServerController.h"

//RemoteServerController::RemoteServerController(RemoteServerPtrdevice, bool async, bool useContextManager)
//{
//	if(useContextManager)
//	{
//	 setContextManager(new RemoteContextManager(device, async));
//	}
//}
//
//
//void RemoteServerController::setContextManager(RemoteContextManagerPtr contextManager)
//{
//	this->contextManager = contextManager;
//}
//
//bool RemoteServerController::connectImpl()
//{
//	try {
//		if(dataChannel == NULL && getDevice()->getAddress() != NULL)
//		{
//
//			Log::PROTOCOL())->debug(std::stringBuilder().append(u"Connecting to remote server ("_j)->append(java_cast< RemoteServerPtr >(getDevice())))
//				->append(u")"_j)->toString());
//
//
//			auto sslFactory = SslHelper::getTrustedSocketFactory();
//
//			::javax::net::ssl::SSLSocket* sslSocket;
//
//			try
//			{
//				sslSocket = java_cast< ::javax::net::ssl::SSLSocket* >(sslFactory)->createSocket(java_cast< RemoteServerPtr >(getDevice()))->getAddress(), java_cast< RemoteServerPtr >(getDevice()))->getPort()));
//			}
//			catch (std::exception* ex)
//			{
//				auto msg = getConnectionErrorMessage();
//				if(msg == 0) {
//					throw ex;
//				} else {
//					throw new RemoteDeviceErrorException(msg, static_cast< ::java::lang::Throwable* >(ex));
//				}
//			}
//			sslSocket)->setEnabledCipherSuites(sslSocket)->getSupportedCipherSuites());
//			sslSocket)->setSoTimeout((new ::java::lang::Long(java_cast< RemoteServerPtr >(getDevice()))->getConnectionTimeout()))->intValue());
//			sslSocket)->startHandshake();
//			dataChannel = new BlockingChannel(sslSocket);
//		}
//
//		if(dataChannel != 0)
//		{
//            setCommandParser(static_cast< CommandParserPtr >(new AggreGateCommandParser(dataChannel, AggreGateCommand::START_CHAR, AggreGateCommand::END_CHAR)));
//        }
//        Log::PROTOCOL())->debug(u"Connection with remote server established"_j);
//	}
//	catch (std::exception* ex)
//	{
//        throw new RemoteDeviceErrorException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"devErrConnecting"_j), new voidArray({std::stringBuilder().append(java_cast< RemoteServerPtr >(getDevice()))->getDescription())->append(u" ("_j)
//            ->append(java_cast< RemoteServerPtr >(getDevice()))->getInfo())
//            ->append(u")"_j)->toString())})))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
//    }
//    super::connectImpl();
//    if(java_cast< RemoteContextManagerPtr >(getContextManager()) != 0) {
//        java_cast< RemoteContextManagerPtr >(getContextManager()))->setRoot(new ProxyContext(Contexts::CTX_ROOT(), this));
//        java_cast< RemoteContextManagerPtr >(getContextManager()))->restart();
//    }
//    return true;
//}
//
//
//std::string RemoteServerController::getConnectionErrorMessage()
//{
//    return 0;
//}
//
//bool RemoteServerController::loginImpl()
//{
//    if(java_cast< RemoteContextManagerPtr >(getContextManager()) != 0) {
//        java_cast< RemoteContextManagerPtr >(getContextManager()))->restart();
//    }
//    auto loginInput = new DataTable(::com::tibbo::aggregate::common::server::CommonServerFormats::FIFT_LOGIN(), new voidArray({java_cast< RemoteServerPtr >(getDevice()))->getUsername()), java_cast< RemoteServerPtr >(getDevice()))->getPassword())}));
//    callRemoteFunction(Contexts::CTX_ROOT(), ::com::tibbo::aggregate::common::server::RootContextConstants::F_LOGIN(), 0, loginInput);
//    if(java_cast< RemoteContextManagerPtr >(getContextManager()) != 0) {
//        java_cast< ProxyContextPtr >(java_cast< RemoteContextManagerPtr >(getContextManager()))->getRoot()))->reinitialize();
//    }
//    return true;
//}
//
//void RemoteServerController::start()
//{
//}
//
//void RemoteServerController::disconnectImpl()
//{
//    if(dataChannel != 0 && dataChannel)->isOpen()) {
//        try {
//            dataChannel)->close();
//        } catch (std::exception* ex) {
//            Log::PROTOCOL())->error(u"Error closing socket"_j, ex);
//        }
//    }
//    dataChannel;
//    super::disconnectImpl();
//}
//
//void RemoteServerController::send(OutgoingAggreGateCommandPtr cmd)
//{
//    cmd)->send(static_cast< ::java::nio::channels::ByteChannel* >(dataChannel));
//}
//
//void RemoteServerController::send(CommandPtr cmd)
//{
//    send(dynamic_cast< OutgoingAggreGateCommandPtr >(cmd));
//}
//
//void RemoteServerController::setDataChannel(BlockingChannel* socketChannel)
//{
//    this->dataChannel = socketChannel;
//}
//
//BlockingChannelPtr RemoteServerController::getDataChannel()
//{
//    return dataChannel;
//}
//
//bool RemoteServerController::isConnected()
//{
//    return super::isConnected() && dataChannel != 0 && dataChannel)->isOpen();
//}
//
//std::string RemoteServerController::getAddress()
//{
//    return dataChannel != 0 ? dataChannel)->getSocket())->getInetAddress())->getHostAddress() : static_cast< const std::string & >(0);
//}
//
//

