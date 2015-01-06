// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionCommandRegistry.java

#ifndef ActionCommandRegistryH
#define ActionCommandRegistryH
#include <map>

#include "GenericActionCommand.h"
#include "ActivateDashboard.h"
/*
#include "Browse.hpp"
#include "Confirm.hpp"
#include "EditCode.hpp"
#include "EditData.hpp"
#include "EditProperties.hpp"
#include "EditReport.hpp"
#include "EditText.hpp"
#include "EditWidget.hpp"
#include "LaunchWidget.hpp"
#include "SelectEntities.hpp"
#include "ShowError.hpp"
#include "ShowEventLog.hpp"
#include "ShowGuide.hpp"
#include "ShowMessage.hpp"
#include "ShowReport.hpp"
#include "ShowSystemTree.hpp"
 */

class ActionCommandRegistry
{
 private:
	std::map<std::string,GenericActionCommand> COMMANDS;

	void register1(GenericActionCommand* command);

 public:
	GenericActionCommand* getCommand(const std::string* &type);
	ActionCommandRegistry();
};

#endif
