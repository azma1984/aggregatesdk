// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowError.java
#include <com/tibbo/aggregate/common/action/command/ShowError.h"

#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/io/PrintWriter.h"
//#include <java/io/StringWriter.h"
//#include <java/io/Writer.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::ShowError::ShowError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowError::ShowError() 
    : ShowError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowError::ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception) 
    : ShowError(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,message,level,exception);
}

std::string& com::tibbo::aggregate::common::action::command::ShowError::CF_LEVEL()
{
    
    return CF_LEVEL_;
}
std::string com::tibbo::aggregate::common::action::command::ShowError::CF_LEVEL_;

std::string& com::tibbo::aggregate::common::action::command::ShowError::CF_MESSAGE()
{
    
    return CF_MESSAGE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowError::CF_MESSAGE_;

std::string& com::tibbo::aggregate::common::action::command::ShowError::CF_EXCEPTION()
{
    
    return CF_EXCEPTION_;
}
std::string com::tibbo::aggregate::common::action::command::ShowError::CF_EXCEPTION_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowError::CFT_SHOW_ERROR()
{
    
    return CFT_SHOW_ERROR_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowError::CFT_SHOW_ERROR_;

void com::tibbo::aggregate::common::action::command::ShowError::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_ERROR(), CFT_SHOW_ERROR_, static_cast< TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::ShowError::ctor(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_ERROR(), title);
    this->message = message;
    this->level = level;
    this->exception = exception;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::ShowError::constructParameters()
{
    auto t = new DataTable(CFT_SHOW_ERROR_);
    auto exTrace = new ::java::io::StringWriter();
    auto pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(exTrace));
    exception)->printStackTrace(pw);
    auto finalDetails = exTrace)->toString();
    t)->addRecord())->addInt(level)))->addString(message))->addString(finalDetails);
    return t;
}

int com::tibbo::aggregate::common::action::command::ShowError::getLevel()
{
    return level;
}

void com::tibbo::aggregate::common::action::command::ShowError::setLevel(int level)
{
    this->level = level;
}

std::string com::tibbo::aggregate::common::action::command::ShowError::getMessage()
{
    return message;
}

void com::tibbo::aggregate::common::action::command::ShowError::setMessage(const std::string & message)
{
    this->message = message;
}

java::lang::Throwable* com::tibbo::aggregate::common::action::command::ShowError::getException()
{
    return exception;
}

void com::tibbo::aggregate::common::action::command::ShowError::setException(::java::lang::Throwable* exception)
{
    this->exception = exception;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowError::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowError", 51);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowError::clinit()
{
struct string_init_ {
    string_init_() {
    CF_LEVEL_ = u"level"_j;
    CF_MESSAGE_ = u"message"_j;
    CF_EXCEPTION_ = u"exception"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_ERROR_ = new TableFormat(int(1), int(1));
        {
            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LEVEL_)
                ->append(u"><I>"_j)->toString());
            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MESSAGE_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_EXCEPTION_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowError::getClass0()
{
    return class_();
}

