TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDE_DIR = . # Текущий каталог
INCLUDEPATH += $${INCLUDE_DIR}/src/com/tibbo/aggregate/common

INCLUDEPATH += $$(BOOST_1_56_0_VS2012)
LIBS += -L$$(BOOST_1_56_0_VS2012)lib32-msvc-11.0

SOURCES += main.cpp \
    src/com/tibbo/aggregate/common/action/command/ActivateDashboard.cpp \
    src/com/tibbo/aggregate/common/action/command/Browse.cpp \
    src/com/tibbo/aggregate/common/action/command/Confirm.cpp \
    src/com/tibbo/aggregate/common/action/command/EditCode.cpp \
    src/com/tibbo/aggregate/common/action/command/EditData.cpp \
    src/com/tibbo/aggregate/common/action/command/EditProperties.cpp \
    src/com/tibbo/aggregate/common/action/command/EditReport.cpp \
    src/com/tibbo/aggregate/common/action/command/EditText.cpp \
    src/com/tibbo/aggregate/common/action/command/EditWidget.cpp \
    src/com/tibbo/aggregate/common/action/command/LaunchWidget.cpp \
    src/com/tibbo/aggregate/common/action/command/SelectEntities.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowDiff.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowError.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowEventLog.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowGuide.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowMessage.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowReport.cpp \
    src/com/tibbo/aggregate/common/action/command/ShowSystemTree.cpp \
    src/com/tibbo/aggregate/common/action/ActionCommandRegistry.cpp \
    src/com/tibbo/aggregate/common/action/ActionContext.cpp \
    src/com/tibbo/aggregate/common/action/ActionExecutionMode.cpp \
    src/com/tibbo/aggregate/common/action/ActionIdGenerator.cpp \
    src/com/tibbo/aggregate/common/action/ActionManager.cpp \
    src/com/tibbo/aggregate/common/action/ActionUtils.cpp \
    src/com/tibbo/aggregate/common/action/BasicActionDefinition.cpp \
    src/com/tibbo/aggregate/common/action/BatchAction.cpp \
    src/com/tibbo/aggregate/common/action/BatchContext.cpp \
    src/com/tibbo/aggregate/common/action/BatchEntry.cpp \
    src/com/tibbo/aggregate/common/action/DefaultActionInitializer.cpp \
    src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.cpp \
    src/com/tibbo/aggregate/common/action/GenericActionCommand.cpp \
    src/com/tibbo/aggregate/common/action/GenericActionResponse.cpp \
    src/com/tibbo/aggregate/common/action/GroupIdentifier.cpp \
    src/com/tibbo/aggregate/common/action/KeyStroke.cpp \
    src/com/tibbo/aggregate/common/action/ProtocolHandler.cpp \
    src/com/tibbo/aggregate/common/action/RequestCache.cpp \
    src/com/tibbo/aggregate/common/action/RequestIdentifier.cpp \
    src/com/tibbo/aggregate/common/action/ServerActionInput.cpp \
    src/com/tibbo/aggregate/common/action/StringIdentifier.cpp \
    src/com/tibbo/aggregate/common/action/TreeMask.cpp \
    src/com/tibbo/aggregate/common/agent/Agent.cpp \
    src/com/tibbo/aggregate/common/agent/AgentContext.cpp \
    src/com/tibbo/aggregate/common/agent/AgentImplementationController.cpp \
    src/com/tibbo/aggregate/common/agent/HistoricalValue.cpp \
    src/com/tibbo/aggregate/common/binding/AbstractBindingProvider.cpp \
    src/com/tibbo/aggregate/common/binding/Binding.cpp \
    src/com/tibbo/aggregate/common/binding/BindingEventsHelper.cpp \    
    src/com/tibbo/aggregate/common/binding/ChangeCache.cpp \
    src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.cpp \
    src/com/tibbo/aggregate/common/binding/EvaluationOptions.cpp \    
    src/com/tibbo/aggregate/common/communication/AbstractCommandParser.cpp \
    src/com/tibbo/aggregate/common/communication/AsyncCommandProcessor.cpp \
    src/com/tibbo/aggregate/common/communication/Command.cpp \
    src/com/tibbo/aggregate/common/communication/CommandProcessorStatistics.cpp \
    src/com/tibbo/aggregate/common/context/AbstractCallerController.cpp \
    src/com/tibbo/aggregate/common/context/AbstractContext.cpp \
    src/com/tibbo/aggregate/common/context/AbstractEntityDefinition.cpp \
    src/com/tibbo/aggregate/common/context/ContextUtils.cpp \
    src/com/tibbo/aggregate/common/context/DefaultContextEventListener.cpp \
    src/com/tibbo/aggregate/common/context/DefaultContextManager.cpp \
    src/com/tibbo/aggregate/common/context/DefaultRequestController.cpp \
    src/com/tibbo/aggregate/common/context/EntityList.cpp \
    src/com/tibbo/aggregate/common/context/EntityReference.cpp \
    src/com/tibbo/aggregate/common/context/EventData.cpp \
    src/com/tibbo/aggregate/common/context/EventDefinition.cpp \
    src/com/tibbo/aggregate/common/context/FireChangeEventRequestController.cpp \
    src/com/tibbo/aggregate/common/context/FunctionData.cpp \
    src/com/tibbo/aggregate/common/context/FunctionDefinition.cpp \
    src/com/tibbo/aggregate/common/context/UncheckedCallerController.cpp \
    src/com/tibbo/aggregate/common/context/VariableData.cpp \
    src/com/tibbo/aggregate/common/context/VariableDefinition.cpp \
    src/com/tibbo/aggregate/common/context/VariableInfo.cpp \
    src/com/tibbo/aggregate/common/context/VariableStatus.cpp \
    src/com/tibbo/aggregate/common/data/Data.cpp \
    src/com/tibbo/aggregate/common/data/Event.cpp \
    src/com/tibbo/aggregate/common/data/Location.cpp \
    src/com/tibbo/aggregate/common/data/TimeZones.cpp \
    src/com/tibbo/aggregate/common/data/User.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/Choice.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/ChoicesConverter.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/DefaultFormatConverter.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCByte.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCComparable.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCDouble.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCNumber.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCShort.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleBoolean.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleByte.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleDouble.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleShort.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.cpp \
