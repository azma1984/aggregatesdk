// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionDefinition.java

#ifndef FunctionDefinitionH
#define FunctionDefinitionH

#include "AbstractEntityDefinition.h"

//#include <com/tibbo/aggregate/common/context/FunctionImplementation.h"
#include "datatable/TableFormat.h"
//#include <com/tibbo/aggregate/common/security/Permissions.h"
#include "context/entitydefinition.h"



class FunctionDefinition : public AbstractEntityDefinition
{
public:
/*
private:
    TableFormat* inputFormat;
    TableFormat* outputFormat;
    bool hidden;
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
    FunctionImplementation* implementation;
    bool concurrent;

private:
    void init_(std::string* name, TableFormat* inputFormat, TableFormat* outputFormat, std::string* description, std::string* group);

public:
    TableFormat* getInputFormat();
    TableFormat* getOutputFormat();
    bool isHidden();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    FunctionImplementation* getImplementation();
    void setInputFormat(TableFormat* inputFormat);
    void setOutputFormat(TableFormat* outputFormat);
    void setHidden(bool hidden);
    void setPermissions(::com::tibbo::aggregate::common::security::Permissions* perms);
    bool isConcurrent();
    void setConcurrent(bool concurrent);
    void setImplementation(FunctionImplementation* implementation);
    FunctionDefinition* clone();
    int compareTo(FunctionDefinition* d);
    int hashCode();
    bool equals(void* obj);
*/

    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat);
    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description);
    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description, const std::string &group);
/*

public:
    

private:
    void init();

public:
    int compareTo(void* arg0);
*/
};

#endif