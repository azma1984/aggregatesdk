// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/DefaultReferenceResolver.java
//#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConstruction.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/resource/ResourceManager.h"
/*
//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collections.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"
#include <javax/swing/ImageIcon.h"
#include <ObjectArray.h"
*/
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

com::tibbo::aggregate::common::expression::DefaultReferenceResolver::DefaultReferenceResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::DefaultReferenceResolver::DefaultReferenceResolver() 
    : DefaultReferenceResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::expression::DefaultReferenceResolver::DefaultReferenceResolver(DataTable* defaultTable) 
    : DefaultReferenceResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor(defaultTable);
}

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ROW()
{
    
    return ROW_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ROW_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::DESCRIPTION()
{
    
    return DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::DESCRIPTION_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::NAME()
{
    
    return NAME_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::NAME_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ICON()
{
    
    return ICON_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ICON_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::TYPE()
{
    
    return TYPE_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::TYPE_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::READABLE()
{
    
    return READABLE_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::READABLE_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::WRITABLE()
{
    
    return WRITABLE_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::WRITABLE_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::RECORDS()
{
    
    return RECORDS_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::RECORDS_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::FORMAT()
{
    
    return FORMAT_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::FORMAT_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::HELP()
{
    
    return HELP_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::HELP_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::OPTIONS()
{
    
    return OPTIONS_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::OPTIONS_;

std::string& com::tibbo::aggregate::common::expression::DefaultReferenceResolver::SELECTION_VALUE_DESCRIPTION()
{
    
    return SELECTION_VALUE_DESCRIPTION_;
}
std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::SELECTION_VALUE_DESCRIPTION_;

void com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::expression::DefaultReferenceResolver::ctor(DataTable* defaultTable)
{
    ctor();
    setDefaultTable(defaultTable);
}

void* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::resolveReference(Reference* ref, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException, ContextException) */
{
    if(ref)->getProperty() != 0 && ROW_)->equals(ref)->getProperty()))) {
        return getDefaultRow();
    }
    auto con = getContext(ref);
    auto table = getDefaultTable();
    auto field = ref)->getField();
    if(ref)->getEntity() != 0) {
        if(con != 0) {
            if(field == 0) {
                if(DESCRIPTION_)->equals(ref)->getProperty()))) {
                    return resolveEntityDescription(ref, con);
                }
                if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE) {
                    auto vd = con)->getVariableDefinition(ref)->getEntity());
                    if(vd == 0) {
                        throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }
                    if(READABLE_)->equals(ref)->getProperty()))) {
                        return ::java::lang::Boolean::valueOf(vd)->isReadable());
                    }
                    if(WRITABLE_)->equals(ref)->getProperty()))) {
                        return ::java::lang::Boolean::valueOf(vd)->isWritable());
                    }
                    if(ICON_)->equals(ref)->getProperty()))) {
                        return ::com::tibbo::aggregate::common::resource::ResourceManager::getImageIcon(vd)->getIconId());
                    }
                }
            } else {
                TableFormat* rf;
                if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE) {
                    auto vd = con)->getVariableDefinition(ref)->getEntity());
                    if(vd == 0) {
                        throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }
                    rf = vd)->getFormat();
                } else if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION) {
                    auto fd = con)->getFunctionDefinition(ref)->getEntity());
                    if(fd == 0) {
                        throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }
                    rf = fd)->getOutputFormat();
                } else {
                    throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
                }
                FieldFormat* ff;
                if(rf != 0) {
                    ff = rf)->getField(ref)->getField());
                }
                if(ff != 0) {
                    if(FORMAT_)->equals(ref)->getProperty()))) {
                        return ff;
                    }
                    if(DESCRIPTION_)->equals(ref)->getProperty()))) {
                        return ff)->getDescription();
                    }
                    if(HELP_)->equals(ref)->getProperty()))) {
                        return ff)->getHelp();
                    }
                }
            }
            table = resolveEntity(ref, con, environment);
        } else {
            throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprDefConNotDefined"_j), new voidArray({ref)->getEntity())})));
        }
    } else {
        if(con != 0) {
            if(ref)->getProperty() != 0) {
                if(NAME_)->equals(ref)->getProperty()))) {
                    return con)->getName();
                }
                if(DESCRIPTION_)->equals(ref)->getProperty()))) {
                    return con)->getDescription();
                }
                if(ICON_)->equals(ref)->getProperty()))) {
                    return ::com::tibbo::aggregate::common::resource::ResourceManager::getImageIcon(con)->getIconId());
                }
                if(TYPE_)->equals(ref)->getProperty()))) {
                    return con)->getType();
                }
            }
            if(ref)->getContext() != 0) {
                return con)->getPath();
            }
        }
    }
    if(table == 0) {
        throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprDefDataTableNotDefined"_j), new voidArray({field)})));
    }
    if(field == 0 && ref)->getProperty() != 0 && RECORDS_)->equals(ref)->getProperty()))) {
        return table)->getRecordCount());
    }
    if(field == 0) {
        return getDefaultTableAggregate(table);
    }
    auto ff = table)->getFormat())->getField(ref)->getField());
    if(ref)->getProperty() != 0) {
        if(FORMAT_)->equals(ref)->getProperty()))) {
            return ff;
        }
        if(DESCRIPTION_)->equals(ref)->getProperty()))) {
            return ff)->getDescription();
        }
        if(HELP_)->equals(ref)->getProperty()))) {
            return ff)->getHelp();
        }
        if(OPTIONS_)->equals(ref)->getProperty()))) {
            return ff)->getSelectionValues();
        }
    }
    auto row = getRow(ref, environment);
    if(table)->getRecordCount() <= (row))->intValue()) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprNonExistentRow"_j), new voidArray({row), table)->getRecordCount()))})))->append(u": "_j)
            ->append(table)->dataAsString())->toString());
    }
    auto record = table)->getRecord((row))->intValue());
    auto value = record)->getValue(field);
    if(ref)->getProperty() != 0) {
        if(SELECTION_VALUE_DESCRIPTION_)->equals(ref)->getProperty())) && ff)->hasSelectionValues()) {
            auto const valueDesc = java_cast< void* >(ff)->getSelectionValues())->get(value));
            return valueDesc == 0 ? value : valueDesc;
        }
        if(RECORDS_)->equals(ref)->getProperty())) && value != 0 && dynamic_cast< DataTable* >(value) != 0) {
            return (java_cast< DataTable* >(value)))->getRecordCount());
        }
    }
    return value;
}

void* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::getDefaultTableAggregate(DataTable* table)
{
    return table;
}

java::lang::Integer* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::getRow(Reference* ref, EvaluationEnvironment* environment)
{
    if(ref)->getRow() != 0) {
        return ref)->getRow();
    } else {
        if(environment != 0 && environment)->getCause() != 0 && environment)->getCause())->getRow() != 0) {
            return environment)->getCause())->getRow();
        } else {
            return getDefaultRow() != 0 ? (getDefaultRow()))->intValue() : int(0));
        }
    }
}

std::string com::tibbo::aggregate::common::expression::DefaultReferenceResolver::resolveEntityDescription(Reference* ref, ::com::tibbo::aggregate::common::context::Context* con) /* throws(IllegalStateException) */
{
    if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE) {
        auto vd = con)->getVariableDefinition(ref)->getEntity());
        if(vd == 0) {
            throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        return vd)->getDescription();
    } else if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION) {
        auto fd = con)->getFunctionDefinition(ref)->getEntity());
        if(fd == 0) {
            throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        return fd)->getDescription();
    } else {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
    }
}

java::util::List* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::getContexts(Reference* ref) /* throws(ContextException) */
{
    if(ref)->getContext() != 0 && ::com::tibbo::aggregate::common::context::ContextUtils::isMask(ref)->getContext())) {
        return ::com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(ref)->getContext(), getContextManager(), getCallerController());
    } else {
        auto con = getContext(ref);
        return con != 0 ? ::java::util::Collections::singletonList(con) : ::java::util::Collections::/* <Context> */emptyList();
    }
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::getContext(Reference* ref) /* throws(ContextException) */
{
    auto con = getDefaultContext();
    if(ref)->getContext() != 0) {
        if(::com::tibbo::aggregate::common::context::ContextUtils::isRelative(ref)->getContext()) && con != 0) {
            con = java_cast< ::com::tibbo::aggregate::common::context::Context* >(con)->get(ref)->getContext(), getCallerController()));
        } else if(getContextManager() != 0) {
            con = java_cast< ::com::tibbo::aggregate::common::context::Context* >(getContextManager())->get(ref)->getContext(), getCallerController()));
        } else {
            con;
        }
        if(con == 0) {
            throw new ::com::tibbo::aggregate::common::context::ContextException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append(ref)->getContext())->toString());
        }
    }
    return con;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::resolveEntity(Reference* ref, ::com::tibbo::aggregate::common::context::Context* con, EvaluationEnvironment* environment) /* throws(ContextException, SyntaxErrorException, EvaluationException) */
{
    if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE) {
        auto vd = con)->getVariableDefinition(ref)->getEntity());
        if(vd == 0) {
            throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        return con)->getVariable(ref)->getEntity(), getCallerController(), new ::com::tibbo::aggregate::common::context::DefaultRequestController(getEvaluator()));
    } else if(ref)->getEntityType() == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION) {
        auto fd = con)->getFunctionDefinition(ref)->getEntity());
        if(fd == 0) {
            throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        auto parameters = DataTableConstruction::constructTable(ref)->getParameters(), fd)->getInputFormat(), getEvaluator(), environment);
        return con)->callFunction(ref)->getEntity(), getCallerController(), new ::com::tibbo::aggregate::common::context::DefaultRequestController(getEvaluator()), parameters);
    } else {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
    }
}



java::lang::Class* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.DefaultReferenceResolver", 62);
    return c;
}

void com::tibbo::aggregate::common::expression::DefaultReferenceResolver::clinit()
{
struct string_init_ {
    string_init_() {
    ROW_ = u"row"_j;
    DESCRIPTION_ = u"description"_j;
    NAME_ = u"name"_j;
    ICON_ = u"icon"_j;
    TYPE_ = u"type"_j;
    READABLE_ = u"readable"_j;
    WRITABLE_ = u"writable"_j;
    RECORDS_ = u"records"_j;
    FORMAT_ = u"format"_j;
    HELP_ = u"help"_j;
    OPTIONS_ = u"options"_j;
    SELECTION_VALUE_DESCRIPTION_ = u"svdesc"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* com::tibbo::aggregate::common::expression::DefaultReferenceResolver::getClass0()
{
    return class_();
}