#    src/com/tibbo/aggregate/common/datatable/converter/SimplePropertyFormatConverter.cpp \
#    src/com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.cpp \
#    src/com/tibbo/aggregate/common/datatable/encoding/FormatCache.cpp \
#    src/com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.cpp \
#    src/com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.cpp \
#    src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.cpp \
    src/com/tibbo/aggregate/common/datatable/field/BooleanFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/field/ColorFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/field/DataFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/field/DateFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/field/DoubleFieldFormat.cpp \
#    src/com/tibbo/aggregate/common/datatable/field/FloatFieldFormat.cpp \
#    src/com/tibbo/aggregate/common/datatable/field/IntFieldFormat.cpp \
#    src/com/tibbo/aggregate/common/datatable/field/LongFieldFormat.cpp \
#    src/com/tibbo/aggregate/common/datatable/field/StringFieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/IdValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/LimitsValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/NonNullValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/RegexValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/TableExpressionValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.cpp \
    src/com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.cpp \
    src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.cpp \
    src/com/tibbo/aggregate/common/datatable/AggreGateBean.cpp \
    src/com/tibbo/aggregate/common/datatable/DataRecord.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTable.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableBindingProvider.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableBuilding.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableConstruction.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableConversion.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableException.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableQuery.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableReplication.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableSorter.cpp \
    src/com/tibbo/aggregate/common/datatable/DataTableUtils.cpp \
