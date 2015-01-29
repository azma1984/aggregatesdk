// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataFieldFormat.java
//#include "datatable/field/DataFieldFormat.h"

#include "data/Data.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableUtils.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/field/DataTableFieldFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "util/StringUtils.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Arrays.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"
#include <Array.h"
#include <ObjectArray.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

Datefield::DataFieldFormat::DataFieldFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Datefield::DataFieldFormat::DataFieldFormat(const std::string & name) 
    : DataFieldFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

const int Datefield::DataFieldFormat::TRANSCODER_VERSION;

std::string& Datefield::DataFieldFormat::EDITOR_TEXT()
{
    
    return EDITOR_TEXT_;
}
std::string Datefield::DataFieldFormat::EDITOR_TEXT_;

std::string& Datefield::DataFieldFormat::EDITOR_IMAGE()
{
    
    return EDITOR_IMAGE_;
}
std::string Datefield::DataFieldFormat::EDITOR_IMAGE_;

std::string& Datefield::DataFieldFormat::EDITOR_SOUND()
{
    
    return EDITOR_SOUND_;
}
std::string Datefield::DataFieldFormat::EDITOR_SOUND_;

std::string& Datefield::DataFieldFormat::EDITOR_HEX()
{
    
    return EDITOR_HEX_;
}
std::string Datefield::DataFieldFormat::EDITOR_HEX_;

std::string& Datefield::DataFieldFormat::EDITOR_REPORT()
{
    
    return EDITOR_REPORT_;
}
std::string Datefield::DataFieldFormat::EDITOR_REPORT_;

const char16_t Datefield::DataFieldFormat::SEPARATOR;

std::string& Datefield::DataFieldFormat::EXTENSIONS_DESCR_FIELD()
{
    
    return EXTENSIONS_DESCR_FIELD_;
}
std::string Datefield::DataFieldFormat::EXTENSIONS_DESCR_FIELD_;

std::string& Datefield::DataFieldFormat::MODE_FIELD()
{
    
    return MODE_FIELD_;
}
std::string Datefield::DataFieldFormat::MODE_FIELD_;

std::string& Datefield::DataFieldFormat::EXTENSIONS_FIELD()
{
    
    return EXTENSIONS_FIELD_;
}
std::string Datefield::DataFieldFormat::EXTENSIONS_FIELD_;

std::string& Datefield::DataFieldFormat::EXTENSION_FIELD()
{
    
    return EXTENSION_FIELD_;
}
std::string Datefield::DataFieldFormat::EXTENSION_FIELD_;

std::string& Datefield::DataFieldFormat::FOLDER_FIELD()
{
    
    return FOLDER_FIELD_;
}
std::string Datefield::DataFieldFormat::FOLDER_FIELD_;

DateTableFormat*& Datefield::DataFieldFormat::EXTENSIONS_FORMAT()
{
    
    return EXTENSIONS_FORMAT_;
}
DateTableFormat* Datefield::DataFieldFormat::EXTENSIONS_FORMAT_;

DateTableFormat*& Datefield::DataFieldFormat::DATA_EDITOR_OPTIONS_FORMAT()
{
    
    return DATA_EDITOR_OPTIONS_FORMAT_;
}
DateTableFormat* Datefield::DataFieldFormat::DATA_EDITOR_OPTIONS_FORMAT_;

void Datefield::DataFieldFormat::ctor(const std::string & name)
{
    super::ctor(name);
    setTransferEncode(true);
}

char16_t Datefield::DataFieldFormat::getType()
{
    return FieldFormat::DATA_FIELD;
}

java::lang::Class* Datefield::DataFieldFormat::getFieldClass()
{
    return Data::class_();
}

java::lang::Class* Datefield::DataFieldFormat::getFieldWrappedClass()
{
    return Data::class_();
}

Data* Datefield::DataFieldFormat::getNotNullDefault()
{
    return new Data();
}

