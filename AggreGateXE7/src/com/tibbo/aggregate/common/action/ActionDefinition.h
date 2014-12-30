// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionDefinition.java

#ifndef ActionDefinitionH
#define ActionDefinitionH

#include "EntityDefinition.h"
#include "ResourceMask.h"
#include "GroupIdentifier.h"

#include "ActionCommand.h"
#include "InitialRequest.h"
//#include <mutex>  mutex is not present in library dinkumware
#include <list>
//forward declarations
template <class I,class C,class R> class Action;


class ActionDefinition: public EntityDefinition
{
  /**
   * Returns true if action execution is allowed.
   */
  virtual bool isEnabled();

  /**
   * Enables/disables action.
   */
  virtual void setEnabled(bool enabled);

  /**
   * Returns true if action is a default action in context.
   */
  virtual bool isDefault();

  /**
   * Sets default flag for the action.
   */
  virtual void setDefault(bool b);

  /**
   * Returns true if action supports non-interactive execution.
   */
  virtual bool isHeadless();

  /**
   * Returns true if action is hidden.
   */
  virtual bool isHidden();

  /**
   * Returns key stroke used to initiate the action in any UI.
   */
  //todo - Search analog JavaBeans
  //virtual KeyStroke getAccelerator();

  /**
   * Returns the drop source context masks.
   */

  virtual std::list< ResourceMask<ActionDefinition> > getDropSources();

  /**
   * Returns permissions required to execute action.
   */
  //todo It is defined in the file com\tibbo\aggregate\common\security\Permission.cpp
//  virtual Permissions getPermissions();

  /**
   * Some category of actions may be applied to groups of objects. To make system know what actions to group the definition has an execution group. If action can't be grouped, execution group should
   * be null.
   */
  virtual GroupIdentifier *getExecutionGroup();

  /**
   * Creates and return an instance of the action
   */
  virtual Action<InitialRequest,ActionCommand,ActionResponse> *instantiate();

  /**
   * If false, parallel execution of several action instances is not allowed
   */
  virtual bool isConcurrent();

  /**
   * Returns the execution lock
   */
  //todo mutex is not present in library dinkumware
 // virtual std::mutex * getExecutionLock();
};

#endif