#    src/com/tibbo/aggregate/common/datatable/FCBigDecimal.cpp \
#    src/com/tibbo/aggregate/common/datatable/FCBigInteger.cpp \
    src/com/tibbo/aggregate/common/datatable/FieldFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/QueryCondition.cpp \
    src/com/tibbo/aggregate/common/datatable/SortOrder.cpp \
    src/com/tibbo/aggregate/common/datatable/TableFormat.cpp \
    src/com/tibbo/aggregate/common/datatable/ValidationException.cpp \
    src/com/tibbo/aggregate/common/device/sync/AbstractValueReader.cpp \
    src/com/tibbo/aggregate/common/device/sync/AbstractValueWriter.cpp \
    src/com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.cpp \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.cpp \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationParameters.cpp \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationResult.cpp \
    src/com/tibbo/aggregate/common/device/AbstractDeviceDriver.cpp \
    src/com/tibbo/aggregate/common/device/DeviceAssetDefinition.cpp \
    src/com/tibbo/aggregate/common/device/DeviceSettingStatus.cpp \
    src/com/tibbo/aggregate/common/device/DeviceUtils.cpp \
    src/com/tibbo/aggregate/common/discovery/DeviceRecommendation.cpp \
    src/com/tibbo/aggregate/common/discovery/DiscoverableServiceDefinition.cpp \
    src/com/tibbo/aggregate/common/discovery/DiscoveryResultItem.cpp \
    src/com/tibbo/aggregate/common/event/Acknowledgement.cpp \
    src/com/tibbo/aggregate/common/event/ContextEventListenerInfo.cpp \
    src/com/tibbo/aggregate/common/event/ContextEventListenerSet.cpp \
    src/com/tibbo/aggregate/common/event/Enrichment.cpp \
    src/com/tibbo/aggregate/common/event/EventEnrichmentRule.cpp \
    src/com/tibbo/aggregate/common/event/EventHandlingException.cpp \
    src/com/tibbo/aggregate/common/event/EventLevel.cpp \
    src/com/tibbo/aggregate/common/event/EventProcessingRule.cpp \
    src/com/tibbo/aggregate/common/event/EventUtils.cpp \
    src/com/tibbo/aggregate/common/event/FireEventRequestController.cpp \
    src/com/tibbo/aggregate/common/event/PersistenceBinding.cpp \
    src/com/tibbo/aggregate/common/event/PersistenceOptions.cpp \        
    src/com/tibbo/aggregate/common/expression/parser/CharStream.cc \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParser.cc \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.cc \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTree.cc \
    src/com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.cc \
    src/com/tibbo/aggregate/common/expression/parser/ParseException.cc \
    src/com/tibbo/aggregate/common/expression/parser/Token.cc \
    src/com/tibbo/aggregate/common/expression/parser/TokenMgrError.cc \
    src/com/tibbo/aggregate/common/expression/util/ContextExpressionTracer.cpp \
    src/com/tibbo/aggregate/common/expression/util/DumpingVisitor.cpp \
    src/com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.cpp \
    src/com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.cpp \
    src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.cpp \
    src/com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.cpp \
    src/com/tibbo/aggregate/common/expression/DefaultReferenceResolver.cpp \
    src/com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.cpp \
    src/com/tibbo/aggregate/common/expression/EvaluationEnvironment.cpp \
    src/com/tibbo/aggregate/common/expression/EvaluationException.cpp \
    src/com/tibbo/aggregate/common/expression/Evaluator.cpp \
    src/com/tibbo/aggregate/common/expression/Expression.cpp \
    src/com/tibbo/aggregate/common/expression/ExpressionUtils.cpp \
    src/com/tibbo/aggregate/common/expression/Reference.cpp \
    src/com/tibbo/aggregate/common/plugin/AbstractContextPlugin.cpp \
    src/com/tibbo/aggregate/common/plugin/BasePlugin.cpp \
    src/com/tibbo/aggregate/common/plugin/PluginDirector.cpp \
    src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.cpp \
    src/com/tibbo/aggregate/common/protocol/AbstractClientController.cpp \
    src/com/tibbo/aggregate/common/protocol/AggreGateCommand.cpp \
    src/com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.cpp \
    src/com/tibbo/aggregate/common/protocol/AggreGateDevice.cpp \
    src/com/tibbo/aggregate/common/protocol/AggreGateNetworkDevice.cpp \
    src/com/tibbo/aggregate/common/protocol/CachedVariableValue.cpp \
    src/com/tibbo/aggregate/common/protocol/DefaultClientController.cpp \
    src/com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.cpp \
    src/com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.cpp \
    src/com/tibbo/aggregate/common/protocol/ProxyContext.cpp \
    src/com/tibbo/aggregate/common/protocol/RemoteContextManager.cpp \
    src/com/tibbo/aggregate/common/protocol/RemoteServer.cpp \
    src/com/tibbo/aggregate/common/protocol/RemoteServerController.cpp \
    src/com/tibbo/aggregate/common/protocol/SslHelper.cpp \
    src/com/tibbo/aggregate/common/resource/JarVerifier.cpp \
    src/com/tibbo/aggregate/common/resource/ResourceManager.cpp \
    src/com/tibbo/aggregate/common/resource/WrappingResourceBundle.cpp \
    src/com/tibbo/aggregate/common/security/DefaultPermissionChecker.cpp \
    src/com/tibbo/aggregate/common/security/NullPermissionChecker.cpp \
    src/com/tibbo/aggregate/common/security/Permission.cpp \
    src/com/tibbo/aggregate/common/security/PermissionCache.cpp \
    src/com/tibbo/aggregate/common/security/Permissions.cpp \
    src/com/tibbo/aggregate/common/security/ServerPermissionChecker.cpp \
    src/com/tibbo/aggregate/common/server/CommonServerFormats.cpp \
    src/com/tibbo/aggregate/common/util/ChangeProcessor.cpp \
    src/com/tibbo/aggregate/common/util/DashboardProperties.cpp \
    src/com/tibbo/aggregate/common/util/Date.cpp \
    src/com/tibbo/aggregate/common/util/DateUtils.cpp \
    src/com/tibbo/aggregate/common/util/Element.cpp \
    src/com/tibbo/aggregate/common/util/Logger.cpp \
    src/com/tibbo/aggregate/common/util/NonCopyable.cpp \
    src/com/tibbo/aggregate/common/util/SString.cpp \
    src/com/tibbo/aggregate/common/util/Time1.cpp \
    src/com/tibbo/aggregate/common/util/TimeHelper.cpp \
    src/com/tibbo/aggregate/common/util/TimeUnit.cpp \
    src/com/tibbo/aggregate/common/util/TimeUnitsManager.cpp \
    src/com/tibbo/aggregate/common/util/UserSettings.cpp \
    src/com/tibbo/aggregate/common/util/Util.cpp \
    src/com/tibbo/aggregate/common/util/WindowLocation.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgBoolean.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgColor.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgDouble.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgFloat.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgInteger.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgLong.cpp \
    src/com/tibbo/aggregate/common/util/simpleobject/AgString.cpp \
    src/com/tibbo/aggregate/common/Cres.cpp


