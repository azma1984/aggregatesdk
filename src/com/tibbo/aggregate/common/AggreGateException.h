#pragma once

#include <string>

class AggreGateException
{

private:
    std::string details;
    std::string message;

public:
    AggreGateException(const std::string &message)
    {
        this->message = message;
    }

    AggreGateException(const std::string &message, const std::string &details)
    {
        this->message = message;
        this->details = details;
    }

    std::string getDetails() { return details; }
    std::string getMessage() { return message; }
};

#endif

