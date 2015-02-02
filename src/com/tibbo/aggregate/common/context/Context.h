﻿#ifndef ContextH
#define ContextH

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>
#include "context/ContextManager.h"
#include "context/ContextStatus.h"
//#include "context/FunctionData.h"
//#include "context/VariableData.h"
//#include "context/ContextVisitor.h"
//#include "context/CallerController.h"
//#include "context/VariableDefinition.h"
//#include "datatable/DataTable.h"
#include "util/Date.h"
#include "util/AgObject.h"
#include "event/FireEventRequestController.h"
//#include "action/ActionDefinition.h"
//#include "security/Permissions.h"
 #include "util/Pointers.h"
class ContextVisitor;
class VariableData;
class VariableDefinition;
class CallerController;
class EventDefinition;
class Permissions;
class FunctionData;
/**
 * Context interface is used to provide a unified way to access any object in AggreGate. It may be some server object (e.g. alert or event filters storage), hardware device or widget component. When
 * server contexts are accessed remotely, so-called proxy contexts are created for operating server-side objects through the same interface.
 */

/*
Интерфейс Context используется, чтобы обеспечить объединенный способ получить доступ
к любому объекту в AggreGate. Это может быть некоторый объект сервера
(например, тревога, или событие фильтрует хранение), устройство аппаратных средств или
компонент виджета. Когда к контекстам сервера получают доступ удаленно,
так называемые прокси контексты созданы для операционных объектов
стороны сервера через тот же самый интерфейс.
*/
class Context : public AgObject
{

 public:
    /**
       * This method is called after the context has been added to a context tree and it became aware of its full path. Note, that default implementation of this method in AbstractContext calls tree
       * methods: setupPermissions(), setupMyself() and setupChildren(). These methods should provide initialization logic in inherited classes instead of overridden setup() method.
       *
       * @param ContextManagerPtr          ContextManager heading current context tree
       */
    virtual void setup(ContextManagerPtr contextManager)=0;

  /*
   Этот метод вызывают, когда контекст удаляется из дерева контекста..
   @param contextManager
   ContextManager, возглавляющий текущее дерево контекста
  */
	virtual void teardown()=0; 

	/*
	 Этот метод должен вернуть true, если контекст был уже инициализирован и
	 выполнение setupMyself () закончено.
	 Его внедрение по умолчанию в AbstractContext не должно быть отвергнуто.
	 @return = true, если setupMyself () был уже закончен.
	*/
	virtual bool isSetupComplete()=0;


   /*Этот метод должен вернуть true, если контекст был уже инициализирован
	 его основной информацией (описание, тип, и т.д.).
	 @return = true, если основная информация о контексте была инициализирована.*/
	virtual bool isInitializedInfo()=0;

	/*
	Этот метод должен возвратить true, если контекст был уже инициализирован детьми.
	@return = true, если дети контекста были инициализированы.*/
	virtual bool isInitializedChildren()=0;


   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его переменные.
   * @return верный, если переменные контекста были инициализированы.
   */

	virtual bool isInitializedVariables()=0;

   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его функции.
   *
   * @return верный, если функции контекста были инициализированы.
   */


	virtual bool isInitializedFunctions()=0;



   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его события.
   * @return верный, если события контекста были инициализированы.
   */

	virtual bool isInitializedEvents()=0;



	/*
   * Этот метод вызывают, когда дерево контекста запускается после его инициализации.
   * Все контексты в дереве должны быть доступными в момент вызова.
   */
	virtual void start()=0;


   /*
   * Этот метод вызывают, когда дерево контекста останавливается
   перед его de-инициализацией. Все контексты в дереве должны быть доступными
	в момент вызова.
   */
	virtual void stop()=0;

	/**
   * Возвращает истину, если контекст был начат, но еще не остановлен.
   */
	virtual bool isStarted()=0;

	//Возвращает имя контекста
	virtual std::string getName()=0;

	//Возвращает путь к контексту (полное имя)
	virtual std::string getPath()=0;

