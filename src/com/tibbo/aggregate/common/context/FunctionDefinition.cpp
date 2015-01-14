// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionDefinition.java
#include "context/FunctionDefinition.h"




FunctionDefinition::FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat) 
{
//    ctor(name,inputFormat,outputFormat);
}

FunctionDefinition::FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat,  const std::string &description) 
{
 //   ctor(name,inputFormat,outputFormat,description);
}

FunctionDefinition::FunctionDefinition(const std::string &name, TableFormat* inputFormat, TableFormat* outputFormat, const std::string &description, const std::string &group) 
{
  //  ctor(name,inputFormat,outputFormat,description,group);
}
/*

void FunctionDefinition::init()
{
    hidden = false;
    permissions;
    concurrent = false;
}

void FunctionDefinition::ctor(std::string* name, TableFormat* inputFormat, TableFormat* outputFormat)
{
    super::ctor();
    init();
    init_(name, inputFormat, outputFormat, 0, 0);
}

void FunctionDefinition::ctor(std::string* name, TableFormat* inputFormat, TableFormat* outputFormat, std::string* description)
{
    super::ctor();
    init();
    init_(name, inputFormat, outputFormat, description, 0);
}

void FunctionDefinition::ctor(std::string* name, TableFormat* inputFormat, TableFormat* outputFormat, std::string* description, std::string* group)
{
    super::ctor();
    init();
    init_(name, inputFormat, outputFormat, description, group);
}

void FunctionDefinition::init_(std::string* name, TableFormat* inputFormat, TableFormat* outputFormat, std::string* description, std::string* group)
{
    setName(name);
    setInputFormat(inputFormat);
    setOutputFormat(outputFormat);
    setDescription(description);
    setGroup(group);
}

com::tibbo::aggregate::common::datatable::TableFormat* FunctionDefinition::getInputFormat()
{
    return inputFormat;
}

com::tibbo::aggregate::common::datatable::TableFormat* FunctionDefinition::getOutputFormat()
{
    return outputFormat;
}

bool FunctionDefinition::isHidden()
{
    return hidden;
}

com::tibbo::aggregate::common::security::Permissions* FunctionDefinition::getPermissions()
{
    return permissions;
}

FunctionImplementation* FunctionDefinition::getImplementation()
{
    return implementation;
}

void FunctionDefinition::setInputFormat(TableFormat* inputFormat)
{
    if(inputFormat != 0) {
        inputFormat)->makeImmutable(0);
    }
    this->inputFormat = inputFormat;
}

void FunctionDefinition::setOutputFormat(TableFormat* outputFormat)
{
    if(outputFormat != 0) {
        outputFormat)->makeImmutable(0);
    }
    this->outputFormat = outputFormat;
}

void FunctionDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void FunctionDefinition::setPermissions(::com::tibbo::aggregate::common::security::Permissions* perms)
{
    this->permissions = perms;
}

bool FunctionDefinition::isConcurrent()
{
    return concurrent;
}

void FunctionDefinition::setConcurrent(bool concurrent)
{
    this->concurrent = concurrent;
}

void FunctionDefinition::setImplementation(FunctionImplementation* implementation)
{
    this->implementation = implementation;
}

FunctionDefinition* FunctionDefinition::clone()
{
    try {
        return java_cast< FunctionDefinition* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

int FunctionDefinition::compareTo(FunctionDefinition* d)
{
    if(getIndex() != 0 || d)->getIndex() != 0) {
        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
        return other)->compareTo(my);
    }
    return 0;
}

int FunctionDefinition::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< FunctionDefinition* >(arg0));
}

int FunctionDefinition::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((getDescription() == 0) ? int(0) : getDescription())->hashCode());
    result = prime * result + ((getGroup() == 0) ? int(0) : getGroup())->hashCode());
    result = prime * result + ((getHelp() == 0) ? int(0) : getHelp())->hashCode());
    result = prime * result + (hidden ? int(1231) : int(1237));
    result = prime * result + ((getIndex() == 0) ? int(0) : getIndex())->hashCode());
    result = prime * result + ((inputFormat == 0) ? int(0) : inputFormat)->hashCode());
    result = prime * result + ((getName() == 0) ? int(0) : getName())->hashCode());
    result = prime * result + ((outputFormat == 0) ? int(0) : outputFormat)->hashCode());
    result = prime * result + ((implementation == 0) ? int(0) : implementation)->hashCode());
    result = prime * result + ((permissions == 0) ? int(0) : permissions)->hashCode());
    return result;
}

bool FunctionDefinition::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< FunctionDefinition* >(obj);
    if(getDescription() == 0) {
        if(other)->getDescription() != 0) {
            return false;
        }
    } else if(!getDescription())->equals(other)->getDescription()))) {
        return false;
    }
    if(getGroup() == 0) {
        if(other)->getGroup() != 0) {
            return false;
        }
    } else if(!getGroup())->equals(other)->getGroup()))) {
        return false;
    }
    if(getHelp() == 0) {
        if(other)->getHelp() != 0) {
            return false;
        }
    } else if(!getHelp())->equals(other)->getHelp()))) {
        return false;
    }
    if(hidden != other)->hidden) {
        return false;
    }
    if(getIndex() == 0) {
        if(other)->getIndex() != 0) {
            return false;
        }
    } else if(!getIndex())->equals(other)->getIndex()))) {
        return false;
    }
    if(inputFormat == 0) {
        if(other)->inputFormat != 0) {
            return false;
        }
    } else if(!inputFormat)->equals(other)->inputFormat))) {
        return false;
    }
    if(getName() == 0) {
        if(other)->getName() != 0) {
            return false;
        }
    } else if(!getName())->equals(other)->getName()))) {
        return false;
    }
    if(outputFormat == 0) {
        if(other)->outputFormat != 0) {
            return false;
        }
    } else if(!outputFormat)->equals(other)->outputFormat))) {
        return false;
    }
    if(implementation == 0) {
        if(other)->implementation != 0) {
            return false;
        }
    } else if(!implementation)->equals(other)->implementation)) {
        return false;
    }
    if(permissions == 0) {
        if(other)->permissions != 0) {
            return false;
        }
    } else if(!permissions)->equals(other)->permissions))) {
        return false;
    }
    return true;
}

*/

