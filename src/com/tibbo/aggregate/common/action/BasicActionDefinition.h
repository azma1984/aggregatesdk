// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BasicActionDefinition.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/beans/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/AbstractEntityDefinition.h"
#include <com/tibbo/aggregate/common/action/ActionDefinition.h"
#include <com/tibbo/aggregate/common/action/ActionCommandList.h"



class com::tibbo::aggregate::common::action::BasicActionDefinition
    : public ::com::tibbo::aggregate::common::context::AbstractEntityDefinition
    , public ActionDefinition
    , public ActionCommandList
{

public:
    typedef ::com::tibbo::aggregate::common::context::AbstractEntityDefinition super;

private:
    static const std::string GROUP_ID_SEPARATOR_;
    static const std::string PROPERTY_NAME_;
    static const std::string PROPERTY_DESCRIPTION_;
    static const std::string PROPERTY_DROP_SOURCES_;
    static const std::string PROPERTY_HELP_;
    static const std::string PROPERTY_ACCELERATOR_;
    static const std::string PROPERTY_HIDDEN_;
    static const std::string PROPERTY_ENABLED_;
    static const std::string PROPERTY_GROUP_ID_;
    static const std::string PROPERTY_ICON_ID_;
    static const std::string PROPERTY_DEFAULT_;
    ::java::beans::PropertyChangeSupport* propertyChangeListeners;
    ::java::lang::Class* actionClass;
    bool enabled;
    bool isDefault_;
    bool hidden;
    GroupIdentifier* executionGroup;
    KeyStroke* accelerator;
    std::list  dropSources;
    std::list  commandList;

public:
    bool concurrent;

private:
    ::java::util::concurrent::locks::std::mutex ** executionLock;
protected:
    void ctor(std::string* name);
    void ctor(std::string* name, ::java::lang::Class* actionClass);

public:
    GroupIdentifier* getExecutionGroup();
    bool isEnabled();
    bool isHidden();
    KeyStroke* getAccelerator();
    std::list  getDropSources();
    void setIconId(std::string* iconId);
    void setHelp(std::string* help);
    void setDescription(std::string* description);
    void setExecutionGroup(std::string* base);
    void setExecutionGroup(GroupIdentifier* groupId);
    void setEnabled(bool enabled);
    void setHidden(bool hidden);
    void setAccelerator(KeyStroke* accelerator);
    void setDropSources(std::list  dropSources);
    void setName(std::string* name);
    bool isDefault();
    void setDefault(bool isDefault);
    bool isConcurrent();
    void setConcurrent(bool allowConcurrentExecution);
    void addDropSource(ResourceMask* resourceMask);
    Action<InitialRequest,ActionCommand,ActionResponse> * instantiate();
    std::list  getCommands();

public: /* protected */
    void registerCommands();
    void registerCommand(ActionCommand* cmd);
    void unregisterCommand(std::string* id);

public:
    ::java::util::concurrent::locks::std::mutex ** getExecutionLock();
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* l);
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* l);
    bool isHeadless();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    int compareTo(void* o);

    // Generated
    BasicActionDefinition(std::string* name);
    BasicActionDefinition(std::string* name, ::java::lang::Class* actionClass);
protected:
    BasicActionDefinition(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    std::string* getDescription();
    std::string* getGroup();
    std::string* getHelp();
    std::string* getIconId();
    ::java::lang::Integer* getIndex();
    std::string* getName();
    void* getOwner();
    std::string* toDetailedString();

private:
    static const std::string& GROUP_ID_SEPARATOR();
    static const std::string& PROPERTY_NAME();
    static const std::string& PROPERTY_DESCRIPTION();
    static const std::string& PROPERTY_DROP_SOURCES();
    static const std::string& PROPERTY_HELP();
    static const std::string& PROPERTY_ACCELERATOR();
    static const std::string& PROPERTY_HIDDEN();
    static const std::string& PROPERTY_ENABLED();
    static const std::string& PROPERTY_GROUP_ID();
    static const std::string& PROPERTY_ICON_ID();
    static const std::string& PROPERTY_DEFAULT();
    ::java::lang::Class* getClass0();
};
