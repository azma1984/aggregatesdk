#ifndef GenericActionCommandH
#define GenericActionCommandH

#include <boost/shared_ptr.hpp>
#include "action/ActionCommand.h"
#include "action/GenericActionResponse.h"
#include "action/RequestIdentifier.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataTableException.h"
#include "datatable/TableFormat.h"


class GenericActionCommand : public ActionCommand
{
 private:
	std::string type;
    boost::shared_ptr<DataTable> parameters;
	std::string title;
	bool interactive;
	bool last;
	bool batchEntry;
    boost::shared_ptr<RequestIdentifier> requestId;
    boost::shared_ptr<TableFormat> responseFormat;


 public:
    bool isResponseValid(ActionResponse* actionRequest);
    RequestIdentifier* getRequestId();
    void setBatchEntry(bool batchEntry);
    bool isBatchEntry();
    ActionCommand* clone();
    bool isInteractive();

protected:
    void ctor(const std::string& type, TableFormat* requestFormat, TableFormat* responseFormat);
    void ctor(const std::string& type, const std::string& title);
    void ctor(const std::string& type, const std::string& title, DataTable* parameters, TableFormat* format);
    void ctor(const std::string& requestId, const std::string& title, DataTable* parameters);

public:
    void setType(const std::string& type);
    GenericActionResponse* createDefaultResponse();
    void setParameters(DataTable* parameters);
    void setTitle(const std::string& title);
    void setLast(bool last);
    virtual void setBatchEntry(bool batchEntry);
    void setRequestId(RequestIdentifier* requestId);
    std::string getType();
    DataTable* getParameters();

protected:
    DataTable* constructParameters();

public:
    std::string getTitle();
    virtual bool isLast();
    virtual bool isBatchEntry();
    RequestIdentifier* getRequestId();
    virtual bool isResponseValid(ActionResponse* actionRequest);
    TableFormat* getResponseFormat();
    void setInteractive(bool interactive);
    virtual bool isInteractive();
    int hashCode();
    bool equals(void* obj);
    virtual ActionCommand* clone();
    std::string toString();

public:
    GenericActionCommand();
    GenericActionCommand(const std::string& type, TableFormat* requestFormat, TableFormat* responseFormat);
    GenericActionCommand(const std::string& type, const std::string& title);
    GenericActionCommand(const std::string& type, const std::string& title, DataTable* parameters, TableFormat* format);
    GenericActionCommand(const std::string& requestId, const std::string& title, DataTable* parameters);
};

#endif
