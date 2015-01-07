#pragma once
#include <string>

class AggreGateException
{

private:
    std::string details;
    std::string message;

protected:
    void ctor(std::string* message);
    void ctor(std::string* message, std::string* details);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause, std::string* details);

public:
    std::string getDetails() { return details; }

    AggreGateException(const std::string &message)
    {
        this->message = message;
    }

    AggreGateException(const std::string &message, const std::string &details)
    {
        this->message = message;
        this->details = details;
    }

};
