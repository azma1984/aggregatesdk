// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/ExpressionEditorOptionsFunction.java
#include <com/tibbo/aggregate/common/expression/function/ExpressionEditorOptionsFunction.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/context/Contexts.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/server/UtilitiesContextConstants.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
#include <ObjectArray.h"

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

com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::ExpressionEditorOptionsFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::ExpressionEditorOptionsFunction() 
    : ExpressionEditorOptionsFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::ctor()
{
    super::ctor(Functions::GROUP_SYSTEM(), 0, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, true, parameters);
    auto caller = evaluator)->getDefaultResolver())->getCallerController();
    auto contextManager = evaluator)->getDefaultResolver())->getContextManager();
    auto defaultContextMask = (*parameters)[int(0)] != 0 ? (*parameters)[int(0)])->toString() : static_cast< const std::string & >(0);
    ::com::tibbo::aggregate::common::context::Context* defaultContext;
    std::list  contexts = new ::java::util::LinkedList();
    if(defaultContextMask != 0 && contextManager != 0) {
        contexts = ::com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(defaultContextMask, contextManager, caller);
    }
    if(contexts)->size() == 1) {
        defaultContext = java_cast< ::com::tibbo::aggregate::common::context::Context* >(contexts)->get(0));
    }
    std::map references = new ::java::util::LinkedHashMap();
    auto entity = (parameters)->length >= 3 && (*parameters)[int(1)] != 0) ? (*parameters)[int(1)])->toString() : static_cast< const std::string & >(0);
    auto entityType = (parameters)->length >= 3 && (*parameters)[int(2)] != 0) ? (*parameters)[int(2)])->toString()) : static_cast< int  >(0);
    DataTable* defaultTable;
    DataTable* additionalReferences;
    if(parameters)->length >= 4 && (*parameters)[int(3)] != 0 && dynamic_cast< DataTable* >((*parameters)[int(3)]) != 0) {
        additionalReferences = java_cast< DataTable* >((*parameters)[int(3)]);
    }
    if(additionalReferences != 0) {
        for (auto _i = additionalReferences)->iterator(); _i->hasNext(); ) {
            DataRecord* rec = java_cast< DataRecord* >(_i->next());
            {
                references)->put(new ::com::tibbo::aggregate::common::expression::Reference(rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE())), rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION()));
            }
        }
    }
    try {
        if(entity != 0 && entityType != 0 && contextManager != 0) {
            auto const utilitiesContext = java_cast< ::com::tibbo::aggregate::common::context::Context* >(contextManager)->get(::com::tibbo::aggregate::common::context::Contexts::CTX_UTILITIES(), caller));
            switch ((entityType))->intValue()) {
            case ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE:
                for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
                    ::com::tibbo::aggregate::common::context::Context* cur = java_cast< ::com::tibbo::aggregate::common::context::Context* >(_i->next());
                    {
                        if(cur)->getVariableDefinition(entity, caller) != 0) {
                            defaultContext = cur;
                            defaultTable = defaultContext)->getVariable(entity, caller);
                        }
                    }
                }
                if(defaultContextMask != 0 && utilitiesContext != 0) {
                    auto refs = utilitiesContext)->callFunction(::com::tibbo::aggregate::common::server::UtilitiesContextConstants::F_VARIABLE_FIELDS(), caller, new voidArray({defaultContextMask), entity)}));
                    for (auto _i = refs)->iterator(); _i->hasNext(); ) {
                        DataRecord* rec = java_cast< DataRecord* >(_i->next());
                        {
                            references)->put(new ::com::tibbo::aggregate::common::expression::Reference(rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE())), rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION()));
                        }
                    }
                }
                break;
            case ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION:
                for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
                    ::com::tibbo::aggregate::common::context::Context* cur = java_cast< ::com::tibbo::aggregate::common::context::Context* >(_i->next());
                    {
                        if(cur)->getFunctionDefinition(entity, caller) != 0) {
                            defaultContext = cur;
                            defaultTable = new DataTable(defaultContext)->getFunctionDefinition(entity))->getInputFormat(), true);
                        }
                    }
                }
                break;
            case ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_EVENT:
                for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
                    ::com::tibbo::aggregate::common::context::Context* cur = java_cast< ::com::tibbo::aggregate::common::context::Context* >(_i->next());
                    {
                        if(cur)->getEventDefinition(entity, caller) != 0) {
                            defaultContext = cur;
                            defaultTable = new DataTable(defaultContext)->getEventDefinition(entity))->getFormat(), true);
                        }
                    }
                }
                if(defaultContextMask != 0 && utilitiesContext != 0) {
                    auto refs = utilitiesContext)->callFunction(::com::tibbo::aggregate::common::server::UtilitiesContextConstants::F_EVENT_FIELDS(), caller, new voidArray({defaultContextMask), entity)}));
                    for (auto _i = refs)->iterator(); _i->hasNext(); ) {
                        DataRecord* rec = java_cast< DataRecord* >(_i->next());
                        {
                            references)->put(new ::com::tibbo::aggregate::common::expression::Reference(rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_REFERENCE())), rec)->getString(field::StringFieldFormat::FIELD_ADDITIONAL_REFERENCES_DESCRIPTION()));
                        }
                    }
                }
                break;
            default:
                std::cout <<"Unknown entity type: "_j)->append(entityType))->toString());
            }

        }
    } catch (::com::tibbo::aggregate::common::context::ContextException* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return field::StringFieldFormat::encodeExpressionEditorOptions(defaultContext, defaultTable, references);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.ExpressionEditorOptionsFunction", 78);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::ExpressionEditorOptionsFunction::getClass0()
{
    return class_();
}

