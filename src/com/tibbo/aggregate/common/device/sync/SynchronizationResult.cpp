#include "device/sync/SynchronizationResult.h"

const int SynchronizationResult::CODE_OK = 0;
const int SynchronizationResult::CODE_SUSPENDED = 10;
const int SynchronizationResult::CODE_DISABLED_BY_DEPENDENCY = 20;
const int SynchronizationResult::CODE_DECLINED_BY_DRIVER = 30;
const int SynchronizationResult::CODE_CONNECTION_FAILED = 40;
const int SynchronizationResult::CODE_INTERRUPTED = 50;
const int SynchronizationResult::CODE_DISCONNECTED = 60;
const int SynchronizationResult::CODE_ERROR = 70;


SynchronizationResult::SynchronizationResult(int code)
{
    ctor(code);
}

SynchronizationResult::SynchronizationResult(int code, String details)
{
    ctor(code);
    this->details = details;
}

void SynchronizationResult::ctor(int code)
{
    if (CODES().find(code) == CODES().end()) {
        //TODO: exception
        //throw new IllegalArgumentException("Unknown synchronization result code: " + code);
    }

    this->code = code;
}

bool SynchronizationResult::isSuccessful()
{
    return code == CODE_OK;
}

int SynchronizationResult::getCode()
{
    return code;
}


std::string SynchronizationResult::toString()
{
    return (CODES())[code] + (details != null ? ": " + details : "");
}

static std::map<int, std::string>& SynchronizationResult::CODES()
{
    typedef std::pair<int, std::string>  codePair;
    if (CODES_.empty()) {
        CODES_.insert( codePair(CODE_OK, Cres::get()->getString("devSyncResOk")) );
        CODES_.insert( codePair(CODE_SUSPENDED, Cres::get()->getString("devSyncResSuspended")) );
        CODES_.insert( codePair(CODE_DISABLED_BY_DEPENDENCY, Cres::get()->getString("devSyncResDisabledByDependency")) );
        CODES_.insert( codePair(CODE_DECLINED_BY_DRIVER, Cres::get()->getString("devSyncResDeclinedByDriver")) );
        CODES_.insert( codePair(CODE_CONNECTION_FAILED, Cres::get()->getString("devSyncResConnectionFailed")) );
        CODES_.insert( codePair(CODE_INTERRUPTED, Cres::get()->getString("devSyncResInterruted")) );
        CODES_.insert( codePair(CODE_DISCONNECTED, Cres::get()->getString("devSyncResDisconnected")) );
        CODES_.insert( codePair(CODE_ERROR, Cres::get()->getString("devSyncResError")) );
    }

    return CODES_;
}
