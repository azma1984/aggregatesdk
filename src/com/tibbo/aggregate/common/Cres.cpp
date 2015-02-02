// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/Cres.java

#include "Cres.h"

//todo - Class stub!

ResourceBundle Cres::BUNDLE;

Cres::Cres()
{
    
}

ResourceBundle* Cres::get()
{
    
    return &BUNDLE;
}

AgClassPtr Cres::getClass()
{

 return AgClassPtr();
}


void Cres::reinit(LocalePtr locale)
{
   BUNDLE = ResourceAccessor::fetch(getClass(), locale);
}



