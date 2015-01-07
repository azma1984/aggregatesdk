project(aggregatesdk)

include_directories (${PROJECT_SOURCE_DIR} 
./src 
./test 
./src/com/tibbo/aggregate/common/action/command 
./src/com/tibbo/aggregate/common/action 
./src/com/tibbo/aggregate/common/datatable 
./src/com/tibbo/aggregate/common/util 
./src/com/tibbo/aggregate/common/context
./src/com/tibbo/aggregate/common/protocol
./src/com/tibbo/aggregate/common/agent

)

add_executable(aggregatesdk 

#action
./src/com/tibbo/aggregate/common/action/command/ActivateDashboard.cpp
./src/com/tibbo/aggregate/common/action/command/Browse.cpp
#./src/com/tibbo/aggregate/common/action/command/Confirm.cpp

./src/com/tibbo/aggregate/common/action/Action.h
./src/com/tibbo/aggregate/common/action/ActionCommand.h
./src/com/tibbo/aggregate/common/action/ActionCommandList.h
#./src/com/tibbo/aggregate/common/action/ActionCommandRegistry.cpp
#./src/com/tibbo/aggregate/common/action/ActionContext.cpp
./src/com/tibbo/aggregate/common/action/ActionDefinition.h
./src/com/tibbo/aggregate/common/action/ActionDirectory.h
./src/com/tibbo/aggregate/common/action/ActionExecutionMode.cpp
./src/com/tibbo/aggregate/common/action/ActionIdentifier.h
#./src/com/tibbo/aggregate/common/action/ActionIdGenerator.cpp
./src/com/tibbo/aggregate/common/action/ActionInitializer.h
./src/com/tibbo/aggregate/common/action/ActionLocator.h
#./src/com/tibbo/aggregate/common/action/ActionManager.cpp
./src/com/tibbo/aggregate/common/action/ActionResponse.h
./src/com/tibbo/aggregate/common/action/ActionResult.h
#./src/com/tibbo/aggregate/common/action/ActionUtils.cpp
#./src/com/tibbo/aggregate/common/action/BasicActionDefinition.cpp
#./src/com/tibbo/aggregate/common/action/BatchAction.cpp
./src/com/tibbo/aggregate/common/action/BatchContext.cpp
./src/com/tibbo/aggregate/common/action/BatchEntry.cpp
#./src/com/tibbo/aggregate/common/action/DefaultActionInitializer.cpp
#./src/com/tibbo/aggregate/common/action/EditDataMerger.cpp
#./src/com/tibbo/aggregate/common/action/EntityRelatedActionDescriptor.cpp
#./src/com/tibbo/aggregate/common/action/GenericActionCommand.cpp
#./src/com/tibbo/aggregate/common/action/GenericActionResponse.cpp
./src/com/tibbo/aggregate/common/action/GroupIdentifier.cpp
./src/com/tibbo/aggregate/common/action/InitialRequest.h
#./src/com/tibbo/aggregate/common/action/KeyStroke.cpp
#./src/com/tibbo/aggregate/common/action/ProtocolHandler.cpp
./src/com/tibbo/aggregate/common/action/RequestCache.cpp
./src/com/tibbo/aggregate/common/action/RequestIdentifier.cpp
./src/com/tibbo/aggregate/common/action/ResourceMask.h
./src/com/tibbo/aggregate/common/action/ServerActionInput.h
./src/com/tibbo/aggregate/common/action/StringIdentifier.h
./src/com/tibbo/aggregate/common/action/TreeMask.h

#agent
./src/com/tibbo/aggregate/common/agent/Agent.cpp
./src/com/tibbo/aggregate/common/agent/AgentContext.cpp
./src/com/tibbo/aggregate/common/agent/AgentImplementationController.cpp
./src/com/tibbo/aggregate/common/agent/HistoricalValue.cpp


#context
./src/com/tibbo/aggregate/common/context/AbstractContext.cpp

main.cpp)

install(TARGETS aggregatesdk RUNTIME DESTINATION bin)
