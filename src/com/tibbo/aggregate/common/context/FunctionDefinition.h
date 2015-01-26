// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionDefinition.java

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
    TableFormat* inputFormat;
    TableFormat* outputFormat;
    bool hidden;
    Permissions* permissions;
    FunctionImplementation* implementation;
    bool concurrent;

    void init(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description, const std::string &group);

public:
    TableFormat* getInputFormat();
    TableFormat* getOutputFormat();
    bool isHidden();
    Permissions* getPermissions();
    FunctionImplementation* getImplementation();
    void setInputFormat(TableFormat* inputFormat);
    void setOutputFormat(TableFormat* outputFormat);
    void setHidden(bool hidden);
    void setPermissions(Permissions* perms);
    bool isConcurrent();
    void setConcurrent(bool concurrent);
    void setImplementation(FunctionImplementation* implementation);
    FunctionDefinition* clone();
    int compareTo(FunctionDefinition* d);
    int hashCode();
    bool equals(void* obj);

    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat);
    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description);
    FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description, const std::string &group);

};

#endif