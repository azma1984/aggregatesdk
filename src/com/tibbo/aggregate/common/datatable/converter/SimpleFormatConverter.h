#pragma once

#include "datatable/converter/AbstractFormatConverter.h"



class Dateconverter::SimpleFormatConverter
    : public AbstractFormatConverter
{

public:
    typedef AbstractFormatConverter super;
protected:
    void ctor(::java::lang::Class* valueClass);

public:
    void* convertToBean(void* value, void* originalValue);

public: /* protected */
    void* simpleToBean(void* value);

    // Generated

public:
    SimpleFormatConverter(::java::lang::Class* valueClass);
protected:
    SimpleFormatConverter(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
