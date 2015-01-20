// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/JavaMethodFunction.java
#include <com/tibbo/aggregate/common/expression/function/JavaMethodFunction.h"

#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Cloneable.h"
//#include <java/lang/Double.h"
//#include <java/lang/Exception.h"
//#include <java/lang/Float.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Long.h"
//#include <java/lang/NoSuchMethodException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/System.h"
//#include <java/lang/Throwable.h"
//#include <java/lang/reflect/AccessibleObject.h"
//#include <java/lang/reflect/AnnotatedElement.h"
//#include <java/lang/reflect/Executable.h"
//#include <java/lang/reflect/GenericDeclaration.h"
//#include <java/lang/reflect/InvocationTargetException.h"
//#include <java/lang/reflect/Member.h"
//#include <java/lang/reflect/Method.h"
//#include <java/lang/reflect/Type.h"
#include <SubArray.h"
#include <ObjectArray.h"

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

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AccessibleObject, voidArray, AnnotatedElementArray > AccessibleObjectArray;
typedef ::SubArray< ::java::lang::reflect::Member, voidArray > MemberArray;
typedef ::SubArray< ::java::lang::reflect::Executable, AccessibleObjectArray, MemberArray, GenericDeclarationArray > ExecutableArray;
typedef ::SubArray< ::java::lang::reflect::Method, ExecutableArray > MethodArray;
        } // reflect
typedef ::SubArray< ::java::lang::ClassArray, CloneableArray, ::java::io::SerializableArray > ClassArrayArray;
    } // lang
} // java

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

function::JavaMethodFunction::JavaMethodFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::JavaMethodFunction::JavaMethodFunction(const std::string & clazz, const std::string & method, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue) 
    : JavaMethodFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(clazz,method,category,parametersFootprint,returnValue);
}

function::JavaMethodFunction::JavaMethodFunction(const std::string & clazz, const std::string & method, bool statical, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue) 
    : JavaMethodFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(clazz,method,statical,category,parametersFootprint,returnValue);
}

java::lang::ClassArrayArray*& function::JavaMethodFunction::CONVERSIONS()
{
    
    return CONVERSIONS_;
}
java::lang::ClassArrayArray* function::JavaMethodFunction::CONVERSIONS_;

void function::JavaMethodFunction::ctor(const std::string & clazz, const std::string & method, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue)
{
    ctor(clazz, method, true, category, parametersFootprint, returnValue);
}

void function::JavaMethodFunction::ctor(const std::string & clazz, const std::string & method, bool statical, const std::string & category, const std::string & parametersFootprint, const std::string & returnValue)
{
    super::ctor(category, parametersFootprint, returnValue);
    this->clazz = clazz;
    this->method = method;
    this->statical = statical;
}

void* function::JavaMethodFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    try {
        auto cls = ::java::lang::Class::forName(clazz);
        void* instance;
        if(!statical) {
            instance = (*parameters)[int(0)];
            auto np = new voidArray(parameters)->length - int(1));
            ::java::lang::System::arraycopy(parameters, 1, np, 0, parameters)->length - int(1));
            parameters = np;
        }
        for (auto i = int(0); i < parameters)->length; i++) {
            parameters->set(i, convertParameter(i, (*parameters)[i]));
        }
        auto types = new ::java::lang::ClassArray(parameters)->length);
        for (auto i = int(0); i < parameters)->length; i++) {
            types->set(i, (*parameters)[i] != 0 ? static_cast< ::java::lang::Class* >((*parameters)[i])->getClass()) : static_cast< ::java::lang::Class* >(0));
        }
        auto executor = findExecutorMethod(cls, types, 0);
        if(executor == 0) {
            for (auto i = int(0); i < cls)->getMethods())->length; i++) {
                auto cur = (*cls)->getMethods())[i];
                if(cur)->getName())->equals(method)) && cur)->getParameterTypes())->length == types)->length) {
                    executor = cur;
                    break;
                }
            }
        }
        if(executor == 0) {
            throw new EvaluationException(u"Incompatible arguments"_j);
        }
        castTypes(executor)->getParameterTypes(), parameters);
        if(instance == 0 && !statical) {
            throw new EvaluationException(u"Object cannot be null"_j);
        }
        return executor)->invoke(instance, parameters);
    } catch (::java::lang::reflect::InvocationTargetException* ex) {
        throw new EvaluationException(ex)->getTargetException())->getMessage(), ex)->getTargetException());
    } catch (::java::lang::Exception* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
}