Data* Datefield::DataFieldFormat::valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate)
{
    try {
        auto data = new Data();
        auto parts = ::com::tibbo::aggregate::common::util::StringUtils::split(value, SEPARATOR, 5);
        if(!java_cast< const std::string & >(parts)->get(1)))->equals(DataTableUtils::DATA_TABLE_NULL()))) {
            data)->setId(::java::lang::Long::valueOf(java_cast< const std::string & >(parts)->get(1))));
        }
        if(!java_cast< const std::string & >(parts)->get(2)))->equals(DataTableUtils::DATA_TABLE_NULL()))) {
            data)->setName(java_cast< const std::string & >(parts)->get(2)));
        }
        int previewLen = (java_cast< const std::string & >(parts)->get(3)))))->intValue();
        if(previewLen != -int(1)) {
            data)->setPreview(java_cast< const std::string & >(parts)->get(5)))->substring(0, previewLen))->getBytes(::com::tibbo::aggregate::common::util::StringUtils::ASCII_CHARSET()));
        }
        int dataLen = (java_cast< const std::string & >(parts)->get(4)))))->intValue();
        if(dataLen != -int(1)) {
            data)->setData(java_cast< const std::string & >(parts)->get(5)))->substring(previewLen <= 0 ? int(0) : previewLen))->getBytes(::com::tibbo::aggregate::common::util::StringUtils::ASCII_CHARSET()));
        }
        return data;
    } catch (::java::lang::Exception* ex) {
        std::cout <<"Invalid data block: "_j)->append(ex)->getMessage())->toString(), ex);
    }
}

std::string Datefield::DataFieldFormat::valueToString(Data* value, encoding::ClassicEncodingSettings* settings)
{
    if(value == 0) {
        return 0;
    }
    auto buf = new std::stringBuilder();
    buf)->append(std::string::valueOf(TRANSCODER_VERSION));
    buf)->append(SEPARATOR);
    buf)->append(value)->getId() != 0 ? std::string::valueOf(value)->getId())) : DataTableUtils::DATA_TABLE_NULL());
    buf)->append(SEPARATOR);
    buf)->append(value)->getName() != 0 ? value)->getName() : DataTableUtils::DATA_TABLE_NULL());
    buf)->append(SEPARATOR);
    auto previewStr = value)->getPreview() != 0 ? new std::string(value)->getPreview(), ::com::tibbo::aggregate::common::util::StringUtils::ASCII_CHARSET()) : u""_j;
    buf)->append(value)->getPreview() != 0 ? std::string::valueOf(previewStr)->length()) : std::string::valueOf(-int(1)));
    buf)->append(SEPARATOR);
    auto dataStr = value)->getData() != 0 ? new std::string(value)->getData(), ::com::tibbo::aggregate::common::util::StringUtils::ASCII_CHARSET()) : u""_j;
    buf)->append(value)->getData() != 0 ? std::string::valueOf(dataStr)->length()) : std::string::valueOf(-int(1)));
    buf)->append(SEPARATOR);
    if(value)->getPreview() != 0) {
        buf)->append(previewStr);
    }
    if(value)->getData() != 0) {
        buf)->append(dataStr);
    }
    return buf)->toString();
}

std::string Datefield::DataFieldFormat::valueToString(void* value, encoding::ClassicEncodingSettings* settings)
{ 
    return valueToString(dynamic_cast< Data* >(value), settings);
}

std::list  Datefield::DataFieldFormat::getSuitableEditors()
{
    return ::java::util::Arrays::asList(new voidArray({EDITOR_LIST()), EDITOR_TEXT_), EDITOR_IMAGE_), EDITOR_SOUND_), EDITOR_HEX_), EDITOR_REPORT_)}));
}

std::string Datefield::DataFieldFormat::encodeTextEditorOptions(const std::string & mode)
{
    
    return encodeTextEditorOptions(mode, 0, 0, 0);
}

