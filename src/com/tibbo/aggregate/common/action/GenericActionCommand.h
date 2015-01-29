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
#include "AggreGateException.h"

class GenericActionCommand : public ActionCommand
{
 private:
	std::string type;
    DataTablePtr parameters;
	std::string title;
	bool interactive;
	bool last;
	bool batchEntry;
    RequestIdentifierPtr requestId;
    TableFormatPtr responseFormat;

protected:
    void ctor();
    void ctor(const std::string& type, TableFormatPtr requestFormat,
                         TableFormatPtr responseFormat);
    void ctor(const std::string& type, const std::string& title);
    void ctor(const std::string& type, const std::string& title,
                         DataTablePtr parameters, TableFormatPtr format);
    void ctor(const std::string& requestId, const std::string& title, DataTablePtr parameters);

public:
    GenericActionCommand();
    GenericActionCommand(const std::string& type, TableFormatPtr requestFormat,
                         TableFormatPtr responseFormat);
    GenericActionCommand(const std::string& type, const std::string& title);
    GenericActionCommand(const std::string& type, const std::string& title,
                         DataTablePtr parameters, TableFormatPtr format);
    GenericActionCommand(const std::string& requestId, const std::string& title, DataTablePtr parameters);

    void setType(const std::string& type);
    GenericActionResponsePtr createDefaultResponse();
    void setParameters(DataTablePtr parameters);
    void setTitle(const std::string& title);
    void setLast(bool last);    
    void setRequestId(RequestIdentifierPtr requestId);
    TableFormatPtr getResponseFormat();
    void setInteractive(bool interactive);

    std::string getType();
    DataTablePtr getParameters();
    std::string getTitle();
    bool isLast();
    virtual bool isBatchEntry();
    virtual bool isInteractive();
    virtual bool isResponseValid(ActionResponsePtr actionRequest);
    virtual void setBatchEntry(bool batchEntry);
    virtual RequestIdentifierPtr getRequestId();
    virtual ActionCommandPtr clone() const;

    int hashCode();
    bool equals(AgObjectPtr obj);
    std::string toString();
//    virtual Cloneable * clone() const;

protected:
    DataTablePtr constructParameters();        
};

#endif
