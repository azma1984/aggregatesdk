// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/JavaMethodFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/reflect/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, voidArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, voidArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, voidArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ClassArray, CloneableArray, ::java::io::SerializableArray > ClassArrayArray;
    } // lang
} // java



class function::JavaMethodFunction
    : public AbstractFunction
{

public:
    typedef AbstractFunction super;

private:
    static ::java::lang::ClassArrayArray* CONVERSIONS_;
    const std::string & clazz;
    const std::string & method;
    bool statical;
protected:
    void ctor(const std::string & clazz, const std::string & method, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);
    void ctor(const std::string & clazz, const std::string & method, bool statical, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

private:
    ::java::lang::reflect::Method* findExecutorMethod(::java::lang::Class* cls, ::java::lang::ClassArray* types, int firstParameterToRotate);
    void castTypes(::java::lang::ClassArray* types, voidArray* parameters);

public: /* protected */
    void* convertParameter(int i, void* value);

    // Generated

public:
    JavaMethodFunction(const std::string & clazz, const std::string & method, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);
    JavaMethodFunction(const std::string & clazz, const std::string & method, bool statical, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);
protected:
    JavaMethodFunction(const ::default_init_tag&);


public:
    
    static void 

private:
    static ::java::lang::ClassArrayArray*& CONVERSIONS();
    ::java::lang::Class* getClass0();
};
