// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/Context.java

#ifndef ContextH
#define ContextH

#include <string>

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
	virtual void teardown();

	/*
	 Этот метод должен вернуть true, если контекст был уже инициализирован и
	 выполнение setupMyself () закончено.
	 Его внедрение по умолчанию в AbstractContext не должно быть отвергнуто.
	 @return = true, если setupMyself () был уже закончен.
	*/
	virtual bool isSetupComplete();


   /*Этот метод должен вернуть true, если контекст был уже инициализирован
	 его основной информацией (описание, тип, и т.д.).
	 @return = true, если основная информация о контексте была инициализирована.*/
	virtual bool isInitializedInfo();

	/*
	Этот метод должен возвратить true, если контекст был уже инициализирован детьми.
	@return = true, если дети контекста были инициализированы.*/
	virtual bool isInitializedChildren();


   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его переменные.
   * @return верный, если переменные контекста были инициализированы.
   */

	virtual bool isInitializedVariables();

   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его функции.
   *
   * @return верный, если функции контекста были инициализированы.
   */


	virtual bool isInitializedFunctions();



   /*
   * Этот метод должен возвратиться верный, если контекст был уже инициализирован его события.
   * @return верный, если события контекста были инициализированы.
   */

	virtual bool isInitializedEvents();



	/*
   * Этот метод вызывают, когда дерево контекста запускается после его инициализации.
   * Все контексты в дереве должны быть доступными в момент вызова.
   */
	virtual void start();


   /*
   * Этот метод вызывают, когда дерево контекста останавливается
   перед его de-инициализацией. Все контексты в дереве должны быть доступными
	в момент вызова.
   */
	virtual void stop();

	/**
   * Возвращает истину, если контекст был начат, но еще не остановлен.
   */
	virtual bool isStarted();

	//Возвращает имя контекста
	virtual std::string getName();

	//Возвращает путь к контексту (полное имя)
	virtual std::string getPath();

	//возращает путь контектста узла в сети
	virtual std::string getRemotePath();

   /*
   *Когда определенное поддерево контекста от одного сервера будет связано
	с другим сервером, этот метод возвратит отдаленный путь контекста
	корня этого поддерева. Если у текущего контекста нет отдаленного
   * узла сети, этот метод возвращает пустой указатель.
   */
	virtual std::string getRemoteRoot();

	//Возвращает true, если контекст является proxy удаленного контекста
	virtual bool isProxy();

   /*
   * Возвращает истину, если у контекста есть отдаленный узел сети
	 в распределенной архитектуре.
   */
	virtual bool isDistributed();

   /*
   * Возвращает подробное описание контекста, которое включает описание и путь.
   */
	virtual std::string toDetailedString();


	//Возвращает описание контекста
	virtual std::string getDescription();

	//Возвращает тип контекста
	virtual std::string getType();

	//Возвращает назавние группы контекста.
	//NULL, если контекст не принадлежит к группе
	virtual std::string getGroup();

	//Возвращает индекс сравнения контекста  или NULL, если индекс не определен.
	virtual int getIndex();

	//Возвращает ID иконки контекста
	virtual std::string getIconId();

	 /*
	ContextStatus* getStatus();

	ContextManager* getContextManager();
	std::list  getChildren(CallerController* caller);
	std::list  getChildren();
	std::list  getVisibleChildren(CallerController* caller);
	std::list  getVisibleChildren();
	bool isMapped();
	std::list  getMappedChildren(CallerController* caller);
	std::list  getMappedChildren();
	Context* getRoot();
	Context* get(std::string* path, CallerController* caller);
	Context* get(std::string* path);
	Context* getChild(std::string* name, CallerController* caller);
	Context* getChild(std::string* name);
	void addChild(Context* child);
	void removeChild(Context* child);
	void removeChild(std::string* name);
	void destroyChild(Context* child, bool moving);
	void destroyChild(std::string* name, bool moving);
	void destroy(bool moving);
	void move(Context* newParent, std::string* newName);
	void setParent(Context* parent);
	Context* getParent();
	bool hasParent(Context* parentContext);
	void addVariableDefinition(VariableDefinition* def);
	void removeVariableDefinition(std::string* name);
	VariableData* getVariableData(std::string* name);
	VariableDefinition* getVariableDefinition(std::string* name);
	VariableDefinition* getVariableDefinition(std::string* name, CallerController* caller);
	std::list  getVariableDefinitions(CallerController* caller);
	std::list  getVariableDefinitions();
	std::list  getVariableDefinitions(CallerController* caller, std::string* group);
	std::list  getVariableDefinitions(std::string* group);
	std::list  getVariableDefinitions(CallerController* caller, bool includeHidden);
	void addFunctionDefinition(FunctionDefinition* def);
	void removeFunctionDefinition(std::string* name);
	FunctionData* getFunctionData(std::string* name);
	FunctionDefinition* getFunctionDefinition(std::string* name);
	FunctionDefinition* getFunctionDefinition(std::string* name, CallerController* caller);
	std::list  getFunctionDefinitions(CallerController* caller);
	std::list  getFunctionDefinitions();
	std::list  getFunctionDefinitions(CallerController* caller, std::string* group);
	std::list  getFunctionDefinitions(std::string* group);
	std::list  getFunctionDefinitions(CallerController* caller, bool includeHidden);
	void addEventDefinition(EventDefinition* def);
	void removeEventDefinition(std::string* name);
	EventDefinition* getEventDefinition(std::string* name);
	EventDefinition* getEventDefinition(std::string* name, CallerController* caller);
	EventData* getEventData(std::string* name);
	std::list  getEventDefinitions(CallerController* caller);
	std::list  getEventDefinitions();
	std::list  getEventDefinitions(CallerController* caller, std::string* group);
	std::list  getEventDefinitions(std::string* group);
	std::list  getEventDefinitions(CallerController* caller, bool includeHidden);
	::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name, CallerController* caller, RequestController* request);
	::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name, CallerController* caller);
	::com::tibbo::aggregate::common::datatable::DataTable* getVariable(std::string* name);
	void* getVariableObject(std::string* name, CallerController* caller);
	void setVariable(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* value);
	void setVariable(std::string* name, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* value);
	void setVariable(std::string* name, CallerController* caller, voidArray* value) ;
	void setVariable(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;
	void setVariable(std::string* name, voidArray* value) ;
	bool setVariableField(std::string* variable, std::string* field, void* value, CallerController* cc) ;
	bool setVariableField(std::string* variable, std::string* field, int record, void* value, CallerController* cc) ;
	void setVariableField(std::string* variable, std::string* field, void* value, std::string* compareField, void* compareValue, CallerController* cc) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name) ;
	::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, RequestController* request, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller, voidArray* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, voidArray* parameters) ;
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(std::string* name, CallerController* caller) ;
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, CallerController* caller);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, ::com::tibbo::aggregate::common::datatable::DataTable* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, int level, CallerController* caller, ::com::tibbo::aggregate::common::datatable::DataTable* data);
	::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, voidArray* data);
    ::com::tibbo::aggregate::common::data::Event* fireEvent(std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* data, int level, ::java::lang::Long* id, ::java::util::Date* creationtime, ::java::lang::Integer* listener, CallerController* caller, ::com::tibbo::aggregate::common::event::FireEventRequestController* request);
    void addActionDefinition(::com::tibbo::aggregate::common::action::ActionDefinition* def);
    void removeActionDefinition(std::string* name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getActionDefinition(std::string* name, CallerController* caller);
    ::com::tibbo::aggregate::common::action::ActionDefinition* getDefaultActionDefinition(CallerController* caller);
    std::list  getActionDefinitions();
    std::list  getActionDefinitions(CallerController* caller);
    std::list  getActionDefinitions(CallerController* caller, bool includeHidden);
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    ::com::tibbo::aggregate::common::security::Permissions* getChildrenViewPermissions();
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak);
    bool removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    std::list  getEventHistory(std::string* name);
	void accept(ContextVisitor* visitor) ;

 */
    
};

#endif
