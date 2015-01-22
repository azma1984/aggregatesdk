#ifndef SynchronizationResultH
#define SynchronizationResultH

#include <string>
#include <map>
#include "Cres.h"


class SynchronizationResult
{
 private:
    static std::map<int, std::string> CODES;
    std::string details;
    int code;

public:
    static const int CODE_OK =0;
    static const int CODE_SUSPENDED = 10;
    static const int CODE_DISABLED_BY_DEPENDENCY = 20;
    static const int CODE_DECLINED_BY_DRIVER = 30;
    static const int CODE_CONNECTION_FAILED = 40;
    static const int CODE_INTERRUPTED = 50;
    static const int CODE_DISCONNECTED = 60;
    static const int CODE_ERROR = 70;

public:
    bool isSuccessful();
    int getCode();
    std::string toString();
	SynchronizationResult();
    SynchronizationResult(int code);
    SynchronizationResult(int code, const std::string& details);

};
#endif 