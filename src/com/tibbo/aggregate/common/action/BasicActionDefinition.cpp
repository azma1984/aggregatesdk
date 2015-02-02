#include "action/BasicActionDefinition.h"
#include "util/Pointers.h"


const std::string BasicActionDefinition::GROUP_ID_SEPARATOR_ = "/";
const std::string BasicActionDefinition::PROPERTY_NAME_ = "name";
const std::string BasicActionDefinition::PROPERTY_DESCRIPTION_ = "description";
const std::string BasicActionDefinition::PROPERTY_DROP_SOURCES_ = "dropSources";
const std::string BasicActionDefinition::PROPERTY_HELP_ = "help";
const std::string BasicActionDefinition::PROPERTY_ACCELERATOR_ = "accelerator";
const std::string BasicActionDefinition::PROPERTY_HIDDEN_ = "hidden";
const std::string BasicActionDefinition::PROPERTY_ENABLED_ = "enabled";
const std::string BasicActionDefinition::PROPERTY_GROUP_ID_ = "groupId";
const std::string BasicActionDefinition::PROPERTY_ICON_ID_ = "iconId";
const std::string BasicActionDefinition::PROPERTY_DEFAULT_ = "default";


BasicActionDefinition::BasicActionDefinition(const std::string & name)
{
    ctor(name, 0);
}

BasicActionDefinition::BasicActionDefinition(const std::string & name, AgClassPtr actionClass)
{
    ctor(name, actionClass);
}

void BasicActionDefinition::init()
{
    //propertyChangeListeners = new ::java::beans::PropertyChangeSupport(this);
    enabled = true;
    concurrent = true;
//    executionLock = new ::java::util::concurrent::locks::std::mutex *();
}

void BasicActionDefinition::ctor(const std::string & name, AgClassPtr actionClass)
{
    init();
//    if(actionClass != 0 && !Action::class_())->isAssignableFrom(actionClass)) {
//        throw new ::java::lang::IllegalArgumentException(u"Action class should implement Action interface"_j);
//    }
    AbstractEntityDefinition::setName(name);
    this->actionClass = actionClass;
}

GroupIdentifierPtr BasicActionDefinition::getExecutionGroup()
{
    return executionGroup;
}

bool BasicActionDefinition::isEnabled()
{
    return enabled;
}

bool BasicActionDefinition::isHidden()
{
    return hidden;
}

KeyStrokePtr BasicActionDefinition::getAccelerator()
{
    return accelerator;
}

std::list<ResourceMaskPtr>  BasicActionDefinition::getDropSources()
{
    return dropSources;
}

void BasicActionDefinition::setIconId(const std::string & iconId)
{
    auto oldIconId = getIconId();
    AbstractEntityDefinition::setIconId(iconId);
    //propertyChangeListeners->firePropertyChange(PROPERTY_ICON_ID_, oldIconId), iconId));
}

void BasicActionDefinition::setHelp(const std::string & help)
{
    auto oldHelp = getHelp();
    AbstractEntityDefinition::setHelp(help);
    //propertyChangeListeners)->firePropertyChange(PROPERTY_HELP_, oldHelp), help));
}

void BasicActionDefinition::setDescription(const std::string & description)
{
    auto oldDescription = getDescription();
    AbstractEntityDefinition::setDescription(description);
    //propertyChangeListeners)->firePropertyChange(PROPERTY_DESCRIPTION_, oldDescription), description));
}

void BasicActionDefinition::setExecutionGroup(const std::string & base)
{
    setExecutionGroup(GroupIdentifierPtr(new GroupIdentifier(std::string(getName()).append(GROUP_ID_SEPARATOR_).append(base))));
}

void BasicActionDefinition::setExecutionGroup(GroupIdentifierPtr groupId)
{
    auto oldGroupId = this->executionGroup;
    this->executionGroup = groupId;
    //propertyChangeListeners)->firePropertyChange(PROPERTY_GROUP_ID_, oldGroupId), groupId));
}

void BasicActionDefinition::setEnabled(bool enabled)
{
    auto oldEnabled = this->enabled;
    this->enabled = enabled;
    //propertyChangeListeners)->firePropertyChange(PROPERTY_ENABLED_, ::java::lang::Boolean::valueOf(oldEnabled)), ::java::lang::Boolean::valueOf(enabled)));
}

void BasicActionDefinition::setHidden(bool hidden)
{
    auto oldHidden = this->hidden;
    this->hidden = hidden;
    //propertyChangeListeners)->firePropertyChange(PROPERTY_HIDDEN_, ::java::lang::Boolean::valueOf(oldHidden)), ::java::lang::Boolean::valueOf(hidden)));
}

void BasicActionDefinition::setAccelerator(KeyStrokePtr accelerator)
{
    auto oldAccelerator = this->accelerator;
    this->accelerator = accelerator;
    //propertyChangeListeners)->firePropertyChange(PROPERTY_ACCELERATOR_, oldAccelerator), accelerator));
}

