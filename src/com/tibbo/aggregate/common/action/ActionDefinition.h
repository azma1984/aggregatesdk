#ifndef ActionDefinitionH
#define ActionDefinitionH

#include "context/EntityDefinition.h"
#include "action/ResourceMask.h"
#include "action/GroupIdentifier.h"

#include "action/ActionCommand.h"
#include "action/InitialRequest.h"
#include <boost/thread/mutex.hpp>
#include <list>
#include "action/Action.h"


//forward declarations
//template <class I,class C,class R> class Action;


class ActionDefinition: public EntityDefinition
{
public:
  /**
   * Returns true if action execution is allowed.
   */
  virtual bool isEnabled()=0;

  /**
   * Enables/disables action.
   */
  virtual void setEnabled(bool enabled)=0;

  /**
   * Returns true if action is a default action in context.
   */
  virtual bool isDefault()=0;

  /**
   * Sets default flag for the action.
   */
  virtual void setDefault(bool b)=0;

  /**
   * Returns true if action supports non-interactive execution.
   */
  virtual bool isHeadless()=0;

  /**
   * Returns true if action is hidden.
   */
  virtual bool isHidden()=0;

  /**
   * Returns key stroke used to initiate the action in any UI.
   */
  //todo - Search analog JavaBeans
  //virtual KeyStroke getAccelerator();

  /**
   * Returns the drop source context masks.
   */

  virtual std::list< ResourceMaskPtr > getDropSources()=0;

  /**
   * Returns permissions required to execute action.
   */
  //todo It is defined in the file com\tibbo\aggregate\common\security\Permission.cpp
  virtual PermissionsPtr getPermissions()=0;

  /**
   * Some category of actions may be applied to groups of objects. To make system know what actions to group the definition has an execution group. If action can't be grouped, execution group should
   * be null.
   */
  virtual GroupIdentifierPtr getExecutionGroup()=0;

  /**
   * Creates and return an instance of the Action
   */

  virtual ActionPtr instantiate() =0;

  /**
   * If false, parallel execution of several action instances is not allowed
   */
  virtual bool isConcurrent()=0;

  /**
   * Returns the execution lock
   */
   virtual boost::mutex getExecutionLock()=0;
};
#endif
