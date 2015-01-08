#ifndef ActionCommandRegistryH
#define ActionCommandRegistryH

#include <map>

#include "GenericActionCommand.h"
//#include "ActivateDashboard.h"

class ActionCommandRegistry
{
 private:
    std::map<std::string, GenericActionCommand> COMMANDS;

	void register1(GenericActionCommand* command);

 public:
	GenericActionCommand* getCommand(const std::string* &type);
	ActionCommandRegistry();
};

#endif  //ActionCommandRegistryH
