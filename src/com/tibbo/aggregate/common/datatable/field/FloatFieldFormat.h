// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/FloatFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include "datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/FieldFormat.h"
//#include <java/lang/Float.h"



class Datefield::FloatFieldFormat
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
    ::java::lang::Float* getNotNullDefault();

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    ::java::lang::Float* valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
    const std::string & valueToString(::java::lang::Float* value, encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    FloatFieldFormat(const std::string & name);
protected:
    FloatFieldFormat(const ::default_init_tag&);


public:
    
    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
    void* valueFromString(const std::string & value);
    const std::string & valueToString(void* value);

private:
    ::java::lang::Class* getClass0();
};
