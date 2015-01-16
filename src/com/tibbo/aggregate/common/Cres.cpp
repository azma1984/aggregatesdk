// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/Cres.java

#include "Cres.h"

//todo - Class stub!
ResourceBundle* Cres::BUNDLE; 

Cres::Cres()
{
    
}

ResourceBundle *Cres::get()
{
    
    return BUNDLE;
}

Class *Cres::getClass()
{

 return 0;
}


void Cres::reinit(Locale* locale)
{
    BUNDLE = ResourceAccessor::fetch(getClass(), locale);
}



