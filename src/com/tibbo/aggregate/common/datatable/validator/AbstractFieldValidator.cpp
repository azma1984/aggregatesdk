// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.java
#include <com/tibbo/aggregate/common/datatable/validator/AbstractFieldValidator.h"

#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Character.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/CloneNotSupportedException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"



bool AbstractFieldValidator::shouldEncode()
{
  return false;
}

std::string AbstractFieldValidator::encode()
{
    return "";
}

bool AbstractFieldValidator::equals(void* obj)
{
    if(obj == 0)
    {
     return false;
    }

    if(dynamic_cast< FieldValidator* >(obj) == 0)
    {
     return false;
    }
    return Util::equals(getType(), (java_cast< FieldValidator* >(obj))->getType());
}

void *AbstractFieldValidator::getType()
{
    return 0;
}

void *AbstractFieldValidator::clone()
{
  /*
	try
    {
        return super::clone();
    }
    catch (::java::lang::CloneNotSupportedException* ex)
    {
       throw new ::java::lang::IllegalStateException(static_cast< ::java::lang::Throwable* >(ex));
    }*/
}



