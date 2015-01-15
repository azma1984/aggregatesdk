// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventEnrichmentRule.java
#include <com/tibbo/aggregate/common/event/EventEnrichmentRule.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::event::EventEnrichmentRule::EventEnrichmentRule(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::EventEnrichmentRule::EventEnrichmentRule() 
    : EventEnrichmentRule(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::event::EventEnrichmentRule::EventEnrichmentRule(DataRecord* data) 
    : EventEnrichmentRule(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

std::string& com::tibbo::aggregate::common::event::EventEnrichmentRule::FIELD_NAME()
{
    
    return FIELD_NAME_;
}
std::string com::tibbo::aggregate::common::event::EventEnrichmentRule::FIELD_NAME_;

std::string& com::tibbo::aggregate::common::event::EventEnrichmentRule::FIELD_EXPRESSION()
{
    
    return FIELD_EXPRESSION_;
}
std::string com::tibbo::aggregate::common::event::EventEnrichmentRule::FIELD_EXPRESSION_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::event::EventEnrichmentRule::FORMAT()
{
    
    return FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::event::EventEnrichmentRule::FORMAT_;

void com::tibbo::aggregate::common::event::EventEnrichmentRule::ctor()
{
    super::ctor(FORMAT_);
}

void com::tibbo::aggregate::common::event::EventEnrichmentRule::ctor(DataRecord* data)
{
    super::ctor(FORMAT_, data);
}

std::string com::tibbo::aggregate::common::event::EventEnrichmentRule::getName()
{
    return name;
}

void com::tibbo::aggregate::common::event::EventEnrichmentRule::setName(const std::string & name)
{
    this->name = name;
}

std::string com::tibbo::aggregate::common::event::EventEnrichmentRule::getExpression()
{
    return expression;
}

void com::tibbo::aggregate::common::event::EventEnrichmentRule::setExpression(const std::string & expression)
{
    this->expression = expression;
    enrichmentExpression;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::event::EventEnrichmentRule::getEnrichmentExpression()
{
    if(enrichmentExpression == 0) {
        enrichmentExpression = (expression != 0 && expression)->length() > 0) ? new ::com::tibbo::aggregate::common::expression::Expression(expression) : static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0);
    }
    return enrichmentExpression;
}



java::lang::Class* com::tibbo::aggregate::common::event::EventEnrichmentRule::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.EventEnrichmentRule", 52);
    return c;
}

void com::tibbo::aggregate::common::event::EventEnrichmentRule::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_NAME_ = u"name"_j;
    FIELD_EXPRESSION_ = u"expression"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat();
        {
            FORMAT_)->addTableValidator(new validator::TableKeyFieldsValidator());
            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_NAME_)
                ->append(u"><S><F=K><D="_j)
                ->append(Cres::get())->getString(u"name"_j))
                ->append(u">"_j)->toString());
            ff)->addValidator(validator::ValidatorHelper::NAME_LENGTH_VALIDATOR());
            ff)->addValidator(validator::ValidatorHelper::NAME_SYNTAX_VALIDATOR());
            FORMAT_)->addField(ff);
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_EXPRESSION_)
                ->append(u"><S><D="_j)
                ->append(Cres::get())->getString(u"expression"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_EXPRESSION())
                ->append(u">"_j)->toString())));
            FORMAT_)->setNamingExpression(std::stringBuilder().append(u"print({}, \"{"_j)->append(FIELD_NAME_)
                ->append(u"}\", \", \")"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::event::EventEnrichmentRule::getClass0()
{
    return class_();
}