HEADERS += \
    src/com/tibbo/aggregate/common/action/command/ActivateDashboard.h \
    src/com/tibbo/aggregate/common/action/command/Browse.h \
    src/com/tibbo/aggregate/common/action/command/Confirm.h \
    src/com/tibbo/aggregate/common/action/command/EditCode.h \
    src/com/tibbo/aggregate/common/action/command/EditData.h \
    src/com/tibbo/aggregate/common/action/command/EditProperties.h \
    src/com/tibbo/aggregate/common/action/command/EditReport.h \
    src/com/tibbo/aggregate/common/action/command/EditText.h \
    src/com/tibbo/aggregate/common/action/command/EditWidget.h \
    src/com/tibbo/aggregate/common/action/command/LaunchWidget.h \
    src/com/tibbo/aggregate/common/action/command/SelectEntities.h \
    src/com/tibbo/aggregate/common/action/command/ShowDiff.h \
    src/com/tibbo/aggregate/common/action/command/ShowError.h \
    src/com/tibbo/aggregate/common/action/command/ShowEventLog.h \
    src/com/tibbo/aggregate/common/action/command/ShowGuide.h \
    src/com/tibbo/aggregate/common/action/command/ShowMessage.h \
    src/com/tibbo/aggregate/common/action/command/ShowReport.h \
    src/com/tibbo/aggregate/common/action/command/ShowSystemTree.h \
    src/com/tibbo/aggregate/common/action/Action.h \
    src/com/tibbo/aggregate/common/action/ActionCommand.h \
    src/com/tibbo/aggregate/common/action/ActionCommandList.h \
    src/com/tibbo/aggregate/common/action/ActionCommandRegistry.h \
    src/com/tibbo/aggregate/common/action/ActionContext.h \
    src/com/tibbo/aggregate/common/action/ActionDefinition.h \
    src/com/tibbo/aggregate/common/action/ActionDirectory.h \
    src/com/tibbo/aggregate/common/action/ActionExecutionMode.h \
    src/com/tibbo/aggregate/common/action/ActionIdentifier.h \
    src/com/tibbo/aggregate/common/action/ActionIdGenerator.h \
    src/com/tibbo/aggregate/common/action/ActionInitializer.h \
    src/com/tibbo/aggregate/common/action/ActionLocator.h \
    src/com/tibbo/aggregate/common/action/ActionManager.h \
    src/com/tibbo/aggregate/common/action/ActionResponse.h \
    src/com/tibbo/aggregate/common/action/ActionResult.h \
    src/com/tibbo/aggregate/common/action/ActionUtils.h \
    src/com/tibbo/aggregate/common/action/BasicActionDefinition.h \
    src/com/tibbo/aggregate/common/action/BatchAction.h \
    src/com/tibbo/aggregate/common/action/BatchContext.h \
    src/com/tibbo/aggregate/common/action/BatchEntry.h \
    src/com/tibbo/aggregate/common/action/DefaultActionInitializer.h \
    src/com/tibbo/aggregate/common/action/EditDataMerger.h \
    src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.h \
    src/com/tibbo/aggregate/common/action/GenericActionCommand.h \
    src/com/tibbo/aggregate/common/action/GenericActionResponse.h \
    src/com/tibbo/aggregate/common/action/GroupIdentifier.h \
    src/com/tibbo/aggregate/common/action/InitialRequest.h \
    src/com/tibbo/aggregate/common/action/KeyStroke.h \
    src/com/tibbo/aggregate/common/action/ProtocolHandler.h \
    src/com/tibbo/aggregate/common/action/RequestCache.h \
    src/com/tibbo/aggregate/common/action/RequestIdentifier.h \
    src/com/tibbo/aggregate/common/action/ResourceMask.h \
    src/com/tibbo/aggregate/common/action/ServerActionInput.h \
    src/com/tibbo/aggregate/common/action/StringIdentifier.h \
    src/com/tibbo/aggregate/common/action/TreeMask.h \
    src/com/tibbo/aggregate/common/agent/Agent.h \
    src/com/tibbo/aggregate/common/agent/AgentContext.h \
    src/com/tibbo/aggregate/common/agent/AgentImplementationController.h \
    src/com/tibbo/aggregate/common/agent/HistoricalValue.h \
    src/com/tibbo/aggregate/common/binding/AbstractBindingProvider.h \
    src/com/tibbo/aggregate/common/binding/Binding.h \
    src/com/tibbo/aggregate/common/binding/BindingEventsHelper.h \
    src/com/tibbo/aggregate/common/binding/BindingException.h \
    src/com/tibbo/aggregate/common/binding/BindingProcessor.h \
    src/com/tibbo/aggregate/common/binding/BindingProvider.h \
    src/com/tibbo/aggregate/common/binding/CallerControllerSelector.h \
    src/com/tibbo/aggregate/common/binding/ChangeCache.h \
    src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h \
    src/com/tibbo/aggregate/common/binding/EvaluationOptions.h \
    src/com/tibbo/aggregate/common/binding/ReferenceListener.h \
    src/com/tibbo/aggregate/common/binding/ReferenceWriter.h \
    src/com/tibbo/aggregate/common/communication/AbstractCommandParser.h \
    src/com/tibbo/aggregate/common/communication/AbstractDeviceController.h \
    src/com/tibbo/aggregate/common/communication/AsyncCommandProcessor.h \
    src/com/tibbo/aggregate/common/communication/Command.h \
    src/com/tibbo/aggregate/common/communication/CommandParser.h \
    src/com/tibbo/aggregate/common/communication/CommandParserListener.h \
    src/com/tibbo/aggregate/common/communication/CommandProcessorStatistics.h \
    src/com/tibbo/aggregate/common/communication/ReplyMonitor.h \
    src/com/tibbo/aggregate/common/communication/SimpleCommandParser.h \
    src/com/tibbo/aggregate/common/communication/SocketDisconnectionException.h \
    src/com/tibbo/aggregate/common/context/AbstractCallerController.h \
    src/com/tibbo/aggregate/common/context/AbstractContext.h \
    src/com/tibbo/aggregate/common/context/AbstractContextEventListener.h \
    src/com/tibbo/aggregate/common/context/AbstractEntityDefinition.h \
    src/com/tibbo/aggregate/common/context/ActionConstants.h \
    src/com/tibbo/aggregate/common/context/CallerController.h \
    src/com/tibbo/aggregate/common/context/CallerData.h \
    src/com/tibbo/aggregate/common/context/CompatibilityConverter.h \
    src/com/tibbo/aggregate/common/context/Context.h \
    src/com/tibbo/aggregate/common/context/ContextEventListener.h \
    src/com/tibbo/aggregate/common/context/ContextException.h \
    src/com/tibbo/aggregate/common/context/ContextManager.h \
    src/com/tibbo/aggregate/common/context/ContextRuntimeException.h \
    src/com/tibbo/aggregate/common/context/Contexts.h \
    src/com/tibbo/aggregate/common/context/ContextSecurityException.h \
    src/com/tibbo/aggregate/common/context/ContextStatus.h \
    src/com/tibbo/aggregate/common/context/ContextUtils.h \
    src/com/tibbo/aggregate/common/context/ContextVisitor.h \
    src/com/tibbo/aggregate/common/context/DefaultContextEventListener.h \
    src/com/tibbo/aggregate/common/context/DefaultContextManager.h \
    src/com/tibbo/aggregate/common/context/DefaultContextVisitor.h \
    src/com/tibbo/aggregate/common/context/DefaultRequestController.h \
    src/com/tibbo/aggregate/common/context/EntityDefinition.h \
    src/com/tibbo/aggregate/common/context/EntityList.h \
    src/com/tibbo/aggregate/common/context/EntityReference.h \
    src/com/tibbo/aggregate/common/context/EventData.h \
    src/com/tibbo/aggregate/common/context/EventDefinition.h \
    src/com/tibbo/aggregate/common/context/FireChangeEventRequestController.h \
    src/com/tibbo/aggregate/common/context/FunctionData.h \
    src/com/tibbo/aggregate/common/context/FunctionDefinition.h \
    src/com/tibbo/aggregate/common/context/FunctionImplementation.h \
    src/com/tibbo/aggregate/common/context/RequestController.h \
    src/com/tibbo/aggregate/common/context/UncheckedCallerController.h \
    src/com/tibbo/aggregate/common/context/VariableData.h \
    src/com/tibbo/aggregate/common/context/VariableDefinition.h \
    src/com/tibbo/aggregate/common/context/VariableGetter.h \
    src/com/tibbo/aggregate/common/context/VariableInfo.h \
    src/com/tibbo/aggregate/common/context/VariableSetter.h \
    src/com/tibbo/aggregate/common/context/VariableStatus.h \
    src/com/tibbo/aggregate/common/data/Data.h \
    src/com/tibbo/aggregate/common/data/Event.h \
    src/com/tibbo/aggregate/common/data/Location.h \
    src/com/tibbo/aggregate/common/data/TimeZones.h \
    src/com/tibbo/aggregate/common/data/User.h \
