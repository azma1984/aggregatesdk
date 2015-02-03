// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/FunctionDefinition.java
#include "context/FunctionDefinition.h"




FunctionDefinition::FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat)
{
  init(name, inputFormat, outputFormat, 0, 0);
}

FunctionDefinition::FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat,  const std::string &description)
{
  init(name, inputFormat, outputFormat, description, 0);
}

FunctionDefinition::FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat, const std::string &description, const std::string &group)
{
  init(name, inputFormat, outputFormat, description, group);
}




void FunctionDefinition::init(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat, const std::string &description, const std::string &group)
{
    hidden = false;
   // permissions=0;   todo
    concurrent = false;

    setName(name);

    setInputFormat(inputFormat);
    setOutputFormat(outputFormat);

    setDescription(description);
    setGroup(group);
}

TableFormatPtr FunctionDefinition::getInputFormat()
{
    return inputFormat;
}

TableFormatPtr FunctionDefinition::getOutputFormat()
{
    return outputFormat;
}

bool FunctionDefinition::isHidden()
{
    return hidden;
}

PermissionsPtr FunctionDefinition::getPermissions()
{
    return permissions;
}

FunctionImplementationPtr FunctionDefinition::getImplementation()
{
    return implementation;
}

void FunctionDefinition::setInputFormat(TableFormatPtr inputFormat)
{
	if(inputFormat != 0)
	{
	 inputFormat->makeImmutable(DataTablePtr());
	}
	this->inputFormat = inputFormat;
}

void FunctionDefinition::setOutputFormat(TableFormatPtr outputFormat)
{
	if(outputFormat != 0)
	{
		outputFormat->makeImmutable(DataTablePtr());
    }
    this->outputFormat = outputFormat;
}

void FunctionDefinition::setHidden(bool hidden)
{
    this->hidden = hidden;
}

void FunctionDefinition::setPermissions(PermissionsPtr perms)
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

void FunctionDefinition::setImplementation(FunctionImplementationPtr implementation)
{
    this->implementation = implementation;
}

FunctionDefinition *FunctionDefinition::clone() const
{
	/*
    try {
        return java_cast< FunctionDefinitionPtr >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
	*/

    return 0;
}

int FunctionDefinition::compareTo(Comparable *d) const
//int FunctionDefinition::compareTo(FunctionDefinition* d) const
{
   /*
	if(getIndex() != 0 || d)->getIndex() != 0) 
	{
        auto my = getIndex() != 0 ? getIndex() : new ::java::lang::Integer(int(0));
        auto other = d)->getIndex() != 0 ? d)->getIndex() : new ::java::lang::Integer(int(0));
        return other)->compareTo(my);
    }
	*/
    return 0;
}


int FunctionDefinition::hashCode()
{
    const int prime = 31;
    int result = 1;
	/*
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
	*/
    return result;
}

bool FunctionDefinition::equals(FunctionDefinition *obj)
{
    /*
	if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass() != obj->getClass()) {
        return false;
    }
    auto other = java_cast< FunctionDefinitionPtr >(obj);
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
	*/
    return true;
}



