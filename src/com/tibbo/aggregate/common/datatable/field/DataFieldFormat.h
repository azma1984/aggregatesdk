// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/data/Data.h"



class com::tibbo::aggregate::common::datatable::field::DataFieldFormat
    : public ::com::tibbo::aggregate::common::datatable::FieldFormat
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::FieldFormat super;
    static const int TRANSCODER_VERSION) };

private:
    static const std::string EDITOR_TEXT_;
    static const std::string EDITOR_IMAGE_;
    static const std::string EDITOR_SOUND_;
    static const std::string EDITOR_HEX_;
    static const std::string EDITOR_REPORT_;
    static const char16_t SEPARATOR { u'/' };
    static const std::string EXTENSIONS_DESCR_FIELD_;
    static const std::string MODE_FIELD_;
    static const std::string EXTENSIONS_FIELD_;
    static const std::string EXTENSION_FIELD_;
    static const std::string FOLDER_FIELD_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* EXTENSIONS_FORMAT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* DATA_EDITOR_OPTIONS_FORMAT_;
protected:
    void ctor(std::string* name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::com::tibbo::aggregate::common::data::Data* getNotNullDefault();
    ::com::tibbo::aggregate::common::data::Data* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(::com::tibbo::aggregate::common::data::Data* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public: /* protected */
    std::list  getSuitableEditors();

public:
    static const std::string encodeTextEditorOptions(std::string* mode);
    static const std::string encodeTextEditorOptions(std::string* extensionsDescription, std::string* folder, std::list  extensions);
    static const std::string encodeTextEditorOptions(std::string* mode, std::string* extensionsDescription, std::string* folder, std::list  extensions);

    // Generated
    DataFieldFormat(std::string* name);
protected:
    DataFieldFormat(const ::default_init_tag&);


public:
    
    static void 
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);
    static const std::string& EDITOR_TEXT();
    static const std::string& EDITOR_IMAGE();
    static const std::string& EDITOR_SOUND();
    static const std::string& EDITOR_HEX();
    static const std::string& EDITOR_REPORT();
    static const std::string& EXTENSIONS_DESCR_FIELD();
    static const std::string& MODE_FIELD();
    static const std::string& EXTENSIONS_FIELD();
    static const std::string& EXTENSION_FIELD();
    static const std::string& FOLDER_FIELD();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& EXTENSIONS_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& DATA_EDITOR_OPTIONS_FORMAT();

private:
    ::java::lang::Class* getClass0();
};