#    src/com/tibbo/aggregate/common/datatable/converter/AbstractFormatConverter.h \
#    src/com/tibbo/aggregate/common/datatable/converter/Choice.h \
#    src/com/tibbo/aggregate/common/datatable/converter/ChoicesConverter.h \
#    src/com/tibbo/aggregate/common/datatable/converter/DefaultFormatConverter.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCByte.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCComparable.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCDouble.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCNumber.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCShort.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleBoolean.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleByte.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleDouble.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleFloat.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleInteger.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleLong.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FCSimpleShort.h \
#    src/com/tibbo/aggregate/common/datatable/converter/FormatConverter.h \
#    src/com/tibbo/aggregate/common/datatable/converter/SimpleFormatConverter.h \
#    src/com/tibbo/aggregate/common/datatable/converter/SimplePropertyFormatConverter.h \
    src/com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h \
    src/com/tibbo/aggregate/common/datatable/encoding/EncodingSettings.h \
    src/com/tibbo/aggregate/common/datatable/encoding/FormatCache.h \
    src/com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.h \
    src/com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.h \
    src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingSettings.h \
    src/com/tibbo/aggregate/common/datatable/field/BooleanFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/field/ColorFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/field/DataFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/field/DateFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/field/DoubleFieldFormat.h \
#    src/com/tibbo/aggregate/common/datatable/field/FloatFieldFormat.h \
#    src/com/tibbo/aggregate/common/datatable/field/IntFieldFormat.h \
#    src/com/tibbo/aggregate/common/datatable/field/LongFieldFormat.h \
#    src/com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/AbstractRecordValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/AbstractTableValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/FieldValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/IdValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/LimitsValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/NonNullValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/RecordValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/RegexValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/TableExpressionValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/TableValidator.h \
    src/com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.h \
    src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.h \
    src/com/tibbo/aggregate/common/datatable/AggreGateBean.h \
    src/com/tibbo/aggregate/common/datatable/DataRecord.h \
    src/com/tibbo/aggregate/common/datatable/DataTable.h \
    src/com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h \
    src/com/tibbo/aggregate/common/datatable/DataTableBuilding.h \
    src/com/tibbo/aggregate/common/datatable/DataTableConstruction.h \
    src/com/tibbo/aggregate/common/datatable/DataTableConversion.h \
    src/com/tibbo/aggregate/common/datatable/DataTableException.h \
    src/com/tibbo/aggregate/common/datatable/DataTableQuery.h \
    src/com/tibbo/aggregate/common/datatable/DataTableReplication.h \
    src/com/tibbo/aggregate/common/datatable/DataTableSorter.h \
    src/com/tibbo/aggregate/common/datatable/DataTableUtils.h \
