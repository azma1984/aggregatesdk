// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractCallerController.java
#include <com/tibbo/aggregate/common/context/AbstractCallerController.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/CallerData.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Collections.h"
//#include <java/util/Date.h"
//#include <java/util/HashMap.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
//#include <java/util/WeakHashMap.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
AbstractCallerController::AbstractCallerController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

AbstractCallerController::AbstractCallerController(CallerData* callerData) 
    : AbstractCallerController(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerData);
}

void AbstractCallerController::init()
{
    loggedIn = false;
    creationTime = new Date();
    properties = new ::java::util::HashMap();
}

std::set & AbstractCallerController::CONTROLLERS()
{
    
    return CONTROLLERS_;
}
std::set  AbstractCallerController::CONTROLLERS_;

void AbstractCallerController::ctor(CallerData* callerData)
{
    super::ctor();
    init();
    this->callerData = callerData;
    {
        synchronized synchronized_0(CONTROLLERS());
        {
            CONTROLLERS())->add(this));
        }
    }
}

bool AbstractCallerController::isLoggedIn()
{
    return loggedIn;
}

bool AbstractCallerController::isPermissionCheckingEnabled()
{
    return true;
}

com::tibbo::aggregate::common::security::PermissionCache* AbstractCallerController::getPermissionCache()
{
    return 0;
}

CallerData* AbstractCallerController::getCallerData()
{
    return java_cast< CallerData* >(callerData);
}

java::util::Map* AbstractCallerController::getProperties()
{
    return properties;
}

void AbstractCallerController::setLoggedIn(bool loggedIn)
{
    this->loggedIn = loggedIn;
}

void AbstractCallerController::sendFeedback(int level, const std::string & message)
{
}

std::list  AbstractCallerController::getControllers()
{
    
    std::list  list = new ::java::util::LinkedList();
    {
        synchronized synchronized_1(CONTROLLERS());
        {
            for (auto _i = CONTROLLERS())->iterator(); _i->hasNext(); ) {
                CallerController* cc = java_cast< CallerController* >(_i->next());
                {
                    list)->add(cc));
                }
            }
        }
    }
    return ::java::util::Collections::unmodifiableList(list);
}

std::string AbstractCallerController::toString()
{
    return std::stringBuilder().append((type != 0 ? type : getClass())->getName()))->append(u" ("_j)
        ->append((loggedIn ? u"logged in"_j : u"not logged in"_j))
        ->append(u")"_j)->toString();
}

com::tibbo::aggregate::common::security::Permissions* AbstractCallerController::getPermissions()
{
    return 0;
}

std::string AbstractCallerController::getUsername()
{
    return username;
}

void AbstractCallerController::setUsername(const std::string & username)
{
    this->username = username;
}

std::string AbstractCallerController::getInheritedUsername()
{
    return 0;
}

std::string AbstractCallerController::getEffectiveUsername()
{
    auto inheritedUsername = getInheritedUsername();
    return inheritedUsername != 0 ? inheritedUsername : getUsername();
}

std::string AbstractCallerController::getType()
{
    return type;
}

void AbstractCallerController::setType(const std::string & type)
{
    this->type = type;
}

std::string AbstractCallerController::getAddress()
{
    return address;
}

void AbstractCallerController::setAddress(const std::string & address)
{
    this->address = address;
}

void AbstractCallerController::login(const std::string & username, const std::string & inheritedUsername, Permissions* permissons) 
{
    setUsername(username);
}

Date* AbstractCallerController::getCreationTime()
{
    return creationTime;
}

void AbstractCallerController::logout()
{
}



java::lang::Class* AbstractCallerController::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.AbstractCallerController", 59);
    return c;
}

void AbstractCallerController::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CONTROLLERS_ = ::java::util::Collections::newSetFromMap(new ::java::util::WeakHashMap());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* AbstractCallerController::getClass0()
{
    return class_();
}

