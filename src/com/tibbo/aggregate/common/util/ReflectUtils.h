
#ifndef ReflectUtilsH
#define ReflectUtilsH
 #include "util/pointers.h"



class ReflectUtils
{

public:

	static AgObjectPtr getPrivateField(AgObjectPtr obj, const std::string & fieldName);
    static AgObjectPtr getPrivateField(AgObjectPtr obj, const std::string & fieldName, AgClassPtr c) /* throws(NoSuchFieldException, IllegalAccessException) */;
    static void setPrivateField(AgObjectPtr obj, const std::string & fieldName, AgObjectPtr value);
    static void setPrivateField(AgObjectPtr obj, const std::string & fieldName, AgObjectPtr value, AgClassPtr c) /* throws(NoSuchFieldException, IllegalAccessException) */;
    static /* <F, T> */void copyProperties(AgObjectPtr from, AgClassPtr stopFromClass, AgObjectPtr to, AgClassPtr stopToClass);

	ReflectUtils();

};
#endif