#    src/com/tibbo/aggregate/common/datatable/FCBigDecimal.h \
#    src/com/tibbo/aggregate/common/datatable/FCBigInteger.h \
    src/com/tibbo/aggregate/common/datatable/FieldFormat.h \
    src/com/tibbo/aggregate/common/datatable/QueryCondition.h \
    src/com/tibbo/aggregate/common/datatable/SortOrder.h \
    src/com/tibbo/aggregate/common/datatable/TableFormat.h \
    src/com/tibbo/aggregate/common/datatable/ValidationException.h \
    src/com/tibbo/aggregate/common/device/sync/AbstractValueReader.h \
    src/com/tibbo/aggregate/common/device/sync/AbstractValueWriter.h \
    src/com/tibbo/aggregate/common/device/sync/SettingSynchronizationOptions.h \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationHandler.h \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationParameters.h \
    src/com/tibbo/aggregate/common/device/sync/SynchronizationResult.h \
    src/com/tibbo/aggregate/common/device/sync/ValueReader.h \
    src/com/tibbo/aggregate/common/device/sync/ValueWriter.h \
    src/com/tibbo/aggregate/common/device/AbstractDeviceDriver.h \
    src/com/tibbo/aggregate/common/device/AccessSettingReinizializer.h \
    src/com/tibbo/aggregate/common/device/DeviceAssetDefinition.h \
    src/com/tibbo/aggregate/common/device/DeviceContext.h \
    src/com/tibbo/aggregate/common/device/DeviceDriver.h \
    src/com/tibbo/aggregate/common/device/DeviceException.h \
    src/com/tibbo/aggregate/common/device/DeviceSettingStatus.h \
    src/com/tibbo/aggregate/common/device/DeviceUtils.h \
    src/com/tibbo/aggregate/common/device/DisconnectionException.h \
    src/com/tibbo/aggregate/common/device/GenericPropertiesConstants.h \
    src/com/tibbo/aggregate/common/device/RemoteDeviceErrorException.h \
    src/com/tibbo/aggregate/common/device/ServerDeviceController.h \
    src/com/tibbo/aggregate/common/device/ServiceFunction.h \
    src/com/tibbo/aggregate/common/device/SynchronousRequestController.h \
    src/com/tibbo/aggregate/common/discovery/DeviceRecommendation.h \
    src/com/tibbo/aggregate/common/discovery/DiscoverableService.h \
    src/com/tibbo/aggregate/common/discovery/DiscoverableServiceDefinition.h \
    src/com/tibbo/aggregate/common/discovery/DiscoveryProvider.h \
    src/com/tibbo/aggregate/common/discovery/DiscoveryResultItem.h \
    src/com/tibbo/aggregate/common/event/Acknowledgement.h \
    src/com/tibbo/aggregate/common/event/ContextEventListener.h \
    src/com/tibbo/aggregate/common/event/ContextEventListenerInfo.h \
    src/com/tibbo/aggregate/common/event/ContextEventListenerSet.h \
    src/com/tibbo/aggregate/common/event/Enrichment.h \
    src/com/tibbo/aggregate/common/event/EventEnrichmentRule.h \
    src/com/tibbo/aggregate/common/event/EventHandlingException.h \
    src/com/tibbo/aggregate/common/event/EventLevel.h \
    src/com/tibbo/aggregate/common/event/EventProcessingRule.h \
    src/com/tibbo/aggregate/common/event/EventUtils.h \
    src/com/tibbo/aggregate/common/event/FireEventRequestController.h \
    src/com/tibbo/aggregate/common/event/PersistenceBinding.h \
    src/com/tibbo/aggregate/common/event/PersistenceOptions.h \        
    src/com/tibbo/aggregate/common/expression/parser/CharStream.h \
    src/com/tibbo/aggregate/common/expression/parser/ErrorHandler.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParser.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserConstants.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTree.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserTreeConstants.h \
    src/com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h \
    src/com/tibbo/aggregate/common/expression/parser/JavaCC.h \
    src/com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.h \
    src/com/tibbo/aggregate/common/expression/parser/Node.h \
    src/com/tibbo/aggregate/common/expression/parser/ParseException.h \
    src/com/tibbo/aggregate/common/expression/parser/Token.h \
    src/com/tibbo/aggregate/common/expression/parser/TokenManager.h \
    src/com/tibbo/aggregate/common/expression/parser/TokenMgrError.h \
    src/com/tibbo/aggregate/common/expression/util/ContextExpressionTracer.h \
    src/com/tibbo/aggregate/common/expression/util/DefaultTracer.h \
    src/com/tibbo/aggregate/common/expression/util/DumpingVisitor.h \
    src/com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.h \
    src/com/tibbo/aggregate/common/expression/util/Tracer.h \
    src/com/tibbo/aggregate/common/expression/util/TracerManager.h \
    src/com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h \
    src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h \
    src/com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.h \
    src/com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h \
    src/com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h \
    src/com/tibbo/aggregate/common/expression/EvaluationEnvironment.h \
    src/com/tibbo/aggregate/common/expression/EvaluationException.h \
    src/com/tibbo/aggregate/common/expression/Evaluator.h \
    src/com/tibbo/aggregate/common/expression/Expression.h \
    src/com/tibbo/aggregate/common/expression/ExpressionUtils.h \
    src/com/tibbo/aggregate/common/expression/Function.h \
    src/com/tibbo/aggregate/common/expression/Reference.h \
    src/com/tibbo/aggregate/common/expression/ReferenceResolver.h \
    src/com/tibbo/aggregate/common/plugin/AbstractContextPlugin.h \
    src/com/tibbo/aggregate/common/plugin/AggreGatePlugin.h \
    src/com/tibbo/aggregate/common/plugin/BasePlugin.h \
    src/com/tibbo/aggregate/common/plugin/ContextPlugin.h \
    src/com/tibbo/aggregate/common/plugin/ExtensionsPlugin.h \
    src/com/tibbo/aggregate/common/plugin/PluginDirector.h \
    src/com/tibbo/aggregate/common/plugin/PluginException.h \
    src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.h \
    src/com/tibbo/aggregate/common/protocol/AbstractClientController.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateCommand.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateCommandParser.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateDevice.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateDeviceController.h \
    src/com/tibbo/aggregate/common/protocol/AggreGateNetworkDevice.h \
    src/com/tibbo/aggregate/common/protocol/CachedVariableValue.h \
    src/com/tibbo/aggregate/common/protocol/DefaultClientController.h \
    src/com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h \
    src/com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h \
    src/com/tibbo/aggregate/common/protocol/ProxyContext.h \
    src/com/tibbo/aggregate/common/protocol/RemoteContextManager.h \
    src/com/tibbo/aggregate/common/protocol/RemoteServer.h \
    src/com/tibbo/aggregate/common/protocol/RemoteServerController.h \
    src/com/tibbo/aggregate/common/protocol/ServerConnectorProvider.h \
    src/com/tibbo/aggregate/common/protocol/SslHelper.h \
    src/com/tibbo/aggregate/common/resource/JarVerifier.h \
    src/com/tibbo/aggregate/common/resource/ResourceManager.h \
    src/com/tibbo/aggregate/common/resource/WrappingResourceBundle.h \
    src/com/tibbo/aggregate/common/script/ScriptException.h \
    src/com/tibbo/aggregate/common/security/DefaultPermissionChecker.h \
    src/com/tibbo/aggregate/common/security/NullPermissionChecker.h \
    src/com/tibbo/aggregate/common/security/Permission.h \
    src/com/tibbo/aggregate/common/security/PermissionCache.h \
    src/com/tibbo/aggregate/common/security/PermissionChecker.h \
    src/com/tibbo/aggregate/common/security/Permissions.h \
    src/com/tibbo/aggregate/common/security/PermissionType.h \
    src/com/tibbo/aggregate/common/security/ServerPermissionChecker.h \
    src/com/tibbo/aggregate/common/server/AdministrationContextConstants.h \
    src/com/tibbo/aggregate/common/server/AlertConstants.h \
    src/com/tibbo/aggregate/common/server/AlertContextConstants.h \
    src/com/tibbo/aggregate/common/server/AlertsContextConstants.h \
    src/com/tibbo/aggregate/common/server/AutorunActionContextConstants.h \
    src/com/tibbo/aggregate/common/server/AutorunActionsContextConstants.h \
    src/com/tibbo/aggregate/common/server/CommonDataContextConstants.h \
    src/com/tibbo/aggregate/common/server/CommonServerFormats.h \
    src/com/tibbo/aggregate/common/server/CommonTableContextConstants.h \
    src/com/tibbo/aggregate/common/server/ConfigContextConstants.h \
    src/com/tibbo/aggregate/common/server/DashboardContextConstants.h \
    src/com/tibbo/aggregate/common/server/DeviceContextConstants.h \
    src/com/tibbo/aggregate/common/server/DevicesContextConstants.h \
    src/com/tibbo/aggregate/common/server/EditableChildContextConstants.h \
    src/com/tibbo/aggregate/common/server/EditableChildrenContextConstants.h \
    src/com/tibbo/aggregate/common/server/EventFilterContextConstants.h \
    src/com/tibbo/aggregate/common/server/EventFiltersContextConstants.h \
    src/com/tibbo/aggregate/common/server/EventsContextConstants.h \
    src/com/tibbo/aggregate/common/server/FavouriteContextConstants.h \
    src/com/tibbo/aggregate/common/server/FavouritesContextConstants.h \
    src/com/tibbo/aggregate/common/server/GroupContext.h \
    src/com/tibbo/aggregate/common/server/GroupContextConstants.h \
    src/com/tibbo/aggregate/common/server/InstallableContextConstants.h \
    src/com/tibbo/aggregate/common/server/JobContextConstants.h \
    src/com/tibbo/aggregate/common/server/JobsContextConstants.h \
    src/com/tibbo/aggregate/common/server/MappedChildrenContextConstants.h \
    src/com/tibbo/aggregate/common/server/ModelContextConstants.h \
    src/com/tibbo/aggregate/common/server/QueriesContextConstants.h \
    src/com/tibbo/aggregate/common/server/QueryContextConstants.h \
    src/com/tibbo/aggregate/common/server/ReportContextConstants.h \
    src/com/tibbo/aggregate/common/server/ReportsContextConstants.h \
    src/com/tibbo/aggregate/common/server/RootContextConstants.h \
    src/com/tibbo/aggregate/common/server/ScriptContextConstants.h \
    src/com/tibbo/aggregate/common/server/ScriptsContextConstants.h \
    src/com/tibbo/aggregate/common/server/ServerContext.h \
    src/com/tibbo/aggregate/common/server/ServerContextConstants.h \
    src/com/tibbo/aggregate/common/server/TrackerContextConstants.h \
    src/com/tibbo/aggregate/common/server/TrackersContextConstants.h \
    src/com/tibbo/aggregate/common/server/UserContextConstants.h \
    src/com/tibbo/aggregate/common/server/UtilitiesContextConstants.h \
    src/com/tibbo/aggregate/common/server/WidgetContextConstants.h \
    src/com/tibbo/aggregate/common/server/WidgetsContextConstants.h \
    src/com/tibbo/aggregate/common/util/AgClass.h \
    src/com/tibbo/aggregate/common/util/AggreGateSwingWorker.h \
    src/com/tibbo/aggregate/common/util/Aggregation.h \
    src/com/tibbo/aggregate/common/util/AgObject.h \
    src/com/tibbo/aggregate/common/util/BlockingChannel.h \
    src/com/tibbo/aggregate/common/util/ChangeProcessor.h \
    src/com/tibbo/aggregate/common/util/ClassPathHelper.h \
    src/com/tibbo/aggregate/common/util/Cloneable.h \
    src/com/tibbo/aggregate/common/util/CloneUtils.h \
    src/com/tibbo/aggregate/common/util/Color.h \
    src/com/tibbo/aggregate/common/util/Comparable.h \
    src/com/tibbo/aggregate/common/util/DashboardProperties.h \
    src/com/tibbo/aggregate/common/util/Date.h \
    src/com/tibbo/aggregate/common/util/DateUtils.h \
    src/com/tibbo/aggregate/common/util/DistributedConstants.h \
    src/com/tibbo/aggregate/common/util/Docs.h \
    src/com/tibbo/aggregate/common/util/Element.h \
    src/com/tibbo/aggregate/common/util/ElementList.h \
    src/com/tibbo/aggregate/common/util/ErrorCollector.h \
    src/com/tibbo/aggregate/common/util/FileUtils.h \
    src/com/tibbo/aggregate/common/util/Icons.h \
    src/com/tibbo/aggregate/common/util/Interface.h \
    src/com/tibbo/aggregate/common/util/Logger.h \
    src/com/tibbo/aggregate/common/util/LogRedirectingHandler.h \
    src/com/tibbo/aggregate/common/util/Md5Utils.h \
    src/com/tibbo/aggregate/common/util/NamedThreadFactory.h \
    src/com/tibbo/aggregate/common/util/NonCopyable.h \
    src/com/tibbo/aggregate/common/util/Pair.h \
    src/com/tibbo/aggregate/common/util/PersistentProperties.h \
    src/com/tibbo/aggregate/common/util/Pointers.h \
    src/com/tibbo/aggregate/common/util/PublicCloneable.h \
    src/com/tibbo/aggregate/common/util/ReferredActionExecutor.h \
    src/com/tibbo/aggregate/common/util/ReflectUtils.h \
    src/com/tibbo/aggregate/common/util/RemoteConnector.h \
    src/com/tibbo/aggregate/common/util/ResourceAccessor.h \
    src/com/tibbo/aggregate/common/util/SString.h \
    src/com/tibbo/aggregate/common/util/StringUtils.h \
    src/com/tibbo/aggregate/common/util/SyntaxErrorException.h \
    src/com/tibbo/aggregate/common/util/ThreadGroupPoolFactory.h \
    src/com/tibbo/aggregate/common/util/ThreadUtils.h \
    src/com/tibbo/aggregate/common/util/Time1.h \
    src/com/tibbo/aggregate/common/util/TimeHelper.h \
    src/com/tibbo/aggregate/common/util/TimeUnit.h \
    src/com/tibbo/aggregate/common/util/TimeUnitsManager.h \
    src/com/tibbo/aggregate/common/util/UserSettings.h \
    src/com/tibbo/aggregate/common/util/Util.h \
    src/com/tibbo/aggregate/common/util/WindowLocation.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgBoolean.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgColor.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgDouble.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgFloat.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgInteger.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgLong.h \
    src/com/tibbo/aggregate/common/util/simpleobject/AgString.h \
    src/com/tibbo/aggregate/common/AggreGateException.h \
    src/com/tibbo/aggregate/common/Constants.h \
    src/com/tibbo/aggregate/common/Cres.h \
    src/com/tibbo/aggregate/common/Log.h \
    src/com/tibbo/aggregate/common/agent/HistoricalValue.h \
    src/com/tibbo/aggregate/common/IllegalStateException.h
