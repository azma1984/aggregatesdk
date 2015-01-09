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

protected:
    void ctor(const std::string& type, TableFormat* requestFormat, TableFormat* responseFormat);
    void ctor(const std::string& type, const std::string& title);
    void ctor(const std::string& type, const std::string& title, DataTable* parameters, TableFormat* format);
    void ctor(const std::string& requestId, const std::string& title, DataTable* parameters);

public:
    GenericActionCommand();
    GenericActionCommand(const std::string& type, TableFormat* requestFormat, TableFormat* responseFormat);
    GenericActionCommand(const std::string& type, const std::string& title);
    GenericActionCommand(const std::string& type, const std::string& title, DataTable* parameters, TableFormat* format);
    GenericActionCommand(const std::string& requestId, const std::string& title, DataTable* parameters);

    void setType(const std::string& type);
    GenericActionResponse* createDefaultResponse();
    void setParameters(DataTable* parameters);
    void setTitle(const std::string& title);
    void setLast(bool last);    
    void setRequestId(RequestIdentifier* requestId);
    TableFormat* getResponseFormat();
    void setInteractive(bool interactive);

    std::string getType();
    DataTable* getParameters();
    std::string getTitle();
    bool isLast();
    virtual bool isBatchEntry();
    virtual bool isInteractive();
    virtual bool isResponseValid(ActionResponse* actionRequest);
    virtual void setBatchEntry(bool batchEntry);
    virtual RequestIdentifier* getRequestId();
    virtual ActionCommand* clone();

    int hashCode();
    bool equals(void* obj);
    std::string toString();

protected:
    DataTable* constructParameters();        
};

#endif
