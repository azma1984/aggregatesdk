#ifndef ServerContextH
#define ServerContextH

#include "context/Context.h"
//#include "context/VariableDefinition.h"
#include "DataTable/DataTable.h"
//#include "server/groupcontext.h"
#include "data/event.h"
#include "security/Permissions.h"
 #include "util/pointers.h"


class GroupContext;

class ServerContext : public Context
{
    /**
   * Add new visible child to the context.
   * 
   * @param path
   *          Full name of the context to add as visible child of the current one.
   */
	virtual  void addVisibleChild(const std::string &path)=0;

	  /**
   * Remove visible child from the context.
   * 
   * @param path
   *          Full name of the visible child to remove.
   */
    virtual void removeVisibleChild(const std::string &path)=0;

	  /**
   * Returns default value of the variable. If it's not directly specified in the variable definition, an empty data table in the variable's format is created and returned.
   * 
   * @param vd
   *          Definition of the variable those default value to return
   * @return Default value of the variable
   */
    virtual DataTablePtr getDefaultValue(VariableDefinitionPtr vd)=0;
	
	/**
   * Permanently deletes variable value from the database. This method should be used only before variable definition is going to be removed from the context.
   * 
   * @param name
   *          Name of variable those value should be removed.
   */
    virtual void removeVariableValue(const std::string & name)=0;

	 // The following methods should not be called via public API
    virtual bool checkPermissions(PermissionsPtr needPermissions, CallerControllerPtr caller, ContextPtr accessedContext)=0;

  //  std::list getMembers(bool includeSubgroups);
    virtual void addedToGroup(GroupContextPtr groupContext)=0;
	virtual void removedFromGroup(GroupContextPtr groupContext)=0;
  //  ::std::set  getGroups();
    virtual void alertActivated(EventPtr alert, int type)=0;
    virtual void alertDeactivated(EventPtr alert)=0;
    virtual bool shouldBeHidden()=0;
    virtual void setIndex(int index)=0;
    virtual void createDefaultStatisticsChannels(VariableDefinitionPtr vd)=0;
    virtual std::string getShortDescription()=0;
};
  #endif