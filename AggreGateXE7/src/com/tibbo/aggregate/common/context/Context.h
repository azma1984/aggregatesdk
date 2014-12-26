// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/Context.java

#ifndef ContextH
#define ContextH

 #include <string>

/*
��������� Context ������������, ����� ���������� ������������ ������ �������� ������
� ������ ������� � AggreGate. ��� ����� ���� ��������� ������ �������
(��������, �������, ��� ������� ��������� ��������), ���������� ���������� ������� ���
��������� �������. ����� � ���������� ������� �������� ������ ��������,
��� ���������� ������ ��������� ������� ��� ������������ ��������
������� ������� ����� ��� �� ����� ���������.
*/
template <class C> class Context
{
 /*
  ���� ����� �������� ����� ����, ��� �������� ��� �������� � ������ ���������,
  � �� ������ ���� ���� ����. ��������, �� ��������� �� ��������� ����� ������
  � ������ ���������� AbstractContext ������:
  setupPermissions (), setupMyself () � setupChildren ().
  ��� ������ ������ ���������� ������ �������������
  � �������������� ������� ������ ����������� ��������� () �����.

  @param contextManager
  ContextManager, ������������� ������� ������ ���������.
  */
  //	void setup(ContextManager<C>* contextManager);

  /*
   ���� ����� ��������, ����� �������� ��������� �� ������ ���������..
   @param contextManager
   ContextManager, ������������� ������� ������ ���������
  */
	virtual void teardown();

	/*
	 ���� ����� ������ ������� true, ���� �������� ��� ��� ��������������� �
	 ���������� setupMyself () ���������.
	 ��� ��������� �� ��������� � AbstractContext �� ������ ���� ����������.
	 @return = true, ���� setupMyself () ��� ��� ��������.
	*/
	virtual bool isSetupComplete();


   /*���� ����� ������ ������� true, ���� �������� ��� ��� ���������������
	 ��� �������� ����������� (��������, ���, � �.�.).
	 @return = true, ���� �������� ���������� � ��������� ���� ����������������.*/
	virtual bool isInitializedInfo();

	/*
	���� ����� ������ ���������� true, ���� �������� ��� ��� ��������������� ������.
	@return = true, ���� ���� ��������� ���� ����������������.*/
	virtual bool isInitializedChildren();


   /*
   * ���� ����� ������ ������������ ������, ���� �������� ��� ��� ��������������� ��� ����������.
   * @return ������, ���� ���������� ��������� ���� ����������������.
   */

	virtual bool isInitializedVariables();

   /*
   * ���� ����� ������ ������������ ������, ���� �������� ��� ��� ��������������� ��� �������.
   *
   * @return ������, ���� ������� ��������� ���� ����������������.
   */


	virtual bool isInitializedFunctions();



   /*
   * ���� ����� ������ ������������ ������, ���� �������� ��� ��� ��������������� ��� �������.
   * @return ������, ���� ������� ��������� ���� ����������������.
   */

	virtual bool isInitializedEvents();



	/*
   * ���� ����� ��������, ����� ������ ��������� ����������� ����� ��� �������������.
   * ��� ��������� � ������ ������ ���� ���������� � ������ ������.
   */
	virtual void start();


   /*
   * ���� ����� ��������, ����� ������ ��������� ���������������
   ����� ��� de-��������������. ��� ��������� � ������ ������ ���� ����������
	� ������ ������.
   */
	virtual void stop();

	/**
   * ���������� ������, ���� �������� ��� �����, �� ��� �� ����������.
   */
	virtual bool isStarted();

	//���������� ��� ���������
	virtual std::string getName();

	//���������� ���� � ��������� (������ ���)
	virtual std::string getPath();

	//��������� ���� ���������� ���� � ����
	virtual std::string getRemotePath();

   /*
   *����� ������������ ��������� ��������� �� ������ ������� ����� �������
	� ������ ��������, ���� ����� ��������� ���������� ���� ���������
	����� ����� ���������. ���� � �������� ��������� ��� �����������
   * ���� ����, ���� ����� ���������� ������ ���������.
   */
	virtual std::string getRemoteRoot();

	//���������� true, ���� �������� �������� proxy ���������� ���������
	virtual bool isProxy();

   /*
   * ���������� ������, ���� � ��������� ���� ���������� ���� ����
	 � �������������� �����������.
   */
	virtual bool isDistributed();

   /*
   * ���������� ��������� �������� ���������, ������� �������� �������� � ����.
   */
	virtual std::string toDetailedString();


	//���������� �������� ���������
	virtual std::string getDescription();

	//���������� ��� ���������
	virtual std::string getType();

	//���������� �������� ������ ���������.
	//NULL, ���� �������� �� ����������� � ������
	virtual std::string getGroup();

	//���������� ������ ��������� ���������  ��� NULL, ���� ������ �� ���������.
	virtual int getIndex();

	//���������� ID ������ ���������
	virtual std::string getIconId();

	 /*
	ContextStatus* getStatus();

	ContextManager* getContextManager();
	::java::util::List* getChildren(CallerController* caller);
	::java::util::List* getChildren();
	::java::util::List* getVisibleChildren(CallerController* caller);
	::java::util::List* getVisibleChildren();
	bool isMapped();
	::java::util::List* getMappedChildren(CallerController* caller);
	::java::util::List* getMappedChildren();
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
	::java::util::List* getVariableDefinitions(CallerController* caller);
	::java::util::List* getVariableDefinitions();
	::java::util::List* getVariableDefinitions(CallerController* caller, std::string* group);
	::java::util::List* getVariableDefinitions(std::string* group);
	::java::util::List* getVariableDefinitions(CallerController* caller, bool includeHidden);
	void addFunctionDefinition(FunctionDefinition* def);
	void removeFunctionDefinition(std::string* name);
	FunctionData* getFunctionData(std::string* name);
	FunctionDefinition* getFunctionDefinition(std::string* name);
	FunctionDefinition* getFunctionDefinition(std::string* name, CallerController* caller);
	::java::util::List* getFunctionDefinitions(CallerController* caller);
	::java::util::List* getFunctionDefinitions();
	::java::util::List* getFunctionDefinitions(CallerController* caller, std::string* group);
	::java::util::List* getFunctionDefinitions(std::string* group);
	::java::util::List* getFunctionDefinitions(CallerController* caller, bool includeHidden);
	void addEventDefinition(EventDefinition* def);
	void removeEventDefinition(std::string* name);
	EventDefinition* getEventDefinition(std::string* name);
	EventDefinition* getEventDefinition(std::string* name, CallerController* caller);
	EventData* getEventData(std::string* name);
	::java::util::List* getEventDefinitions(CallerController* caller);
	::java::util::List* getEventDefinitions();
	::java::util::List* getEventDefinitions(CallerController* caller, std::string* group);
	::java::util::List* getEventDefinitions(std::string* group);
	::java::util::List* getEventDefinitions(CallerController* caller, bool includeHidden);
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
    ::java::util::List* getActionDefinitions();
    ::java::util::List* getActionDefinitions(CallerController* caller);
    ::java::util::List* getActionDefinitions(CallerController* caller, bool includeHidden);
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    ::com::tibbo::aggregate::common::security::Permissions* getChildrenViewPermissions();
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    bool addEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak);
    bool removeEventListener(std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    ::java::util::List* getEventHistory(std::string* name);
	void accept(ContextVisitor* visitor) ;

 */
    
};

#endif
