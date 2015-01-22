#pragma once

#include "action/GenericActionCommand.h"
#include <map>
#include <string>
#include <boost/shared_ptr.hpp>

class ActionCommandRegistry
{
private:
    std::map<std::string, boost::shared_ptr<GenericActionCommand> COMMANDS;

    void register1(boost::shared_ptr<GenericActionCommand> command);

public:
    boost::shared_ptr<GenericActionCommand> getCommand(const std::string& type);
	ActionCommandRegistry();
};
