#pragma once

#include "action/GenericActionCommand.h"
#include <map>
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/pointers.h"


class ActionCommandRegistry
{
private:
	std::map<std::string, GenericActionCommandPtr> COMMANDS;

    void register1(GenericActionCommandPtr command);

public:
    GenericActionCommandPtr getCommand(const std::string& type);
	ActionCommandRegistry();
};
