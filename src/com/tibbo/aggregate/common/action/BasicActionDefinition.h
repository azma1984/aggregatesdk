#pragma once

#include "context/AbstractEntityDefinition.h"
#include "action/ActionDefinition.h"
#include "action/ActionCommandList.h"
#include "action/KeyStroke.h"
#include "security/Permission.h"
#include <boost/shared_ptr.hpp>
#include <boost/thread/mutex.hpp>

class BasicActionDefinition
    : public AbstractEntityDefinition
    , public ActionDefinition
    , public ActionCommandList
{
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
    //TODO:
    //PropertyChangeSupport* propertyChangeListeners;
    //::java::lang::Class* actionClass;
    bool enabled;
    bool isDefault_;
    bool hidden;
    boost::shared_ptr<GroupIdentifier> executionGroup;
    boost::shared_ptr<KeyStroke> accelerator;
//    std::list<boost::shared_ptr<ResourceMask>>  dropSources;
    std::list<boost::shared_ptr<ActionCommand>>  commandList;
    boost::mutex executionLock;

public:
    bool concurrent;

public:
    GroupIdentifier* getExecutionGroup();
    bool isEnabled();
    bool isHidden();
    boost::shared_ptr<KeyStroke> getAccelerator();
//    std::list  getDropSources();
    void setIconId(const std::string & iconId);
    void setHelp(const std::string & help);
    void setDescription(const std::string & description);
    void setExecutionGroup(const std::string & base);
    void setExecutionGroup(boost::shared_ptr<GroupIdentifier> groupId);
    void setEnabled(bool enabled);
    void setHidden(bool hidden);
    void setAccelerator(boost::shared_ptr<KeyStroke> accelerator);
//    void setDropSources(std::list  dropSources);
    void setName(const std::string & name);
    bool isDefault();
    void setDefault(bool isDefault);
    bool isConcurrent();
    void setConcurrent(bool allowConcurrentExecution);
    void addDropSource(ResourceMask* resourceMask);
    Action<InitialRequest,ActionCommand,ActionResponse> * instantiate();
    std::list<boost::shared_ptr<ActionCommand>>  getCommands();

public: /* protected */
    void registerCommands();
    void registerCommand(boost::shared_ptr<ActionCommand> cmd);
    void unregisterCommand(const std::string & id);

public:
    boost::mutex getExecutionLock();
//    void removePropertyChangeListener(PropertyChangeListener* l);
//    void addPropertyChangeListener(PropertyChangeListener* l);
    bool isHeadless();
    boost::shared_ptr<Permissions> getPermissions();
    int compareTo(BasicActionDefinition* o);

    // Generated
    BasicActionDefinition(const std::string & name);
    BasicActionDefinition(const std::string & name, ::java::lang::Class* actionClass);

private:
    void init();

public:
    std::string getDescription();
    std::string getGroup();
    std::string getHelp();
    std::string getIconId();
    int  getIndex();
    std::string getName();
    void* getOwner();
    const std::string toDetailedString();
};