std::string Datefield::DataFieldFormat::encodeTextEditorOptions(const std::string & extensionsDescription, const std::string & folder, std::list  extensions)
{
    
    return encodeTextEditorOptions(0, extensionsDescription, folder, extensions);
}

std::string Datefield::DataFieldFormat::encodeTextEditorOptions(const std::string & mode, const std::string & extensionsDescription, const std::string & folder, std::list  extensions)
{
    
    DataTable* esdt;
    if(extensions != 0) {
        esdt = new DataTable(EXTENSIONS_FORMAT_);
        for (auto _i = extensions)->iterator(); _i->hasNext(); ) {
            const std::string & ext = java_cast< const std::string & >(_i->next());
            {
                auto dr = esdt)->addRecord();
                dr)->setValue(EXTENSION_FIELD_, ext));
            }
        }
    }
    auto eodt = new DataTable(DATA_EDITOR_OPTIONS_FORMAT_);
    auto dr = eodt)->addRecord();
    dr)->setValue(MODE_FIELD_, mode));
    dr)->setValue(FOLDER_FIELD_, folder));
    dr)->setValue(EXTENSIONS_DESCR_FIELD_, extensionsDescription));
    dr)->setValue(EXTENSIONS_FIELD_, esdt));
    return eodt)->encode();
}



java::lang::Class* Datefield::DataFieldFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DataFieldFormat", 58);
    return c;
}

void Datefield::DataFieldFormat::clinit()
{
struct string_init_ {
    string_init_() {
    EDITOR_TEXT_ = u"dtext"_j;
    EDITOR_IMAGE_ = u"image"_j;
    EDITOR_SOUND_ = u"sound"_j;
    EDITOR_HEX_ = u"hex"_j;
    EDITOR_REPORT_ = u"report"_j;
    EXTENSIONS_DESCR_FIELD_ = u"extensionsDescr"_j;
    MODE_FIELD_ = u"mode"_j;
    EXTENSIONS_FIELD_ = u"extensions"_j;
    EXTENSION_FIELD_ = u"extension"_j;
    FOLDER_FIELD_ = u"folder"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EXTENSIONS_FORMAT_ = new TableFormat();
        DATA_EDITOR_OPTIONS_FORMAT_ = new TableFormat(int(1), int(1));
        {
            auto modeF = FieldFormat::create(MODE_FIELD_, StringFieldFormat::STRING_FIELD);
            modeF)->setNullable(true);
            auto edF = FieldFormat::create(EXTENSIONS_DESCR_FIELD_, StringFieldFormat::STRING_FIELD);
            edF)->setNullable(true);
            auto extF = FieldFormat::create(EXTENSION_FIELD_, StringFieldFormat::STRING_FIELD);
            EXTENSIONS_FORMAT_)->addField(extF);
            auto dt = new DataTable(EXTENSIONS_FORMAT_);
            auto extsF = FieldFormat::create(EXTENSIONS_FIELD_, DataTableFieldFormat::DATATABLE_FIELD);
            extsF)->setDefault(dt);
            extsF)->setNullable(true);
            auto folderF = FieldFormat::create(FOLDER_FIELD_, DataTableFieldFormat::STRING_FIELD);
            folderF)->setNullable(true);
            DATA_EDITOR_OPTIONS_FORMAT_)->addField(modeF);
            DATA_EDITOR_OPTIONS_FORMAT_)->addField(edF);
            DATA_EDITOR_OPTIONS_FORMAT_)->addField(static_cast< FieldFormat* >(extsF));
            DATA_EDITOR_OPTIONS_FORMAT_)->addField(folderF);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void* Datefield::DataFieldFormat::valueFromString(const std::string & value)
{
    return super::valueFromString(value);
}

std::string Datefield::DataFieldFormat::valueToString(void* value)
{
    return super::valueToString(value);
}

java::lang::Class* Datefield::DataFieldFormat::getClass0()
{
    return class_();
}

