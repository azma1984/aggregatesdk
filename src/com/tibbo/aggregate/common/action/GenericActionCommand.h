#ifndef GenericActionCommandH
#define GenericActionCommandH

#include "action/ActionCommand.h"
#include "action/GenericActionResponse.h"
#include "action/RequestIdentifier.h"
//#include "datatable/DataTable.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataTableException.h"
//#include "datatable/TableFormat.h"
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
	void init();

public:
	GenericActionCommand();

	GenericActionCommand(const std::string& type, const std::string& title,DataTablePtr parameters, TableFormatPtr format);
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
<<<<<<< HEAD
    //virtual GenericActionCommandPtr clone() const;  todo - conflicts with base class Cloneable
=======
>>>>>>> 3bd0c99b943ff6107dd58013b7bdee930e82cad9

    int hashCode();
    bool equals(AgObjectPtr obj);
    std::string toString();    
    //virtual GenericActionCommand * clone() const; // Для абстрактного класса этот метод не нужно реализовывать

protected:
	DataTablePtr constructParameters();
	GenericActionCommand(const std::string& type, TableFormatPtr requestFormat,TableFormatPtr responseFormat);
	GenericActionCommand(const std::string& type, const std::string& title);
};

#endif
