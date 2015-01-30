#pragma once

#include "datatable/converter/AbstractFormatConverter.h"



class SimpleFormatConverter
    : public AbstractFormatConverter
{
public:
    void* convertToBean(void* value, void* originalValue);

public: /* protected */
    void* simpleToBean(void* value);

    // Generated

public:
    //TODO:
//    SimpleFormatConverter(Class* valueClass);
};
