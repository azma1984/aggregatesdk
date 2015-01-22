#include "action/ActionExecutionMode.h"

const int ActionExecutionMode::NORMAL = 0;
const int ActionExecutionMode::REDIRECT = 1;
const int ActionExecutionMode::BATCH = 2;
const int ActionExecutionMode::TEST = 3;
const int ActionExecutionMode::HEADLESS = 4;

int ActionExecutionMode::getCode()
{
    return code;
}

ActionExecutionMode::ActionExecutionMode(int code1)
{
    this->code = code1;
}
