// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/StringUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/awt/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/charset/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::StringUtils
    
{

public:
    typedef void super;

private:
    static ::java::nio::charset::Charset* UTF8_CHARSET_;
    static ::java::nio::charset::Charset* ASCII_CHARSET_;
    static const std::string DEFAULT_COLLECTION_PRINT_SEPARATOR_;
    static const std::string DEFAULT_MAP_KEY_VALUE_SEPARATOR_;

public:
    static const std::string truncate(std::string* str, int maxLength);
    static const std::string truncate(std::string* str, int maxLength, std::string* suffix);
    static const std::string byteToHexString(int i);
    static const std::string colorToString(::java::awt::Color* color);
    static ElementList* elements(std::string* source, bool useVisibleSeparators);
    static const std::string escapeHtml(std::string* text);
    static const std::string print(::java::util::Collection* col);
    static const std::string print(::java::util::Collection* col, std::string* separator);
    static const std::string print(::java::util::Collection* col, std::string* separator, bool skipNullElements);
    static const std::string print(::java::util::Collection* col, std::string* separator, std::string* escaper, bool skipNullElements);
    static const std::string print(std::map map);
    static const std::string print(std::map map, std::string* separator, std::string* keyValueSeparator, bool skipNullKeys);
    static const std::string print(voidArray* array);
    static const std::string print(voidArray* array, std::string* separator);
    static const std::string remoteNonDigits(std::string* src);
    static const std::string removeSuffix(std::string* src, std::string* suffix);
    static std::list  split(std::string* str, char16_t ch);
    static std::list  split(std::string* str, char16_t ch, int limit);
    static const std::string streamToString(std::iostream* is) /* throws(IOException) */;
    static std::list  wrapText(std::string* text, int len);
    static const std::string wrapText(std::string* text, int len, std::string* separator);
    static void appendLine(std::stringBuilder* sb, std::string* s);
    static const std::string makeName(std::string* source, int maxLength);
    static bool isPureAscii(std::string* v);
    static bool isEmpty(std::string* text);

    // Generated
    StringUtils();
protected:
    StringUtils(const ::default_init_tag&);


public:
    
    static void 
    static ::java::nio::charset::Charset*& UTF8_CHARSET();
    static ::java::nio::charset::Charset*& ASCII_CHARSET();
    static const std::string& DEFAULT_COLLECTION_PRINT_SEPARATOR();
    static const std::string& DEFAULT_MAP_KEY_VALUE_SEPARATOR();

private:
    ::java::lang::Class* getClass0();
};
