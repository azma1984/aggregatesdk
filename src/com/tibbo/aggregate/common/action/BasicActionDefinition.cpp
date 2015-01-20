// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BasicActionDefinition.java
//#include <com/tibbo/aggregate/common/action/BasicActionDefinition.h"

#include <com/tibbo/aggregate/common/action/Action.h"
#include <com/tibbo/aggregate/common/action/ActionCommand.h"
#include <com/tibbo/aggregate/common/action/GroupIdentifier.h"
#include <com/tibbo/aggregate/common/action/KeyStroke.h"
#include <com/tibbo/aggregate/common/action/RequestIdentifier.h"
#include <com/tibbo/aggregate/common/action/ResourceMask.h"
/*
//#include <java/beans/PropertyChangeSupport.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/RuntimeException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/concurrent/locks/std::mutex *.h"
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

com::tibbo::aggregate::common::action::BasicActionDefinition::BasicActionDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::BasicActionDefinition::BasicActionDefinition(const std::string & name) 
    : BasicActionDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

com::tibbo::aggregate::common::action::BasicActionDefinition::BasicActionDefinition(const std::string & name, ::java::lang::Class* actionClass) 
    : BasicActionDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,actionClass);
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::init()
{
    propertyChangeListeners = new ::java::beans::PropertyChangeSupport(this);
    enabled = true;
    concurrent = true;
    executionLock = new ::java::util::concurrent::locks::std::mutex *();
}

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::GROUP_ID_SEPARATOR()
{
    
    return GROUP_ID_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::GROUP_ID_SEPARATOR_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_NAME()
{
    
    return PROPERTY_NAME_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_NAME_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DESCRIPTION()
{
    
    return PROPERTY_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DESCRIPTION_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DROP_SOURCES()
{
    
    return PROPERTY_DROP_SOURCES_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DROP_SOURCES_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_HELP()
{
    
    return PROPERTY_HELP_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_HELP_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ACCELERATOR()
{
    
    return PROPERTY_ACCELERATOR_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ACCELERATOR_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_HIDDEN()
{
    
    return PROPERTY_HIDDEN_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_HIDDEN_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ENABLED()
{
    
    return PROPERTY_ENABLED_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ENABLED_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_GROUP_ID()
{
    
    return PROPERTY_GROUP_ID_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_GROUP_ID_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ICON_ID()
{
    
    return PROPERTY_ICON_ID_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_ICON_ID_;

std::string& com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DEFAULT()
{
    
    return PROPERTY_DEFAULT_;
}
std::string com::tibbo::aggregate::common::action::BasicActionDefinition::PROPERTY_DEFAULT_;

void com::tibbo::aggregate::common::action::BasicActionDefinition::ctor(const std::string & name)
{
    ctor(name, 0);
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::ctor(const std::string & name, ::java::lang::Class* actionClass)
{
    super::ctor();
    init();
    if(actionClass != 0 && !Action::class_())->isAssignableFrom(actionClass)) {
		throw new ::java::lang::IllegalArgumentException(u"Action class should implement Action interface"_j);
    }
    super::setName(name);
    this->actionClass = actionClass;
}

com::tibbo::aggregate::common::action::GroupIdentifier* com::tibbo::aggregate::common::action::BasicActionDefinition::getExecutionGroup()
{
    return executionGroup;
}

bool com::tibbo::aggregate::common::action::BasicActionDefinition::isEnabled()
{
    return enabled;
}

bool com::tibbo::aggregate::common::action::BasicActionDefinition::isHidden()
{
    return hidden;
}

com::tibbo::aggregate::common::action::KeyStroke* com::tibbo::aggregate::common::action::BasicActionDefinition::getAccelerator()
{
    return accelerator;
}

std::list  com::tibbo::aggregate::common::action::BasicActionDefinition::getDropSources()
{
    if(dropSources != 0) {
        return ::java::util::Collections::unmodifiableList(dropSources);
    } else {
        return 0;
    }
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setIconId(const std::string & iconId)
{
    auto oldIconId = getIconId();
    super::setIconId(iconId);
    propertyChangeListeners)->firePropertyChange(PROPERTY_ICON_ID_, oldIconId), iconId));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setHelp(const std::string & help)
{
    auto oldHelp = getHelp();
    super::setHelp(help);
    propertyChangeListeners)->firePropertyChange(PROPERTY_HELP_, oldHelp), help));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setDescription(const std::string & description)
{
    auto oldDescription = getDescription();
    super::setDescription(description);
    propertyChangeListeners)->firePropertyChange(PROPERTY_DESCRIPTION_, oldDescription), description));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setExecutionGroup(const std::string & base)
{
    setExecutionGroup(new GroupIdentifier(std::stringBuilder().append(getName())->append(GROUP_ID_SEPARATOR_)
        ->append(base)->toString()));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setExecutionGroup(GroupIdentifier* groupId)
{
    auto oldGroupId = this->executionGroup;
    this->executionGroup = groupId;
    propertyChangeListeners)->firePropertyChange(PROPERTY_GROUP_ID_, oldGroupId), groupId));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setEnabled(bool enabled)
{
    auto oldEnabled = this->enabled;
    this->enabled = enabled;
    propertyChangeListeners)->firePropertyChange(PROPERTY_ENABLED_, ::java::lang::Boolean::valueOf(oldEnabled)), ::java::lang::Boolean::valueOf(enabled)));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setHidden(bool hidden)
{
    auto oldHidden = this->hidden;
    this->hidden = hidden;
    propertyChangeListeners)->firePropertyChange(PROPERTY_HIDDEN_, ::java::lang::Boolean::valueOf(oldHidden)), ::java::lang::Boolean::valueOf(hidden)));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setAccelerator(KeyStroke* accelerator)
{
    auto oldAccelerator = this->accelerator;
    this->accelerator = accelerator;
    propertyChangeListeners)->firePropertyChange(PROPERTY_ACCELERATOR_, oldAccelerator), accelerator));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setDropSources(std::list  dropSources)
{
    if(dropSources == 0) {
        std::exception("Pointer = NULL!");
    }
    for (auto _i = dropSources)->iterator(); _i->hasNext(); ) {
        ResourceMask* resourceMask = java_cast< ResourceMask* >(_i->next());
        {
            if(resourceMask == 0) {
                std::exception("Pointer = NULL!");
            }
        }
    }
    auto oldDropSources = java_cast< std::list  >(this->dropSources);
    this->dropSources = dropSources;
    propertyChangeListeners)->firePropertyChange(PROPERTY_DROP_SOURCES_, oldDropSources), dropSources));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setName(const std::string & name)
{
    auto oldName = getName();
    super::setName(name);
    propertyChangeListeners)->firePropertyChange(PROPERTY_NAME_, oldName), name));
}

bool com::tibbo::aggregate::common::action::BasicActionDefinition::isDefault()
{
    return isDefault_;
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setDefault(bool isDefault)
{
    auto oldIsDefault = this->isDefault_;
    this->isDefault_ = isDefault;
    propertyChangeListeners)->firePropertyChange(PROPERTY_DEFAULT_, oldIsDefault, isDefault);
}

bool com::tibbo::aggregate::common::action::BasicActionDefinition::isConcurrent()
{
    return concurrent;
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::setConcurrent(bool allowConcurrentExecution)
{
    this->concurrent = allowConcurrentExecution;
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::addDropSource(ResourceMask* resourceMask)
{
    if(resourceMask == 0) {
        std::exception("Pointer = NULL!");
    }
    dropSources)->add(resourceMask));
}

Action<InitialRequest,ActionCommand,ActionResponse> * BasicActionDefinition::instantiate()
{
    if(actionClass == 0) {
        throw new ::java::lang::IllegalArgumentException(u"Redirection to actions of proxy contexts is not supported"_j);
    }
	Action<InitialRequest,ActionCommand,ActionResponse> * action;
    try {
        action = java_cast< Action* >(java_cast< void* >(actionClass)->newInstance()));
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return action;
}

std::list  com::tibbo::aggregate::common::action::BasicActionDefinition::getCommands()
{
    if(commandList == 0) {
        commandList = new ::java::util::LinkedList();
        registerCommands();
    }
    return ::java::util::Collections::unmodifiableList(commandList);
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::registerCommands()
{
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::registerCommand(ActionCommand* cmd)
{
    if(cmd == 0) {
        throw new ::java::lang::NullPointerException(u"cmd is null"_j);
    }
    cmd = cmd)->clone();
    if(cmd)->getRequestId() == 0) {
        throw new ::java::lang::IllegalArgumentException(u"Request ID is NULL"_j);
    }
    if(commandList == 0) {
        commandList = new ::java::util::LinkedList();
    }
    for (auto _i = commandList)->iterator(); _i->hasNext(); ) {
        ActionCommand* listCommand = java_cast< ActionCommand* >(_i->next());
        {
            if(cmd)->getRequestId())->equals(listCommand)->getRequestId()))) {
                if(cmd)->equals(listCommand)) {
                    return;
                }
                std::cout <<"Command has already been registered: "_j)->append(cmd)->getRequestId()))->toString());
            }
        }
    }
    commandList)->add(cmd));
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::unregisterCommand(const std::string & id)
{
    if(commandList == 0) {
        return;
    }
    for (auto *iterator = commandList)->iterator(); iterator)->hasNext(); ) {
        auto listCommand = java_cast< ActionCommand* >(iterator)->next());
        if(id)->equals(listCommand)->getRequestId()))) {
            iterator)->remove();
        }
    }
}

java::util::concurrent::locks::std::mutex ** com::tibbo::aggregate::common::action::BasicActionDefinition::getExecutionLock()
{
    return executionLock;
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::removePropertyChangeListener(::java::beans::PropertyChangeListener* l)
{
    propertyChangeListeners)->removePropertyChangeListener(l);
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::addPropertyChangeListener(::java::beans::PropertyChangeListener* l)
{
    propertyChangeListeners)->addPropertyChangeListener(l);
}

bool com::tibbo::aggregate::common::action::BasicActionDefinition::isHeadless()
{
    return false;
}

com::tibbo::aggregate::common::security::Permissions* com::tibbo::aggregate::common::action::BasicActionDefinition::getPermissions()
{
    return 0;
}

int com::tibbo::aggregate::common::action::BasicActionDefinition::compareTo(void* o)
{
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::action::BasicActionDefinition::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.BasicActionDefinition", 55);
    return c;
}

void com::tibbo::aggregate::common::action::BasicActionDefinition::clinit()
{
struct string_init_ {
    string_init_() {
    GROUP_ID_SEPARATOR_ = u"/"_j;
    PROPERTY_NAME_ = u"name"_j;
    PROPERTY_DESCRIPTION_ = u"description"_j;
    PROPERTY_DROP_SOURCES_ = u"dropSources"_j;
    PROPERTY_HELP_ = u"help"_j;
    PROPERTY_ACCELERATOR_ = u"accelerator"_j;
    PROPERTY_HIDDEN_ = u"hidden"_j;
    PROPERTY_ENABLED_ = u"enabled"_j;
    PROPERTY_GROUP_ID_ = u"groupId"_j;
    PROPERTY_ICON_ID_ = u"iconId"_j;
    PROPERTY_DEFAULT_ = u"default"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::getDescription()
{
    return AbstractEntityDefinition::getDescription();
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::getGroup()
{
    return AbstractEntityDefinition::getGroup();
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::getHelp()
{
    return AbstractEntityDefinition::getHelp();
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::getIconId()
{
    return AbstractEntityDefinition::getIconId();
}

java::lang::Integer* com::tibbo::aggregate::common::action::BasicActionDefinition::getIndex()
{
    return AbstractEntityDefinition::getIndex();
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::getName()
{
    return AbstractEntityDefinition::getName();
}

void* com::tibbo::aggregate::common::action::BasicActionDefinition::getOwner()
{
    return AbstractEntityDefinition::getOwner();
}

std::string com::tibbo::aggregate::common::action::BasicActionDefinition::toDetailedString()
{
    return AbstractEntityDefinition::toDetailedString();
}

java::lang::Class* com::tibbo::aggregate::common::action::BasicActionDefinition::getClass0()
{
    return class_();
}

