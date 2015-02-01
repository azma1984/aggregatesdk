#pragma once

#include "action/GenericActionCommand.h"
#include <map>
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/pointers.h"


class ActionCommandRegistry
{
private:
    static std::map<std::string, GenericActionCommandPtr> COMMANDS;

    static void register1(GenericActionCommandPtr command);

public:
    static GenericActionCommandPtr getCommand(const std::string& type);
	ActionCommandRegistry();
};
