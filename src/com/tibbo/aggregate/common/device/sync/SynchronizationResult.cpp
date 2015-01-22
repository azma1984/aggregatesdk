#include "device/sync/SynchronizationResult.h"
/*
const int SynchronizationResult::CODE_OK = 0;
const int SynchronizationResult::CODE_SUSPENDED = 10;
const int SynchronizationResult::CODE_DISABLED_BY_DEPENDENCY = 20;
const int SynchronizationResult::CODE_DECLINED_BY_DRIVER = 30;
const int SynchronizationResult::CODE_CONNECTION_FAILED = 40;
const int SynchronizationResult::CODE_INTERRUPTED = 50;
const int SynchronizationResult::CODE_DISCONNECTED = 60;
const int SynchronizationResult::CODE_ERROR = 70;
*/

std::map<int, std::string> SynchronizationResult::CODES;

SynchronizationResult::SynchronizationResult()
{
  CODES[CODE_OK] = Cres::get()->getString("devSyncResOk");
  CODES[CODE_SUSPENDED] = Cres::get()->getString("devSyncResSuspended");
  CODES[CODE_DISABLED_BY_DEPENDENCY] = Cres::get()->getString("devSyncResDisabledByDependency");
  CODES[CODE_DECLINED_BY_DRIVER] = Cres::get()->getString("devSyncResDeclinedByDriver");
  CODES[CODE_CONNECTION_FAILED] = Cres::get()->getString("devSyncResConnectionFailed");
  CODES[CODE_INTERRUPTED] = Cres::get()->getString("devSyncResInterruted");
  CODES[CODE_DISCONNECTED] = Cres::get()->getString("devSyncResDisconnected");
  CODES[CODE_ERROR] = Cres::get()->getString("devSyncResError");
}  

SynchronizationResult::SynchronizationResult(int code)
{
	SynchronizationResult();
	if (CODES.end() != CODES.find(code)) 
	{
  	 throw std::invalid_argument("Unknown synchronization result code: " + code);
    }

    this->code = code;
} 

SynchronizationResult::SynchronizationResult(int code, const std::string &details)
{
  SynchronizationResult();
  this->details = details;
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
    return CODES[code] + (details.empty() == false ? ": " + details : "");
}





