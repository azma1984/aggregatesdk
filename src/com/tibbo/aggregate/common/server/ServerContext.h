// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/ServerContext.java

#ifndef ServerContextH
#define ServerContextH

#include "context/Context.h"

class ServerContext : public Context
{
    /**
   * Add new visible child to the context.
   * 
   * @param path
   *          Full name of the context to add as visible child of the current one.
   */
	virtual  void addVisibleChild(const std::string &path);

	  /**
   * Remove visible child from the context.
   * 
   * @param path
   *          Full name of the visible child to remove.
   */
    virtual void removeVisibleChild(const std::string &path);

	  /**
   * Returns default value of the variable. If it's not directly specified in the variable definition, an empty data table in the variable's format is created and returned.
   * 
   * @param vd
   *          Definition of the variable those default value to return
   * @return Default value of the variable
   */
    virtual DataTable* getDefaultValue(VariableDefinition* vd);
	
	/**
   * Permanently deletes variable value from the database. This method should be used only before variable definition is going to be removed from the context.
   * 
   * @param name
   *          Name of variable those value should be removed.
   */
    virtual void removeVariableValue(std::string* name);

	 // The following methods should not be called via public API
    virtual bool checkPermissions(Permissions* needPermissions, CallerController* caller, Context* accessedContext);

  //  ::java::util::Collection* getMembers(bool includeSubgroups);
    virtual void addedToGroup(GroupContext* groupContext);
    virtual void removedFromGroup(GroupContext* groupContext);
  //  ::java::util::Set* getGroups();
    virtual void alertActivated(Event* alert, int type);
    virtual void alertDeactivated(Event* alert);
    virtual bool shouldBeHidden();
    virtual void setIndex(int index);
    virtual void createDefaultStatisticsChannels(VariableDefinition* vd);
    virtual std::string getShortDescription();


    
};
  #endif