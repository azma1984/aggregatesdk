// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/Context.java

#ifndef ContextH
#define ContextH

#include <string>
//#include "event/ContextEventListener.h"

/*
Интерфейс Context используется, чтобы обеспечить объединенный способ получить доступ
к любому объекту в AggreGate. Это может быть некоторый объект сервера
(например, тревога, или событие фильтрует хранение), устройство аппаратных средств или
компонент виджета. Когда к контекстам сервера получают доступ удаленно,
так называемые прокси контексты созданы для операционных объектов
стороны сервера через тот же самый интерфейс.
*/
/*template <class C>*/ class Context
{

 public:
 /*
  Этот метод вызывают после того, как контекст был добавлен к дереву контекста,
  и он узнало свой весь путь. Отметьте, то внедрение по умолчанию этого метода
  в дереве требований AbstractContext методы:
  setupPermissions (), setupMyself () и setupChildren ().
  Эти методы должны обеспечить логику инициализации
  в унаследованных классах вместо отвергнутой установки () метод.

  @param contextManager
  ContextManager, возглавляющий текущее дерево контекста.
  */
  //	void setup(ContextManager<C>* contextManager);

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

	//ContextStatus* getStatus();

	//ContextManager* getContextManager();
	//std::list  getChildren(CallerController* caller);
	//std::list  getChildren();
	//std::list  getVisibleChildren(CallerController* caller);
	//std::list  getVisibleChildren();
	//bool isMapped();
	//std::list  getMappedChildren(CallerController* caller);
	//std::list  getMappedChildren();
	//Context* getRoot();
	//Context* get(const std::string & path, CallerController* caller);
	//Context* get(const std::string & path);
	//Context* getChild(const std::string & name, CallerController* caller);
	//Context* getChild(const std::string & name);
	//void addChild(Context* child);
	//void removeChild(Context* child);
	//void removeChild(const std::string & name);
	//void destroyChild(Context* child, bool moving);
	//void destroyChild(const std::string & name, bool moving);
	//void destroy(bool moving);
	//void move(Context* newParent, const std::string & newName);
	//void setParent(Context* parent);
	//Context* getParent();
	//bool hasParent(Context* parentContext);
	//void addVariableDefinition(VariableDefinition* def);
	//void removeVariableDefinition(const std::string & name);
	//VariableData* getVariableData(const std::string & name);
	//VariableDefinition* getVariableDefinition(const std::string & name);
	//VariableDefinition* getVariableDefinition(const std::string & name, CallerController* caller);
	//std::list  getVariableDefinitions(CallerController* caller);
	//std::list  getVariableDefinitions();
	//std::list  getVariableDefinitions(CallerController* caller, const std::string & group);
	//std::list  getVariableDefinitions(const std::string & group);
	//std::list  getVariableDefinitions(CallerController* caller, bool includeHidden);
	//void addFunctionDefinition(FunctionDefinition* def);
	//void removeFunctionDefinition(const std::string & name);
	//FunctionData* getFunctionData(const std::string & name);
	//FunctionDefinition* getFunctionDefinition(const std::string & name);
	//FunctionDefinition* getFunctionDefinition(const std::string & name, CallerController* caller);
	//std::list  getFunctionDefinitions(CallerController* caller);
	//std::list  getFunctionDefinitions();
	//std::list  getFunctionDefinitions(CallerController* caller, const std::string & group);
	//std::list  getFunctionDefinitions(const std::string & group);
	//std::list  getFunctionDefinitions(CallerController* caller, bool includeHidden);
	//void addEventDefinition(EventDefinition* def);
	//void removeEventDefinition(const std::string & name);
	//EventDefinition* getEventDefinition(const std::string & name);
	//EventDefinition* getEventDefinition(const std::string & name, CallerController* caller);
	//EventData* getEventData(const std::string & name);
	//std::list  getEventDefinitions(CallerController* caller);
	//std::list  getEventDefinitions();
	//std::list  getEventDefinitions(CallerController* caller, const std::string & group);
	//std::list  getEventDefinitions(const std::string & group);
	//std::list  getEventDefinitions(CallerController* caller, bool includeHidden);
	//DataTable* getVariable(const std::string & name, CallerController* caller, RequestController* request);
	//DataTable* getVariable(const std::string & name, CallerController* caller);
	//DataTable* getVariable(const std::string & name);
	//void* getVariableObject(const std::string & name, CallerController* caller);
	//void setVariable(const std::string & name, CallerController* caller, DataTable* value);
	//void setVariable(const std::string & name, CallerController* caller, RequestController* request, DataTable* value);
	//void setVariable(const std::string & name, CallerController* caller, voidArray* value) ;
	//void setVariable(const std::string & name, DataTable* value) ;
	//void setVariable(const std::string & name, voidArray* value) ;
	//bool setVariableField(const std::string & variable, const std::string & field, void* value, CallerController* cc) ;
	//bool setVariableField(const std::string & variable, const std::string & field, int record, void* value, CallerController* cc) ;
	//void setVariableField(const std::string & variable, const std::string & field, void* value, const std::string & compareField, void* compareValue, CallerController* cc) ;
	//DataTable* callFunction(const std::string & name, CallerController* caller, DataTable* parameters) ;
	//DataTable* callFunction(const std::string & name, DataTable* parameters) ;
	//DataTable* callFunction(const std::string & name) ;
	//DataTable* callFunction(const std::string & name, CallerController* caller, RequestController* request, DataTable* parameters) ;
 //   DataTable* callFunction(const std::string & name, CallerController* caller, voidArray* parameters) ;
 //   DataTable* callFunction(const std::string & name, voidArray* parameters) ;
 //   DataTable* callFunction(const std::string & name, CallerController* caller) ;
 //   Event* fireEvent(const std::string & name);
 //   Event* fireEvent(const std::string & name, CallerController* caller);
 //   Event* fireEvent(const std::string & name, DataTable* data);
 //   Event* fireEvent(const std::string & name, CallerController* caller, DataTable* data);
 //   Event* fireEvent(const std::string & name, int level, DataTable* data);
 //   Event* fireEvent(const std::string & name, int level, CallerController* caller, DataTable* data);
	//Event* fireEvent(const std::string & name, voidArray* data);
 //   Event* fireEvent(const std::string & name, DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, int  listener, CallerController* caller, FireEventRequestController* request);
 //   void addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def);
 //   void removeActionDefinition(const std::string & name);
 //   ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name);
 //   ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(const std::string & name, CallerController* caller);
 //   ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(CallerController* caller);
 //   std::list  getActionDefinitions();
 //   std::list  getActionDefinitions(CallerController* caller);
 //   std::list  getActionDefinitions(CallerController* caller, bool includeHidden);
 //   Permissions* getPermissions();
 //   Permissions* getChildrenViewPermissions();

  /**
   * Adds listener of event with specified name.
   */
  //  virtual bool addEventListener(const std::string & name, ContextEventListener* listener)=0;
 
  /**
   * Adds listener of event with specified name. This method allows to add auto-cleaned listeners by setting weak flag to true.
   */
   // virtual bool addEventListener(const std::string & name, ContextEventListener* listener, bool weak)=0;

 //   bool removeEventListener(const std::string & name, ContextEventListener* listener);
 //   std::list  getEventHistory(const std::string & name);
	//void accept(ContextVisitor* visitor) ;

};

#endif