	//возращает путь контектста узла в сети
	virtual std::string getRemotePath()=0;

   /*
   *Когда определенное поддерево контекста от одного сервера будет связано
	с другим сервером, этот метод возвратит отдаленный путь контекста
	корня этого поддерева. Если у текущего контекста нет отдаленного
   * узла сети, этот метод возвращает пустой указатель.
   */
	virtual std::string getRemoteRoot()=0;

	//Возвращает true, если контекст является proxy удаленного контекста
	virtual bool isProxy()=0;

   /*
   * Возвращает истину, если у контекста есть отдаленный узел сети
	 в распределенной архитектуре.
   */
	virtual bool isDistributed()=0;

   /*
   * Возвращает подробное описание контекста, которое включает описание и путь.
   */
	virtual std::string toDetailedString()=0;


	//Возвращает описание контекста
	virtual std::string getDescription()=0;

	//Возвращает тип контекста
	virtual std::string getType()=0;

	//Возвращает назавние группы контекста.
	//NULL, если контекст не принадлежит к группе
	virtual std::string getGroup()=0;

	//Возвращает индекс сравнения контекста  или NULL, если индекс не определен.
	virtual int getIndex()=0;

	//Возвращает ID иконки контекста
	virtual std::string getIconId()=0;


  /**
   * Returns context status or null if status is not enabled;
   */
	virtual ContextStatusPtr getStatus()=0;

  /**
   * Returns context manager those context tree contains this context.
   */
	virtual ContextManagerPtr getContextManager()=0;

  /**
   * Returns list of children contexts that are accessible by the specified <code>CallerController</code>.
   */
	virtual std::list<AgObjectPtr>  getChildren(CallerControllerPtr caller)=0;
	
  /**
   * Returns list of children contexts.
   */
	virtual std::list<AgObjectPtr>  getChildren()=0;

  /**
   * Returns list of visible children contexts.
   */
	virtual std::list<AgObjectPtr>  getVisibleChildren(CallerControllerPtr caller)=0;

  /**
   * Returns list of visible children contexts.
   */
	virtual std::list<AgObjectPtr>  getVisibleChildren()=0;

  /**
   * Returns true if context's visible children are mapped (e.g. for group and aggregation contexts).
   */
	virtual bool isMapped()=0;

  /**
   * Returns list of mapped children contexts.
   */
	virtual std::list<AgObjectPtr>  getMappedChildren(CallerControllerPtr caller)=0;
	
  /**
   * Returns list of mapped children contexts.
   */
	virtual std::list<AgObjectPtr>  getMappedChildren()=0;
	
  /**
   * Returns root context of the context tree containing this context.
   */
	virtual AgObjectPtr getRoot()=0;
  /**
   * Returns context with the selected path.
   * 
   * <code>path</code> argument may be absolute of relative to this context. This method uses provided <code>CallerController</code> for permission checking.
   */
	virtual AgObjectPtr get(const std::string & path, CallerControllerPtr caller)=0;
  /**
   * Returns context with the selected path.
   * 
   * <code>path</code> argument may be absolute of relative to this context.
   * 
   * Note: if this Context is a part of distributed context tree and path argument is not relative, the method will return local context matching its remote "peer" with given path. To get the local
   * context with the given path, use {@link ContextManager#get(String)} instead.
   */
	virtual AgObjectPtr get(const std::string & path)=0;
  /**
   * Returns child of this context with the specified name.
   * 
   * <code>path</code> argument may be absolute of relative to this context.
   * 
   * Note: if this Context is a part of distributed context tree and path argument is not relative, the method will return local context matching its remote "peer" with given path. To get the local
   * context with the given path, use {@link ContextManager#get(String, CallerController)} instead.
   * 
   * This method uses provided <code>CallerController</code> for permission checking.
   */
	virtual AgObjectPtr getChild(const std::string & name, CallerControllerPtr caller)=0;
  /**
   * Returns child of this context with the specified name.
   */
	virtual AgObjectPtr getChild(const std::string & name)=0;
	