java::lang::reflect::Method* function::JavaMethodFunction::findExecutorMethod(::java::lang::Class* cls, ::java::lang::ClassArray* types, int firstParameterToRotate)
{
    try {
        return cls)->getMethod(method, types);
    } catch (::java::lang::NoSuchMethodException* ex1) {
    }
    for (auto i = firstParameterToRotate; i < types)->length; i++) {
        auto original = (*types)[i];
        for (auto j = int(0); j < CONVERSIONS_)->length; j++) {
            auto conversions = (*CONVERSIONS_)[j];
            if(original == (*conversions)[int(0)]) {
                types->set(i, (*conversions)[int(1)]);
                try {
                    return cls)->getMethod(method, types);
                } catch (::java::lang::NoSuchMethodException* ex1) {
                }
                auto executor = findExecutorMethod(cls, types, firstParameterToRotate + int(1));
                if(executor != 0) {
                    return executor;
                }
            }
        }
        types->set(i, original);
    }
    return 0;
}

void function::JavaMethodFunction::castTypes(::java::lang::ClassArray* types, voidArray* parameters)
{
    for (auto i = int(0); i < types)->length; i++) {
        auto requiredType = (*types)[i];
        auto currentType = (*parameters)[i] != 0 ? static_cast< ::java::lang::Class* >((*parameters)[i])->getClass()) : static_cast< ::java::lang::Class* >(0);
        if(requiredType)->equals(currentType)) {
            continue;
        }
        if((*parameters)[i] == 0) {
            continue;
        }
        if(requiredType) == ::java::lang::Integer::class_()) || requiredType) == ::java::lang::Integer::TYPE())) {
            parameters->set(i, dynamic_cast< ::java::lang::Number* >((*parameters)[i]) != 0 ? (java_cast< ::java::lang::Number* >((*parameters)[i])))->intValue() : (new ::java::lang::Integer((*parameters)[i])->toString())))->intValue()));
        } else if(requiredType) == ::java::lang::Long::class_()) || requiredType) == ::java::lang::Long::TYPE())) {
            parameters->set(i, ::java::lang::Long::valueOf(dynamic_cast< ::java::lang::Number* >((*parameters)[i]) != 0 ? (java_cast< ::java::lang::Number* >((*parameters)[i])))->longValue() : (new ::java::lang::Long((*parameters)[i])->toString())))->longValue()));
        } else if(requiredType) == ::java::lang::Float::class_()) || requiredType) == ::java::lang::Float::TYPE())) {
            parameters->set(i, ::java::lang::Float::valueOf(dynamic_cast< ::java::lang::Number* >((*parameters)[i]) != 0 ? (java_cast< ::java::lang::Number* >((*parameters)[i])))->floatValue() : (new ::java::lang::Float((*parameters)[i])->toString())))->floatValue()));
        } else if(requiredType) == ::java::lang::Double::class_()) || requiredType) == ::java::lang::Double::TYPE())) {
            parameters->set(i, ::java::lang::Double::valueOf(dynamic_cast< ::java::lang::Number* >((*parameters)[i]) != 0 ? (java_cast< ::java::lang::Number* >((*parameters)[i])))->doubleValue() : (new ::java::lang::Double((*parameters)[i])->toString())))->doubleValue()));
        } else if(requiredType) == std::string::class_())) {
            parameters->set(i, (*parameters)[i])->toString());
        }
    }
}

void* function::JavaMethodFunction::convertParameter(int i, void* value)
{
    return value;
}



java::lang::Class* function::JavaMethodFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.JavaMethodFunction", 65);
    return c;
}

void function::JavaMethodFunction::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CONVERSIONS_ = new ::java::lang::ClassArrayArray({
            (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(::java::lang::Float::TYPE())
            , static_cast< ::java::lang::Class* >(::java::lang::Double::TYPE())
        }))
            , (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(::java::lang::Float::TYPE())
            , static_cast< ::java::lang::Class* >(::java::lang::Double::class_())
        }))
            , (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(::java::lang::Float::class_())
            , static_cast< ::java::lang::Class* >(::java::lang::Double::TYPE())
        }))
            , (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(::java::lang::Float::class_())
            , static_cast< ::java::lang::Class* >(::java::lang::Double::class_())
        }))
            , (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(std::string::class_())
            , static_cast< ::java::lang::Class* >(::java::lang::CharSequence::class_())
        }))
        });
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* function::JavaMethodFunction::getClass0()
{
    return class_();
}

