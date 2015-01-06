// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/GenericActionCommand.java
#ifndef GenericActionCommandH
#define GenericActionCommandH
 /*
#include <com/tibbo/aggregate/common/action/ActionCommand.h"
#include <com/tibbo/aggregate/common/action/ActionCommandRegistry.h"
#include <com/tibbo/aggregate/common/action/GenericActionResponse.h"
#include <com/tibbo/aggregate/common/action/RequestIdentifier.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
  */
#include "ActionCommand.h"


class GenericActionCommand: public ActionCommand
{
 private:
	std::string type;
  //DataTable* parameters; todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h
	std::string title;
	bool interactive;
	bool last;
	bool batchEntry;
	RequestIdentifier* requestId;
  //TableFormat* responseFormat; todo it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

	/*
 public:
    bool isResponseValid(ActionResponse* actionRequest);
    RequestIdentifier* getRequestId();
    void setBatchEntry(bool batchEntry);
    bool isBatchEntry();
    ActionCommand* clone();
    bool isInteractive();

protected:
    void ctor(std::string* type, ::com::tibbo::aggregate::common::datatable::TableFormat* requestFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* responseFormat);
    void ctor(std::string* type, std::string* title);
    void ctor(std::string* type, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    void ctor(std::string* requestId, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public:
    void setType(std::string* type);
    GenericActionResponse* createDefaultResponse();
    void setParameters(::com::tibbo::aggregate::common::datatable::DataTable* parameters);
    void setTitle(std::string* title);
    void setLast(bool last);
    void setBatchEntry(bool batchEntry);
    void setRequestId(RequestIdentifier* requestId);
    std::string* getType();
    ::com::tibbo::aggregate::common::datatable::DataTable* getParameters();

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getTitle();
    bool isLast();
    bool isBatchEntry();
    RequestIdentifier* getRequestId();
    bool isResponseValid(ActionResponse* actionRequest);
    ::com::tibbo::aggregate::common::datatable::TableFormat* getResponseFormat();
    void setInteractive(bool interactive);
    bool isInteractive();
    int hashCode();
    bool equals(void* obj);
    ActionCommand* clone();
    std::string* toString();


public:
    GenericActionCommand(std::string* type, ::com::tibbo::aggregate::common::datatable::TableFormat* requestFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* responseFormat);
    GenericActionCommand(std::string* type, std::string* title);

public:
    GenericActionCommand(std::string* type, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, ::com::tibbo::aggregate::common::datatable::TableFormat* format);
    GenericActionCommand(std::string* requestId, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    GenericActionCommand(const ::default_init_tag&);

 */
};

#endif
