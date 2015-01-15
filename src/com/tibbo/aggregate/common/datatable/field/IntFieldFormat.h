// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/IntFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/lang/Integer.h"



class com::tibbo::aggregate::common::datatable::field::IntFieldFormat
    : public FieldFormat
{

public:
    typedef FieldFormat super;

private:
    static const std::string EDITOR_SPINNER_;
    static const std::string EDITOR_EVENT_LEVEL_;
protected:
    void ctor(const std::string & name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    int  getNotNullDefault();

public: /* protected */
    void* convertValue(void* value) /* throws(ValidationException) */;

public:
    int  valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
    const std::string & valueToString(int  value, encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    IntFieldFormat(const std::string & name);
protected:
    IntFieldFormat(const ::default_init_tag&);


public:
    
    static void 
    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
    void* valueFromString(const std::string & value);
    const std::string & valueToString(void* value);
    static const std::string& EDITOR_SPINNER();
    static const std::string& EDITOR_EVENT_LEVEL();

private:
    ::java::lang::Class* getClass0();
};
