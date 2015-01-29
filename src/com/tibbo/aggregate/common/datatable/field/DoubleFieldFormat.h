#pragma once

#include "datatable/FieldFormat.h"
//#include <java/lang/Double.h"



class Datefield::DoubleFieldFormat
    : public FieldFormat
{

public:
    typedef FieldFormat super;
protected:
    void ctor(const std::string & name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::java::lang::Double* getNotNullDefault();

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    ::java::lang::Double* valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
    const std::string & valueToString(::java::lang::Double* value, encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    DoubleFieldFormat(const std::string & name);
protected:
    DoubleFieldFormat(const ::default_init_tag&);


public:
    
    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
    void* valueFromString(const std::string & value);
    const std::string & valueToString(void* value);

private:
    ::java::lang::Class* getClass0();
};
