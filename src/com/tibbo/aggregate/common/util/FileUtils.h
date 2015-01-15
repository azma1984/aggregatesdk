// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/FileUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/nio/charset/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/zip/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::util::FileUtils
    
{

public:
    typedef void super;
    static bool deleteDirectory(::java::io::File* dir);
    static const std::string readTextFile(const std::string & filename) /* throws(IOException) */;
    static const std::string readTextFile(const std::string & filename, ::java::nio::charset::Charset* encoding) /* throws(IOException) */;
    static void writeTextFile(const std::string & filename, const std::string & contents, bool append) /* throws(IOException) */;
    static ::int8_tArray* readFile(::java::io::File* file) /* throws(IOException) */;
    static void writeFile(::java::io::File* file, ::int8_tArray* data) /* throws(IOException) */;
    static void copyFile(::java::io::File* source, ::java::io::File* destination) /* throws(IOException) */;
    static const std::string getExtension(::java::io::File* f);
    static const std::string getExtension(const std::string & fileName);
    static ::java::lang::Long* makeChecksumAdler32(::java::io::File* f) /* throws(FileNotFoundException) */;
    static ::java::lang::Long* makeChecksumAdler32(std::iostream* in);

private:
    static ::java::lang::Long* makeChecksumAdler32(::java::util::zip::CheckedInputStream* cis);

    // Generated

public:
    FileUtils();
protected:
    FileUtils(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
