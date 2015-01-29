#include "action/BasicActionDefinition.h"



//const std::string BasicActionDefinition::GROUP_ID_SEPARATOR_ = "/";
//const std::string BasicActionDefinition::PROPERTY_NAME_ = "name";
//const std::string BasicActionDefinition::PROPERTY_DESCRIPTION_ = "description";
//const std::string BasicActionDefinition::PROPERTY_DROP_SOURCES_ = "dropSources";
//const std::string BasicActionDefinition::PROPERTY_HELP_ = "help";
//const std::string BasicActionDefinition::PROPERTY_ACCELERATOR_ = "accelerator";
//const std::string BasicActionDefinition::PROPERTY_HIDDEN_ = "hidden";
//const std::string BasicActionDefinition::PROPERTY_ENABLED_ = "enabled";
//const std::string BasicActionDefinition::PROPERTY_GROUP_ID_ = "groupId";
//const std::string BasicActionDefinition::PROPERTY_ICON_ID_ = "iconId";
//const std::string BasicActionDefinition::PROPERTY_DEFAULT_ = "default";
//
//
//BasicActionDefinition::BasicActionDefinition(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//BasicActionDefinition::BasicActionDefinition(const std::string & name)
//    : BasicActionDefinition(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(name);
//}
//
//BasicActionDefinition::BasicActionDefinition(const std::string & name, AgClassPtr actionClass)
//    : BasicActionDefinition(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(name,actionClass);
//}
//
//void BasicActionDefinition::init()
//{
//todo
//    propertyChangeListeners = new ::java::beans::PropertyChangeSupport(this);
//    enabled = true;
//    concurrent = true;
//    executionLock = new ::java::util::concurrent::locks::std::mutex *();
//}
//
//std::string& BasicActionDefinition::GROUP_ID_SEPARATOR()
//{
//
//    return GROUP_ID_SEPARATOR_;
//}
//std::string BasicActionDefinition::GROUP_ID_SEPARATOR_;
//
//std::string& BasicActionDefinition::PROPERTY_NAME()
//{
//
//    return PROPERTY_NAME_;
//}
//std::string BasicActionDefinition::PROPERTY_NAME_;
//
//std::string& BasicActionDefinition::PROPERTY_DESCRIPTION()
//{
//
//    return PROPERTY_DESCRIPTION_;
//}
//std::string BasicActionDefinition::PROPERTY_DESCRIPTION_;
//
//std::string& BasicActionDefinition::PROPERTY_DROP_SOURCES()
//{
//
//    return PROPERTY_DROP_SOURCES_;
//}
//std::string BasicActionDefinition::PROPERTY_DROP_SOURCES_;
//
//std::string& BasicActionDefinition::PROPERTY_HELP()
//{
//
//    return PROPERTY_HELP_;
//}
//std::string BasicActionDefinition::PROPERTY_HELP_;
//
//std::string& BasicActionDefinition::PROPERTY_ACCELERATOR()
//{
//
//    return PROPERTY_ACCELERATOR_;
//}
//std::string BasicActionDefinition::PROPERTY_ACCELERATOR_;
//
//std::string& BasicActionDefinition::PROPERTY_HIDDEN()
//{
//
//    return PROPERTY_HIDDEN_;
//}
//std::string BasicActionDefinition::PROPERTY_HIDDEN_;
//
//std::string& BasicActionDefinition::PROPERTY_ENABLED()
//{
//
//    return PROPERTY_ENABLED_;
//}
//std::string BasicActionDefinition::PROPERTY_ENABLED_;
//
//std::string& BasicActionDefinition::PROPERTY_GROUP_ID()
//{
//
//    return PROPERTY_GROUP_ID_;
//}
//std::string BasicActionDefinition::PROPERTY_GROUP_ID_;
//
//std::string& BasicActionDefinition::PROPERTY_ICON_ID()
//{
//
//    return PROPERTY_ICON_ID_;
//}
//std::string BasicActionDefinition::PROPERTY_ICON_ID_;
//
//std::string& BasicActionDefinition::PROPERTY_DEFAULT()
//{
//
//    return PROPERTY_DEFAULT_;
//}
//std::string BasicActionDefinition::PROPERTY_DEFAULT_;
//
//void BasicActionDefinition::ctor(const std::string & name)
//{
//    ctor(name, 0);
//}
//
//void BasicActionDefinition::ctor(const std::string & name, AgClassPtr actionClass)
//{
//    super::ctor();
//    init();
//    if(actionClass != 0 && !Action::class_())->isAssignableFrom(actionClass)) {
//		throw new ::java::lang::IllegalArgumentException(u"Action class should implement Action interface"_j);
//    }
//    super::setName(name);
//    this->actionClass = actionClass;
//}
//
//GroupIdentifierPtr BasicActionDefinition::getExecutionGroup()
//{
//    return executionGroup;
//}
//
//bool BasicActionDefinition::isEnabled()
//{
//    return enabled;
//}
//
//bool BasicActionDefinition::isHidden()
//{
//    return hidden;
//}
//
//KeyStroke* BasicActionDefinition::getAccelerator()
//{
//    return accelerator;
//}
//
//std::list  BasicActionDefinition::getDropSources()
//{
//    if(dropSources != 0) {
//        return ::java::util::Collections::unmodifiableList(dropSources);
//    } else {
//        return 0;
//    }
//}
//
//void BasicActionDefinition::setIconId(const std::string & iconId)
//{
//    auto oldIconId = getIconId();
//    super::setIconId(iconId);
//    propertyChangeListeners)->firePropertyChange(PROPERTY_ICON_ID_, oldIconId), iconId));
//}
//
//void BasicActionDefinition::setHelp(const std::string & help)
//{
//    auto oldHelp = getHelp();
//    super::setHelp(help);
//    propertyChangeListeners)->firePropertyChange(PROPERTY_HELP_, oldHelp), help));
//}
//
//void BasicActionDefinition::setDescription(const std::string & description)
//{
//    auto oldDescription = getDescription();
//    super::setDescription(description);
//    propertyChangeListeners)->firePropertyChange(PROPERTY_DESCRIPTION_, oldDescription), description));
//}
//
//void BasicActionDefinition::setExecutionGroup(const std::string & base)
//{
//    setExecutionGroup(new GroupIdentifier(std::stringBuilder().append(getName())->append(GROUP_ID_SEPARATOR_)
//        ->append(base)->toString()));
//}
//
//void BasicActionDefinition::setExecutionGroup(GroupIdentifierPtr groupId)
//{
//    auto oldGroupId = this->executionGroup;
//    this->executionGroup = groupId;
//    propertyChangeListeners)->firePropertyChange(PROPERTY_GROUP_ID_, oldGroupId), groupId));
//}
//
//void BasicActionDefinition::setEnabled(bool enabled)
//{
//    auto oldEnabled = this->enabled;
//    this->enabled = enabled;
//    propertyChangeListeners)->firePropertyChange(PROPERTY_ENABLED_, ::java::lang::Boolean::valueOf(oldEnabled)), ::java::lang::Boolean::valueOf(enabled)));
//}
//
//void BasicActionDefinition::setHidden(bool hidden)
//{
//    auto oldHidden = this->hidden;
//    this->hidden = hidden;
//    propertyChangeListeners)->firePropertyChange(PROPERTY_HIDDEN_, ::java::lang::Boolean::valueOf(oldHidden)), ::java::lang::Boolean::valueOf(hidden)));
//}
//
//void BasicActionDefinition::setAccelerator(KeyStroke* accelerator)
//{
//    auto oldAccelerator = this->accelerator;
//    this->accelerator = accelerator;
//    propertyChangeListeners)->firePropertyChange(PROPERTY_ACCELERATOR_, oldAccelerator), accelerator));
//}
//
//void BasicActionDefinition::setDropSources(std::list  dropSources)
//{
//    if(dropSources == 0) {
//        std::exception("Pointer = NULL!");
//    }
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
//    propertyChangeListeners)->firePropertyChange(PROPERTY_DROP_SOURCES_, oldDropSources), dropSources));
//}
//
//void BasicActionDefinition::setName(const std::string & name)
//{
//    auto oldName = getName();
//    super::setName(name);
//    propertyChangeListeners)->firePropertyChange(PROPERTY_NAME_, oldName), name));
//}
//
//bool BasicActionDefinition::isDefault()
//{
//    return isDefault_;
//}
//
//void BasicActionDefinition::setDefault(bool isDefault)
//{
//    auto oldIsDefault = this->isDefault_;
//    this->isDefault_ = isDefault;
//    propertyChangeListeners)->firePropertyChange(PROPERTY_DEFAULT_, oldIsDefault, isDefault);
//}
//
//bool BasicActionDefinition::isConcurrent()
//{
//    return concurrent;
//}
//
//void BasicActionDefinition::setConcurrent(bool allowConcurrentExecution)
//{
//    this->concurrent = allowConcurrentExecution;
//}
//
//void BasicActionDefinition::addDropSource(ResourceMaskPtr resourceMask)
//{
//    if(resourceMask == 0) {
//        std::exception("Pointer = NULL!");
//    }
//    dropSources)->add(resourceMask));
//}
//
//Action<InitialRequestPtr,ActionCommandPtr,ActionResponsePtr> * BasicActionDefinition::instantiate()
//{
//    if(actionClass == 0) {
//        throw new ::java::lang::IllegalArgumentException(u"Redirection to actions of proxy contexts is not supported"_j);
//    }
//	Action<InitialRequestPtr,ActionCommandPtr,ActionResponsePtr> * action;
//    try {
//        action = java_cast< ActionPtr >(java_cast< AgObjectPtr >(actionClass)->newInstance()));
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(ex));
//    }
//    return action;
//}
//
//std::list  BasicActionDefinition::getCommands()
//{
//    if(commandList == 0) {
//        commandList = new ::java::util::LinkedList();
//        registerCommands();
//    }
//    return ::java::util::Collections::unmodifiableList(commandList);
//}
//
//void BasicActionDefinition::registerCommands()
//{
//}
//
//void BasicActionDefinition::registerCommand(ActionCommandPtr cmd)
//{
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
//}
//
//void BasicActionDefinition::unregisterCommand(const std::string & id)
//{
//    if(commandList == 0) {
//        return;
//    }
//    for (auto *iterator = commandList)->iterator(); iterator)->hasNext(); ) {
//        auto listCommand = java_cast< ActionCommandPtr >(iterator)->next());
//        if(id)->equals(listCommand)->getRequestId()))) {
//            iterator)->remove();
//        }
//    }
//}
//
//java::util::concurrent::locks::std::mutex ** BasicActionDefinition::getExecutionLock()
//{
//    return executionLock;
//}
//
//void BasicActionDefinition::removePropertyChangeListener(::java::beans::PropertyChangeListener l)
//{
//    propertyChangeListeners)->removePropertyChangeListener(l);
//}
//
//void BasicActionDefinition::addPropertyChangeListener(::java::beans::PropertyChangeListener l)
//{
//    propertyChangeListeners)->addPropertyChangeListener(l);
//}
//
//bool BasicActionDefinition::isHeadless()
//{
//    return false;
//}
//
//com::tibbo::aggregate::common::security::PermissionsPtr BasicActionDefinition::getPermissions()
//{
//    return 0;
//}
//
//int BasicActionDefinition::compareTo(AgObjectPtr o)
//{
//    return 0;
//}
//
//
//
//java::lang::Class* BasicActionDefinition::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.BasicActionDefinition", 55);
//    return c;
//}
//
//void BasicActionDefinition::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    GROUP_ID_SEPARATOR_ = u"/"_j;
//    PROPERTY_NAME_ = u"name"_j;
//    PROPERTY_DESCRIPTION_ = u"description"_j;
//    PROPERTY_DROP_SOURCES_ = u"dropSources"_j;
//    PROPERTY_HELP_ = u"help"_j;
//    PROPERTY_ACCELERATOR_ = u"accelerator"_j;
//    PROPERTY_HIDDEN_ = u"hidden"_j;
//    PROPERTY_ENABLED_ = u"enabled"_j;
//    PROPERTY_GROUP_ID_ = u"groupId"_j;
//    PROPERTY_ICON_ID_ = u"iconId"_j;
//    PROPERTY_DEFAULT_ = u"default"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//}
//
//std::string BasicActionDefinition::getDescription()
//{
//    return AbstractEntityDefinition::getDescription();
//}
//
//std::string BasicActionDefinition::getGroup()
//{
//    return AbstractEntityDefinition::getGroup();
//}
//
//std::string BasicActionDefinition::getHelp()
//{
//    return AbstractEntityDefinition::getHelp();
//}
//
//std::string BasicActionDefinition::getIconId()
//{
//    return AbstractEntityDefinition::getIconId();
//}
//
//java::lang::Integer* BasicActionDefinition::getIndex()
//{
//    return AbstractEntityDefinition::getIndex();
//}
//
//std::string BasicActionDefinition::getName()
//{
//    return AbstractEntityDefinition::getName();
//}
//
//AgObjectPtr BasicActionDefinition::getOwner()
//{
//    return AbstractEntityDefinition::getOwner();
//}
//
//std::string BasicActionDefinition::toDetailedString()
//{
//    return AbstractEntityDefinition::toDetailedString();
//}
//

