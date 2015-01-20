// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/ColorFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/awt/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
//#include <java/awt/Color.h"



class Datefield::ColorFieldFormat
    : public FieldFormat
{

public:
    typedef FieldFormat super;

private:
    static const std::string EDITOR_BOX_;
protected:
    void ctor(const std::string & name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::java::awt::Color* getNotNullDefault();
    ::java::awt::Color* valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
    const std::string & valueToString(::java::awt::Color* value, encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

    // Generated

public:
    ColorFieldFormat(const std::string & name);
protected:
    ColorFieldFormat(const ::default_init_tag&);


public:
    
    static void 
    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
    void* valueFromString(const std::string & value);
    const std::string & valueToString(void* value);
    static const std::string& EDITOR_BOX();

private:
    ::java::lang::Class* getClass0();
};
