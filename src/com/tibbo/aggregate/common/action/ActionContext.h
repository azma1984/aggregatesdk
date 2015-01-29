#ifndef ActionContextH
#define ActionContextH

#define BOOST_THREAD_USE_LIB
#include <list>
#include <exception>
#include <iostream>

//#include "action/ActionDefinition.h"
#include "action/BatchContext.h"
//#include "action/ActionManager.h"
#include "action/RequestCache.h"
#include "context/Context.h"


class ActionContext
{
 private:
	ActionDefinitionPtr actionDefinition;
	BatchContextPtr batchContext;
	RequestCachePtr requestCache;


	unsigned char actionState;
	ActionManagerPtr actionManager;
	std::list<RequestIdentifierPtr> requestedIds;

 public:
	enum ActionState1{CREATED, INITIALIZED, WORKING, DESTROYED};

	ActionContext(ActionDefinitionPtr actionDefinition, ActionManagerPtr actionManager);

	//define com\tibbo\aggregate\common\context\CallerController.h;
	CallerControllerPtr getCallerController();

	ContextPtr getDefiningContext();
	ActionDefinitionPtr getActionDefinition();
	BatchContextPtr getBatchContext();
	RequestCachePtr getRequestCache();
	unsigned char getActionState();
	ActionManagerPtr getActionManager();

	std::list<RequestIdentifierPtr> getRequestedIds();

	void setActionDefinition(ActionDefinitionPtr actionDefinition);

	void setBatchContext(BatchContextPtr batchContext);
	void setRequestCache(RequestCachePtr requestCache);

	void setActionState(unsigned char actionState);
	void setActionManager(ActionManagerPtr actionManager);
};
#endif
