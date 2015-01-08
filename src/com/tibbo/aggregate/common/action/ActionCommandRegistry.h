#ifndef ActionCommandRegistryH
#define ActionCommandRegistryH

#include <map>
#include <string>
#include <boost/shared_ptr.hpp>

#include "action/GenericActionCommand.h"

class ActionCommandRegistry
{
 private:
    std::map<std::string, boost::shared_ptr<GenericActionCommand>> COMMANDS;

	void register1(GenericActionCommand* command);

 public:
    GenericActionCommand* getCommand(const std::string& type);
	ActionCommandRegistry();
};

#endif  //ActionCommandRegistryH
