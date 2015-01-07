// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/Constants.java

#pragma once

#include <com/tibbo/aggregate/common/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java



class com::tibbo::aggregate::common::Constants
    
{

public:
    typedef void super;

private:
    static const std::string VERSION_;
    static const std::string DOCS_SUBDIR_;
    static const std::string SCRIPTS_SUBDIR_;
    static const std::string LIBRARIES_SUBDIR_;
    static const std::string JARS_SUBDIR_;
    static const std::string PLUGINS_SUBDIR_;
    static const std::string ROOT_FOLDER_PATH_PATTERN_;
    static const std::string DOCS_FILE_EXTENSION_;

public:
    static void main(std::stringArray* args);

    // Generated
    Constants();
protected:
    Constants(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& VERSION();
    static const std::string& DOCS_SUBDIR();
    static const std::string& SCRIPTS_SUBDIR();
    static const std::string& LIBRARIES_SUBDIR();
    static const std::string& JARS_SUBDIR();
    static const std::string& PLUGINS_SUBDIR();
    static const std::string& ROOT_FOLDER_PATH_PATTERN();
    static const std::string& DOCS_FILE_EXTENSION();

private:
    ::java::lang::Class* getClass0();
};
