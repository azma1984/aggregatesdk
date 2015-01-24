#pragma once

#include "expression/function/AbstractFunction.h"


class JavaMethodFunction : public AbstractFunction
{

public:
    typedef AbstractFunction super;

private:
//    static ::java::lang::ClassArrayArray* CONVERSIONS_;
    const std::string clazz;
    const std::string method;
    bool statical;

public:
    virtual void*/*Object*/ execute(boost::shared_ptr<Evaluator> evaluator, boost::shared_ptr<EvaluationEnvironment> environment,
                            std::vector<void*> parameters) = 0/* throws(EvaluationException) */;

private:
    ::java::lang::reflect::Method* findExecutorMethod(::java::lang::Class* cls, ::java::lang::ClassArray* types, int firstParameterToRotate);
    void castTypes(::java::lang::ClassArray* types, voidArray* parameters);

public: /* protected */
    void* convertParameter(int i, void* value);

    // Generated

public:
    JavaMethodFunction(const std::string & clazz, const std::string & method, const std::string & category,
                       const std::string & parametersFootprint, const std::string & returnValue);
    JavaMethodFunction(const std::string & clazz, const std::string & method, bool statical,
                       const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);
};
