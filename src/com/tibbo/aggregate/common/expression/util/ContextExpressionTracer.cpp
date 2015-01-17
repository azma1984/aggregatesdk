#include "expression/util/ContextExpressionTracer.h"
#include "context/EventDefinition.h"

const std::string ContextExpressionTracer::E_TRACE_ = "trace";
const std::string ContextExpressionTracer::EF_TRACE_VALUE_ = "value";
const std::string ContextExpressionTracer::EF_TRACE_MESSAGE_ = "message";



ContextExpressionTracer::ContextExpressionTracer(boost::shared_ptr<Context> context, const std::string & traceEventGroup)
{
    this->context = context;
    this->traceEventGroup = traceEventGroup;
    install();
}


void ContextExpressionTracer::install()
{
    boost::shared_ptr<Context> target = getContext();
    if(target == 0) {
        return;
    }

    if(target->getEventDefinition(E_TRACE_) != 0) {
        return;
    }

    EventDefinition* ed = new EventDefinition(E_TRACE_, EFT_TRACE(), Cres::get()->getString("trace"));
    ed->setGroup(traceEventGroup);
    target->addEventDefinition(ed);
}

void ContextExpressionTracer::trace(void* value, const std::string & message)
{
    install();
    boost::shared_ptr<Context> target = getContext();
    target->fireEvent(E_TRACE_, (value != NULL) ? value->toString() : NULL, message);
}

boost::shared_ptr<Context> ContextExpressionTracer::getContext()
{
    return context;
}

boost::shared_ptr<TableFormat> ContextExpressionTracer::EFT_TRACE()
{
    if (!EFT_TRACE_) {
        EFT_TRACE = new TableFormat(1, 1);
        EFT_TRACE->addField( std::string("<").append(EF_TRACE_VALUE_).append("><S><F=N><D=")
                             .append(Cres::get()->getString("value")).append(">") );
        EFT_TRACE->addField( std::string("<").append(EF_TRACE_MESSAGE_).append("><S><F=N><D=")
                             .append(Cres::get()->getString("message")).append(">") );
    }

    return EFT_TRACE_;
}
