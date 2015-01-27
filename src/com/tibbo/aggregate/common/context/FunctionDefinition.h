#ifndef FunctionDefinitionH
#define FunctionDefinitionH

#include "AbstractEntityDefinition.h"

#include "context/FunctionImplementation.h"
#include "datatable/TableFormat.h"
#include "security/Permissions.h"
#include "context/EntityDefinition.h"


class FunctionDefinition : public AbstractEntityDefinition
{
 private:
    boost::shared_ptr<TableFormat> inputFormat;
    boost::shared_ptr<TableFormat> outputFormat;
    bool hidden;
    Permissions* permissions;
    FunctionImplementation* implementation;
    bool concurrent;

    void init(const std::string &name, boost::shared_ptr<TableFormat> inputFormat, boost::shared_ptr<TableFormat> outputFormat, const std::string &description, const std::string &group);

public:
    boost::shared_ptr<TableFormat> getInputFormat();
    boost::shared_ptr<TableFormat> getOutputFormat();
    bool isHidden();
    Permissions* getPermissions();
    FunctionImplementation* getImplementation();
    void setInputFormat(boost::shared_ptr<TableFormat> inputFormat);
    void setOutputFormat(boost::shared_ptr<TableFormat> outputFormat);
    void setHidden(bool hidden);
    void setPermissions(Permissions* perms);
    bool isConcurrent();
    void setConcurrent(bool concurrent);
    void setImplementation(FunctionImplementation* implementation);
    FunctionDefinition* clone();
    int compareTo(FunctionDefinition* d);
    int hashCode();
    bool equals(void* obj);

    FunctionDefinition(const std::string &name, boost::shared_ptr<TableFormat> inputFormat, boost::shared_ptr<TableFormat> outputFormat);
    FunctionDefinition(const std::string &name, boost::shared_ptr<TableFormat> inputFormat, boost::shared_ptr<TableFormat> outputFormat, const std::string &description);
    FunctionDefinition(const std::string &name, boost::shared_ptr<TableFormat> inputFormat, boost::shared_ptr<TableFormat> outputFormat, const std::string &description, const std::string &group);

};

#endif