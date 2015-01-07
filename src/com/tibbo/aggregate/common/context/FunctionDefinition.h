// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionDefinition.java

#ifndef FunctionDefinitionH
#define FunctionDefinitionH

#include "AbstractEntityDefinition.h"


class FunctionDefinition : public AbstractEntityDefinition
{
/*
public:
    typedef AbstractEntityDefinition super;

private:
    ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat;
    ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat;
    bool hidden;
    ::com::tibbo::aggregate::common::security::Permissions* permissions;
    FunctionImplementation* implementation;
    bool concurrent;
protected:
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, std::string* description);
    void ctor(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, std::string* description, std::string* group);

private:
    void init_(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, std::string* description, std::string* group);

public:
    ::com::tibbo::aggregate::common::datatable::TableFormat* getInputFormat();
    ::com::tibbo::aggregate::common::datatable::TableFormat* getOutputFormat();
    bool isHidden();
    ::com::tibbo::aggregate::common::security::Permissions* getPermissions();
    FunctionImplementation* getImplementation();
    void setInputFormat(::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat);
    void setOutputFormat(::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat);
    void setHidden(bool hidden);
    void setPermissions(::com::tibbo::aggregate::common::security::Permissions* perms);
    bool isConcurrent();
    void setConcurrent(bool concurrent);
    void setImplementation(FunctionImplementation* implementation);
    FunctionDefinition* clone();
    int compareTo(FunctionDefinition* d);
    int hashCode();
    bool equals(void* obj);

    // Generated
    FunctionDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat);
    FunctionDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, std::string* description);
    FunctionDefinition(std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* inputFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, std::string* description, std::string* group);
protected:
    FunctionDefinition(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);
*/
};

#endif