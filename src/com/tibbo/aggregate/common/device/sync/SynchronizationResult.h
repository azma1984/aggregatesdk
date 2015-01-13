#pragma once

#include <string>
#include <map>

class SynchronizationResult
{
public:
    static const int CODE_OK;
    static const int CODE_SUSPENDED;
    static const int CODE_DISABLED_BY_DEPENDENCY;
    static const int CODE_DECLINED_BY_DRIVER;
    static const int CODE_CONNECTION_FAILED;
    static const int CODE_INTERRUPTED;
    static const int CODE_DISCONNECTED;
    static const int CODE_ERROR;

private:
    static std::map<int, std::string> CODES_;
    std::string details;
    int code;

protected:
    void ctor(int code);

public:
    bool isSuccessful();
    int getCode();
    std::string toString();

    SynchronizationResult(int code);
    SynchronizationResult(int code, const std::string& details);

private:
    static std::map<int, std::string>& CODES();
};
