#include "binding/BindingEventsHelper.h"



const std::string BindingEventsHelper::E_BINDING_ERROR = "bindingError";
const std::string BindingEventsHelper::E_BINDING_EXECUTION = "bindingExecution";

const std::string BindingEventsHelper::EF_BINDING_CONTEXT = "context";
const std::string BindingEventsHelper::EF_BINDING_TARGET = "target";
const std::string BindingEventsHelper::EF_BINDING_EXPRESSION = "expression";
const std::string BindingEventsHelper::EF_BINDING_ACTIVATOR = "activator";
const std::string BindingEventsHelper::EF_BINDING_EXECUTION = "execution";
const std::string BindingEventsHelper::EF_BINDING_CONDITION = "condition";
const std::string BindingEventsHelper::EF_BINDING_VALUE = "value";
const std::string BindingEventsHelper::EF_BINDING_CAUSE = "cause";
const std::string BindingEventsHelper::EF_BINDING_ERROR = "error";
const std::string BindingEventsHelper::EF_BINDING_ERROR_STACK = "stack";


//TODO:init
TableFormatPtr BindingEventsHelper::EFT_BINDING_EXECUTION()
{
    if (!EFT_BINDING_EXECUTION_)     {
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_TARGET + "><S><D=" + Cres.get().getString("target") + "><F=N><E=" + StringFieldFormat.EDITOR_CONTEXT + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_EXPRESSION + "><S><F=N><D=" + Cres.get().getString("expression") + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_VALUE + "><S><F=N><D=" + Cres.get().getString("value") + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_ACTIVATOR + "><S><F=N><D=" + Cres.get().getString("wActivatorDescr") + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_CONDITION + "><S><F=N><D=" + Cres.get().getString("condition") + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_EXECUTION + "><S><D=" + Cres.get().getString("wExecution") + ">"));
//        EFT_BINDING_EXECUTION.addField(FieldFormat.create("<" + EF_BINDING_CAUSE + "><S><F=N><D=" + Cres.get().getString("cause") + ">"));
    }

    return EFT_BINDING_EXECUTION_;
}


TableFormatPtr BindingEventsHelper::EFT_BINDING_EXECUTION_EXT()
{
    if (!EFT_BINDING_EXECUTION_EXT_) {
        //EFT_BINDING_EXECUTION_EXT.addField(FieldFormat.create("<" + EF_BINDING_CONTEXT + "><S><D=" + Cres.get().getString("context") + "><F=N><E=" + StringFieldFormat.EDITOR_CONTEXT + ">"), 0);
    }

    return EFT_BINDING_EXECUTION_EXT_;
}


TableFormatPtr BindingEventsHelper::EFT_BINDING_ERROR()
{
    if (!EFT_BINDING_ERROR_) {
//        EFT_BINDING_ERROR.removeField(EF_BINDING_VALUE);
//        EFT_BINDING_ERROR.removeField(EF_BINDING_CONDITION);
//        EFT_BINDING_ERROR.addField(FieldFormat.create("<" + EF_BINDING_ERROR + "><S><D=" + Cres.get().getString("error") + "><E=" + StringFieldFormat.EDITOR_TEXT_AREA + ">"));
//        EFT_BINDING_ERROR.addField(FieldFormat.create("<" + EF_BINDING_ERROR_STACK + "><T><D=" + Cres.get().getString("stack") + ">"));
    }

    return EFT_BINDING_ERROR_;
}


TableFormatPtr BindingEventsHelper::EFT_BINDING_ERROR_EXT()
{
    if (!EFT_BINDING_ERROR_EXT_) {
        //EFT_BINDING_ERROR_EXT.addField(FieldFormat.create("<" + EF_BINDING_CONTEXT + "><S><D=" + Cres.get().getString("context") + "><F=N>"), 0);
    }

    return EFT_BINDING_ERROR_EXT_;
}
//
//DataTablePtr BindingEventsHelper::createBindingErrorEventDataPtr(
//    ContextPtr con,
//    boost::BindingPtr binding,
//    int method,
//    const std::string & activator,
//    boost::ExceptionPtr error
//){
//
//    DataTablePtr dt = new DataTable(con == NULL ? EFT_BINDING_ERROR() : EFT_BINDING_ERROR_EXT();
//    DataRecordPtr record = dt->addRecord();
//    if(con != 0) {
//        record->setValue(EF_BINDING_CONTEXT_, con->getPath());
//    }
//    if(binding != 0) {
//        record->setValue(EF_BINDING_TARGET_, binding->getReference()->toString());
//        record->setValue(EF_BINDING_EXPRESSION_, binding->getExpression()->toString());
//    }
//    if(error != 0) {
//        record->setValue(EF_BINDING_ERROR_, error->getMessage());
//        //TODO: ThreadUtils::createStackTraceTable
//        DataTablePtr stackTable = ThreadUtils::createStackTraceTable(error->getStackTrace());
//        record->setValue(EF_BINDING_ERROR_STACK_, stackTable);
//    }
//    record->setValue(EF_BINDING_ACTIVATOR_, activator);
//    record->setValue(EF_BINDING_EXECUTION_, executionTypeDescription(method));
//
//    return dt;
//}
//
//DataTablePtr BindingEventsHelper::createBindingExecutionEventDataPtr(
//    ContextPtr con, int method,
//    boost::BindingPtr binding,
//    boost::EvaluationOptionsPtr options,
//    boost::ReferencePtr cause,
//    AgObjectPtr result
//) {
//
//    DataRecordPtr data = new DataRecord(con == NULL ? EFT_BINDING_EXECUTION() : EFT_BINDING_EXECUTION_EXT();
//    if(con != 0) {
//        data->setValue(EF_BINDING_CONTEXT_, con->getPath());
//    }
//    data->setValue(EF_BINDING_TARGET_, binding->getReference()->toString());
//    data->setValue(EF_BINDING_EXPRESSION_, binding->getExpression()->toString());
//    if(options->getActivator() != 0) {
//        data->setValue(EF_BINDING_ACTIVATOR_, options->getActivator()->toString());
//    }
//    if(options->getCondition() != 0) {
//        data->setValue(EF_BINDING_CONDITION_, options->getCondition()->toString());
//    }
//    if(result != 0) {
//        data->setValue(EF_BINDING_VALUE_, result->toString());
//    }
//    if(cause != 0) {
//        data->setValue(EF_BINDING_CAUSE_, cause->toString());
//    }
//
//    data->setValue(EF_BINDING_EXECUTION_, executionTypeDescription(method));
//    return data->wrap();
//}
//
//std::string BindingEventsHelper::executionTypeDescription(int method)
//{
//
//    const std::string exec;
//    if(method == EvaluationOptions::STARTUP) {
//        exec = Cres::get()->getString("wOnStartup");
//    }else if(method == EvaluationOptions::EVENT) {
//        exec = Cres::get()->getString("wOnEvent");
//    }else {
//        exec = Cres::get()->getString("wPeriodically");
//    }
//
//    return exec;
//}
