// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/ClassPathHelper.java

#pragma once

#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::ClassPathHelper
    
{

public:
    typedef void super;

private:
    static const std::string JAVA_LIBRARY_PATH_PROPERTY_;
    static const std::string JAR_FILE_EXTENSION_;
    static const std::string PROTOCOL_FILE_;

public:
    static void loadJars(::java::io::File* directory) /* throws(IOException, IllegalArgumentException, IllegalAccessException, InvocationTargetException, SecurityException, NoSuchMethodException) */;
    static std::list  listJars(::java::io::File* directory);
    static void addToClassPath(std::string* path) /* throws(MalformedURLException, IllegalArgumentException, IllegalAccessException, InvocationTargetException, SecurityException, NoSuchMethodException) */;
    static void addToLibraryPath(std::string* path) /* throws(IllegalArgumentException, IllegalAccessException) */;

    // Generated
    ClassPathHelper();
protected:
    ClassPathHelper(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& JAVA_LIBRARY_PATH_PROPERTY();
    static const std::string& JAR_FILE_EXTENSION();
    static const std::string& PROTOCOL_FILE();
    ::java::lang::Class* getClass0();
};