void BasicActionDefinition::setDropSources(std::list<ResourceMaskPtr>  dropSources)
{
    if(dropSources.size() == 0) {
        //TODO:
        //throw new NullPointerException();
    }

//    for (auto _i = dropSources)->iterator(); _i->hasNext(); ) {
//        ResourceMaskPtr resourceMask = java_cast< ResourceMaskPtr >(_i->next());
//        {
//            if(resourceMask == 0) {
//                std::exception("Pointer = NULL!");
//            }
//        }
//    }

//    auto oldDropSources = java_cast< std::list  >(this->dropSources);
//    this->dropSources = dropSources;
    //propertyChangeListeners->firePropertyChange(PROPERTY_DROP_SOURCES_, oldDropSources), dropSources));
}

void BasicActionDefinition::setName(const std::string & name)
{
    auto oldName = getName();
    AbstractEntityDefinition::setName(name);
    //propertyChangeListeners->firePropertyChange(PROPERTY_NAME_, oldName), name));
}

bool BasicActionDefinition::isDefault()
{
    return isDefault_;
}

void BasicActionDefinition::setDefault(bool isDefault)
{
    bool oldIsDefault = this->isDefault_;
    this->isDefault_ = isDefault;
    //propertyChangeListeners)->firePropertyChange(PROPERTY_DEFAULT_, oldIsDefault, isDefault);
}

bool BasicActionDefinition::isConcurrent()
{
    return concurrent;
}

void BasicActionDefinition::setConcurrent(bool allowConcurrentExecution)
{
    this->concurrent = allowConcurrentExecution;
}

void BasicActionDefinition::addDropSource(ResourceMaskPtr resourceMask)
{
    if(resourceMask == 0) {
        std::exception("Pointer = NULL!");
    }

    dropSources.push_back(resourceMask);
}

ActionPtr BasicActionDefinition::instantiate()
{
    if (actionClass == 0) {
        //TODO:
        //throw new IllegalArgumentException("Redirection to actions of proxy contexts is not supported");
    }

    ActionPtr action;
    //TODO:
//    try {
//        action = (actionClass->newInstance());
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//    }
    return action;
}

std::list<ActionCommandPtr>  BasicActionDefinition::getCommands()
{
    return commandList;
}

void BasicActionDefinition::registerCommands()
{
}

// NOt used
void BasicActionDefinition::registerCommand(ActionCommandPtr cmd)
{
//    if(cmd == 0) {
//        throw new ::java::lang::NullPointerException(u"cmd is null"_j);
//    }
//    cmd = cmd)->clone();
//    if(cmd)->getRequestId() == 0) {
//        throw new ::java::lang::IllegalArgumentException(u"Request ID is NULL"_j);
//    }
//    if(commandList == 0) {
//        commandList = new ::java::util::LinkedList();
//    }
//    for (auto _i = commandList)->iterator(); _i->hasNext(); ) {
//        ActionCommandPtr listCommand = java_cast< ActionCommandPtr >(_i->next());
//        {
//            if(cmd)->getRequestId())->equals(listCommand)->getRequestId()))) {
//                if(cmd)->equals(listCommand)) {
//                    return;
//                }
//                std::cout <<"Command has already been registered: "_j)->append(cmd)->getRequestId()))->toString());
//            }
//        }
//    }
//    commandList)->add(cmd));
}

// NOt used
void BasicActionDefinition::unregisterCommand(const std::string & id)
{
//    if(commandList == 0) {
//        return;
//    }
//    for (auto *iterator = commandList)->iterator(); iterator)->hasNext(); ) {
//        auto listCommand = java_cast< ActionCommandPtr >(iterator)->next());
//        if(id)->equals(listCommand)->getRequestId()))) {
//            iterator)->remove();
//        }
//    }
}

boost::mutex& BasicActionDefinition::getExecutionLock()
{
    return executionLock;
}

//TODO:
//void BasicActionDefinition::removePropertyChangeListener(::java::beans::PropertyChangeListener l)
//{
//    propertyChangeListeners)->removePropertyChangeListener(l);
//}

//void BasicActionDefinition::addPropertyChangeListener(::java::beans::PropertyChangeListener l)
//{
//    propertyChangeListeners)->addPropertyChangeListener(l);
//}

bool BasicActionDefinition::isHeadless()
{
    return false;
}

PermissionsPtr BasicActionDefinition::getPermissions()
{
    return 0;
}

int BasicActionDefinition::compareTo(BasicActionDefinition* o)
{
    return 0;
}

std::string BasicActionDefinition::getDescription()
{
    return AbstractEntityDefinition::getDescription();
}

std::string BasicActionDefinition::getGroup()
{
    return AbstractEntityDefinition::getGroup();
}

std::string BasicActionDefinition::getHelp()
{
    return AbstractEntityDefinition::getHelp();
}

std::string BasicActionDefinition::getIconId()
{
    return AbstractEntityDefinition::getIconId();
}

int BasicActionDefinition::getIndex()
{
    return AbstractEntityDefinition::getIndex();
}

std::string BasicActionDefinition::getName()
{
    return AbstractEntityDefinition::getName();
}

AgObjectPtr BasicActionDefinition::getOwner()
{
    return AbstractEntityDefinition::getOwner();
}

std::string BasicActionDefinition::toDetailedString()
{
    return AbstractEntityDefinition::toDetailedString();
}