  /**
   * Adds new child to the current context.
   */
	virtual void addChild(AgObjectPtr child)=0;

  /**
   * Removes child of current context.
   */
	virtual void removeChild(AgObjectPtr child)=0;

  /**
   * Removes child with specified name.
   */
	virtual void removeChild(const std::string & name)=0;
  /**
   * Permanently destroys child of current context.
   */
	virtual void destroyChild(AgObjectPtr child, bool moving)=0;

  /**
   * Permanently destroys child with specified name.
   */
	virtual void destroyChild(const std::string & name, bool moving)=0;

  /**
   * Permanently destroys this context.
   */
	virtual void destroy(bool moving)=0;

  /**
   * Moves and/or renames the context.
   */
	virtual void move(AgObjectPtr newParent, const std::string & newName)=0;
	virtual void setParent(AgObjectPtr parent)=0;
	
	
  /**
   * Returns parent of this context.
   */
	virtual AgObjectPtr getParent()=0;

  /**
   * Returns true if parentContext is a parent of this context or some of its parents.
   */
	virtual bool hasParent(AgObjectPtr parentContext)=0;
	
  /**
   * Adds variable definition to this context.
   */
	virtual void addVariableDefinition(VariableDefinitionPtr def)=0;

  /**
   * Removes variable definition from this context.
   */
	virtual void removeVariableDefinition(const std::string & name)=0;
  /**
   * Returns data of variable with specified name.
   */
	virtual VariableDataPtr getVariableData(const std::string & name)=0;
  /**
   * Returns definition of variable with specified name.
   */
	virtual VariableDefinitionPtr getVariableDefinition(const std::string & name)=0;
  /**
   * Returns definition of variable with specified name if it's accessible by caller controller.
   */
	virtual VariableDefinitionPtr getVariableDefinition(const std::string & name, CallerControllerPtr caller)=0;
  /**
   * Returns list of variables available for specified <code>CallerController</code>.
   */
	virtual std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller)=0;
  /**
   * Returns list of variables.
   */
	virtual std::list<VariableDefinitionPtr>  getVariableDefinitions()=0;
  /**
   * Returns list of variables belonging to <code>group</code> that are available for specified <code>CallerController</code>.
   */
	virtual std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller, const std::string & group)=0;
  /**
   * Returns list of variables belonging to <code>group</code>.
   */
	virtual std::list<VariableDefinitionPtr>  getVariableDefinitions(const std::string & group)=0;
  /**
   * Returns list of variables.
   */
	virtual std::list<VariableDefinitionPtr>  getVariableDefinitions(CallerControllerPtr caller, bool includeHidden)=0;
  /**
   * Adds function definition to this context.
   */
	virtual void addFunctionDefinition(FunctionDefinitionPtr def)=0;
  /**
   * Removes function definition from this context.
   */
	virtual void removeFunctionDefinition(const std::string & name)=0;
  /**
   * Returns data of function with specified name.
   */
	virtual FunctionDataPtr getFunctionData(const std::string & name)=0;
  /**
   * Returns definition of function with specified name.
   */
	virtual FunctionDefinitionPtr getFunctionDefinition(const std::string & name)=0;

  /**
   * Returns definition of function with specified name if it's accessible by caller controller.
   */
	virtual FunctionDefinitionPtr getFunctionDefinition(const std::string & name, CallerControllerPtr caller)=0;

  /**
   * Returns list of functions available for specified <code>CallerController</code>.
   */
	virtual std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller)=0;
  /**
   * Returns list of functions.
   */
	virtual std::list< FunctionDefinitionPtr >  getFunctionDefinitions()=0;
  /**
   * Returns list of functions belonging to <code>group</code> that are available for specified <code>CallerController</code>.
   */
	virtual std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller, const std::string & group)=0;
  /**
   * Returns list of functions belonging to <code>group</code>.
   */
	virtual std::list< FunctionDefinitionPtr >  getFunctionDefinitions(const std::string & group)=0;

  /**
   * Returns list of functions.
   */
	virtual std::list< FunctionDefinitionPtr >  getFunctionDefinitions(CallerControllerPtr caller, bool includeHidden)=0;

  /**
   * Adds event definition to this context.
   */
	virtual void addEventDefinition(EventDefinitionPtr def)=0;
  /**
   * Removes event definition from this context.
   */
	virtual void removeEventDefinition(const std::string & name)=0;
  /**
   * Returns definition of event with specified name.
   */
	virtual  EventDefinitionPtr getEventDefinition(const std::string & name)=0;

  /**
   * Returns definition of event with specified name if it's accessible by caller controller.
   */
	virtual  EventDefinitionPtr getEventDefinition(const std::string & name, CallerControllerPtr caller)=0;

  /**
   * Returns <code>EventDataPtr</code> of event with specified name.
   */
	virtual EventDataPtr getEventDataPtr(const std::string & name)=0;
  /**
   * Returns list of events available for specified <code>CallerController</code>.
   */
	virtual std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller)=0;
  /**
   * Returns list of events.
   */
	virtual std::list< EventDefinitionPtr >  getEventDefinitions()=0;
  /**
   * Returns list of events belonging to <code>group</code> that are available for specified <code>CallerController</code>.
   */
	virtual std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller, const std::string & group)=0;
 /**
   * Returns list of events belonging to <code>group</code>.
   */
	virtual std::list< EventDefinitionPtr >  getEventDefinitions(const std::string & group)=0;
  /**
   * Returns list of events.
   */
	virtual std::list< EventDefinitionPtr >  getEventDefinitions(CallerControllerPtr caller, bool includeHidden)=0;
  /**
   * Gets variable from context and returns its value.
   */
	virtual DataTablePtr getVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request)=0;

   /**
    * Gets variable from context and returns its value.
    */
    virtual DataTablePtr getVariable(const std::string& name, CallerControllerPtr caller) = 0;

  /**
   * Gets variable from context and returns its value.
   */
	virtual DataTablePtr getVariable(const std::string & name)=0;
	
	  /**
   * Returns value of variable as bean or list of beans.
   */
	virtual AgObjectPtr getVariableObject(const std::string & name, CallerControllerPtr caller)=0;

	  /**
   * Sets context variable to specified <code>value</code>.
   */
	virtual void setVariable(const std::string & name, CallerControllerPtr caller, DataTablePtr value)=0;
	  /**
   * Sets context variable to specified <code>value</code>.
   */
	virtual void setVariable(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value)=0;
	  /**
   * Sets context variable to specified <code>value</code>.
   */
	virtual void setVariable(const std::string & name, CallerControllerPtr caller, AgObjectPtr value) =0;
	  /**
   * Sets context variable to specified <code>value</code>.
   */
	virtual void setVariable(const std::string & name, DataTablePtr value) =0;
	  /**
   * Sets context variable to specified <code>value</code>.
   */
	virtual void setVariable(const std::string & name, AgObjectPtr value) =0;
	
	  /**
   * Gets variable, updates field value in the first record, and sets variable.
   */
	virtual bool setVariableField(const std::string & variable, const std::string & field, AgObjectPtr value, CallerControllerPtr cc) =0;
	  /**
   * Gets variable, updates field value in the specified record, and sets variable.
   */
	virtual bool setVariableField(const std::string & variable, const std::string & field, int record, AgObjectPtr value, CallerControllerPtr cc) =0;
	  /**
   * Gets variable, updates field value in the records for those value of compareField equals compareValue, and sets variable.
   */
	virtual void setVariableField(const std::string & variable, const std::string & field, AgObjectPtr value, const std::string & compareField, AgObjectPtr compareValue, CallerControllerPtr cc) =0;
	
	/**
   * Executes context function with specified <code>parameters</code> and returns its output.
   */
	virtual DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, DataTablePtr parameters)=0;

	virtual DataTablePtr callFunction(const std::string & name, DataTablePtr parameters)=0;

	virtual DataTablePtr callFunction(const std::string & name)=0 ;

	virtual DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr parameters)=0 ;

	virtual DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller, AgObjectPtr parameters)=0 ;
    
	virtual DataTablePtr callFunction(const std::string & name, AgObjectPtr parameters)=0 ;
    
	virtual DataTablePtr callFunction(const std::string & name, CallerControllerPtr caller)=0 ;
    

  /**
   * Fires context event.
   * 
   * @return Event object or null if event was suppressed by context.
   */
	virtual EventPtr fireEvent(const std::string & name)=0;
    virtual EventPtr fireEvent(const std::string & name, CallerControllerPtr caller)=0;
    virtual EventPtr fireEvent(const std::string & name, DataTablePtr data)=0;
    virtual EventPtr fireEvent(const std::string & name, CallerControllerPtr caller, DataTablePtr data)=0;
    virtual EventPtr fireEvent(const std::string & name, int level, DataTablePtr data)=0;
    virtual EventPtr fireEvent(const std::string & name, int level, CallerControllerPtr caller, DataTablePtr data)=0;
	virtual EventPtr fireEvent(const std::string & name, AgObjectPtr data)=0;
    virtual EventPtr fireEvent(const std::string & name, DataTablePtr data, int level, long id, DatePtr creationtime, int  listener, CallerControllerPtr caller, FireEventRequestControllerPtr request)=0;
   
	  /**
   * Add a new action definition to the context.
   * 
   * @param def
   *          ActionDefinition to add
   */
	virtual void addActionDefinition(ActionDefinitionPtr def)=0;
     /**
   * Remove an action definition from the context.
   * 
   * @param name
   *          Name of action to remove
   */
	virtual void removeActionDefinition(const std::string & name)=0;
	  /**
   * Returns action definition by name.
   * 
   * @param name
   *          Name of ActionPtr/
	virtual ActionDefinitionPtr getActionDefinition(const std::string & name)=0;
	virtual ActionDefinitionPtr getActionDefinition(const std::string & name, CallerControllerPtr caller)=0;
	  /**
   * Returns default action definition or NULL if there is no default action or it's not available to the caller.
   * 
   * @param caller
   */
	virtual ActionDefinitionPtr getDefaultActionDefinition(CallerControllerPtr caller)=0;
  /**
   * Returns action definitions.
   */
   virtual  std::list< ActionDefinitionPtr >  getActionDefinitions()=0;
  /**
   * Returns action definitions that are accessible for the caller.
   * 
   * @param caller
   */
	virtual std::list< ActionDefinitionPtr >  getActionDefinitions(CallerControllerPtr caller)=0;
	virtual std::list< ActionDefinitionPtr >  getActionDefinitions(CallerControllerPtr caller, bool includeHidden)=0;
   /**
   * Returns context permissions.
   */
	virtual PermissionsPtr getPermissions()=0;
   /**
   * Returns permissions required to access children of this context.
   */
	virtual PermissionsPtr getChildrenViewPermissions()=0;



  /**
   * Adds listener of event with specified name.
   */
    virtual bool addEventListener(const std::string & name, ContextEventListenerPtr listener)=0;
 
  /**
   * Adds listener of event with specified name. This method allows to add auto-cleaned listeners by setting weak flag to true.
   */
    virtual bool addEventListener(const std::string & name, ContextEventListenerPtr listener, bool weak)=0;

  /**
   * Removes listener of event with specified name.
   */
	virtual  bool removeEventListener(const std::string & name, ContextEventListenerPtr listener)=0;
  /**
   * Returns in-memory event history.
   */
	virtual std::list<EventPtr>  getEventHistory(const std::string & name)=0;
  /**
   * Accepts context visitor, i.e. calls visitor.visit(this).
   */
	virtual  void accept(ContextVisitorPtr visitor)=0;

};


#endif
