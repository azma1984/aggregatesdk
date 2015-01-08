#include "ActionCommandRegistry.h"

#include "command/ActivateDashboard.h"
#include "command/Browse.h"
#include "command/Confirm.h"
#include "command/EditCode.h"
#include "command/EditProperties.h"
#include "command/EditReport.h"
#include "command/EditText.h"
#include "command/EditWidget.h"
#include "command/LaunchWidget.h"
#include "command/SelectEntities.h"
#include "command/ShowError.h"
#include "command/ShowEventLog.h"
#include "command/ShowGuide.h"
#include "command/ShowMessage.h"
#include "command/ShowReport.h"
#include "command/ShowSystemTree.h"

ActionCommandRegistry::ActionCommandRegistry()
{
	/*
	register1(new ActivateDashboard());
	register1(new Browse());
    register1(new Confirm());
    register1(new EditCode());
    register1(new EditData());
    register1(new EditProperties());
    register1(new EditReport());
    register1(new EditText());
    register1(new EditWidget());
    register1(new LaunchWidget());
    register1(new SelectEntities());
    register1(new ShowError());
    register1(new ShowEventLog());
    register1(new ShowGuide());
    register1(new ShowMessage());
    register1(new ShowReport());
	register1(new ShowSystemTree());  */
}



GenericActionCommand *ActionCommandRegistry::getCommand(const std::string &type)
{
  return COMMANDS[type];
}

void ActionCommandRegistry::register1(GenericActionCommand* command)
{
 COMMANDS[command->getType()] = command;
}

