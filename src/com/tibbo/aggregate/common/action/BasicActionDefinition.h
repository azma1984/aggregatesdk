#ifndef BasicActionDefinitionH
#define BasicActionDefinitionH

#include "context/AbstractEntityDefinition.h"
#include "action/ActionDefinition.h"
#include "action/ActionCommandList.h"
#include "action/KeyStroke.h"
#include "security/Permission.h"
#include <boost/shared_ptr.hpp>
#include <boost/thread/mutex.hpp>
  #include "action/Action.h"
#include "action/ActionCommand.h"
#include "action/GroupIdentifier.h"
#include "action/KeyStroke.h"
#include "action/RequestIdentifier.h"
#include "action/ResourceMask.h"
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

	PropertyChangeSupportPtr propertyChangeListeners;
	AgClassPtr actionClass;
    bool enabled;
    bool isDefault_;
    bool hidden;
    boost::shared_ptr<GroupIdentifier> executionGroup;
    boost::shared_ptr<KeyStroke> accelerator;
	std::list<ResourceMaskPtr>  dropSources;
    std::list<ActionCommandPtr>  commandList;
	boost::mutex executionLock;

	void init();

public:
    bool concurrent;

    GroupIdentifierPtr getExecutionGroup();
    bool isEnabled();
    bool isHidden();
    boost::shared_ptr<KeyStroke> getAccelerator();
	std::list  getDropSources();
    void setIconId(const std::string & iconId);
    void setHelp(const std::string & help);
    void setDescription(const std::string & description);
    void setExecutionGroup(const std::string & base);
    void setExecutionGroup(boost::shared_ptr<GroupIdentifier> groupId);
    void setEnabled(bool enabled);
    void setHidden(bool hidden);
    void setAccelerator(boost::shared_ptr<KeyStroke> accelerator);
	void setDropSources(std::list  dropSources);
    void setName(const std::string & name);
    bool isDefault();
    void setDefault(bool isDefault);
    bool isConcurrent();
    void setConcurrent(bool allowConcurrentExecution);
    void addDropSource(ResourceMaskPtr resourceMask);
    Action<InitialRequest,ActionCommand,ActionResponse> * instantiate();
    std::list<ActionCommandPtr>  getCommands();


    void registerCommands();
    void registerCommand(ActionCommandPtr cmd);
    void unregisterCommand(const std::string & id);


    boost::mutex getExecutionLock();
	void removePropertyChangeListener(PropertyChangeListenerPtr l);
	void addPropertyChangeListener(PropertyChangeListenerPtr l);
    bool isHeadless();
    PermissionsPtr getPermissions();
    int compareTo(BasicActionDefinitionPtr o);


    BasicActionDefinition(const std::string & name);
    BasicActionDefinition(const std::string & name, AgClassPtr actionClass);


	std::string getDescription();
    std::string getGroup();
    std::string getHelp();
    std::string getIconId();
    int  getIndex();
    std::string getName();
    AgObjectPtr getOwner();
    const std::string toDetailedString();
};

#endif
