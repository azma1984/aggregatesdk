#ifndef FileUtilsH
#define FileUtilsH



class FileUtils
    
{

public:
	static bool deleteDirectory(::java::io::File* dir);
    static const std::string readTextFile(const std::string & filename) /* throws(IOException) */;
    static const std::string readTextFile(const std::string & filename, ::java::nio::charset::Charset* encoding) /* throws(IOException) */;
    static void writeTextFile(const std::string & filename, const std::string & contents, bool append) /* throws(IOException) */;
    static ::unsigned charArray* readFile(::java::io::File* file) /* throws(IOException) */;
    static void writeFile(::java::io::File* file, ::unsigned charArray* data) /* throws(IOException) */;
    static void copyFile(::java::io::File* source, ::java::io::File* destination) /* throws(IOException) */;
    static const std::string getExtension(::java::io::File* f);
    static const std::string getExtension(const std::string & fileName);
    static long  makeChecksumAdler32(::java::io::File* f) /* throws(FileNotFoundException) */;
    static long  makeChecksumAdler32(std::iostream* in);

private:
    static long  makeChecksumAdler32(::java::util::zip::CheckedInputStream* cis);



public:
    FileUtils();
protected:
    FileUtils(const ::default_init_tag&);


};

#endif
