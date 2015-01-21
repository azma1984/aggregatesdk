#pragma once

#include <string>
#include <boost/shared_ptr.hpp>
#include "context/ContextManager.h"
#include "datatable/DataTable.h"

/**
 * Context interface is used to provide a unified way to access any object in AggreGate. It may be some server object (e.g. alert or event filters storage), hardware device or widget component. When
 * server contexts are accessed remotely, so-called proxy contexts are created for operating server-side objects through the same interface.
 */

class Context
{

 public:
    /**
       * This method is called after the context has been added to a context tree and it became aware of its full path. Note, that default implementation of this method in AbstractContext calls tree
       * methods: setupPermissions(), setupMyself() and setupChildren(). These methods should provide initialization logic in inherited classes instead of overridden setup() method.
       *
       * @param contextManager
       *          ContextManager heading current context tree
       */
      void setup(boost::shared_ptr<ContextManager> contextManager);

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
    * Gets variable from context and returns its value.
    */
    virtual boost::shared_ptr<DataTable> getVariable(const std::tring& name, boost::shared_ptr<CallerController> caller) = 0;// throws ContextException;

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
