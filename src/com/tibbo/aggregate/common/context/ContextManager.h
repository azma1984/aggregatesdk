// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextManager.java

//#include "ContextEventListener.h"
#ifndef ContextManagerH
#define ContextManagerH


template <class T> class ContextManager
{
	//������ ������� ���������� ������
	void start();
	/**
   * ����� stop() � ����� start()
   */
	void restart();

	//1. ���������� ��������� �������
	//2. ������� stop() ��������� ���������
	void stop();

	 /*
	Context* getRoot();
	Context* get(std::string contextName, CallerController caller);
	Context* get(std::string contextName);
	void addMaskEventListener(std::string mask, std::string event, ContextEventListener* listener);
	void addMaskEventListener(std::string mask, std::string event, ContextEventListener* listener, bool weak);
	void removeMaskEventListener(std::string* mask, std::string* event, ContextEventListener* listener);

   void contextAdded(Context* con);
	void contextRemoved(Context* con);
    void contextInfoChanged(Context* con);
    void variableAdded(Context* con, VariableDefinition* vd);
    void variableRemoved(Context* con, VariableDefinition* vd);
    void functionAdded(Context* con, FunctionDefinition* fd);
    void functionRemoved(Context* con, FunctionDefinition* fd);
    void eventAdded(Context* con, EventDefinition* ed);
    void eventRemoved(Context* con, EventDefinition* ed);
    void queue(EventData* ed, ::com::tibbo::aggregate::common::data::Event* ev);
   // ::java::util::concurrent::ExecutorService* getExecutorService();
    CallerController* getCallerController();   */
};

#endif