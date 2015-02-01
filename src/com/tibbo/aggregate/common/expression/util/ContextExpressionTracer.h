#pragma once

#include "context/Context.h"
#include "datatable/TableFormat.h"
#include "expression/util/Tracer.h"
#include <string>
#include <boost/shared_ptr.hpp>

class ContextExpressionTracer : public Tracer
{
public:
    static const std::string E_TRACE_;
    static const std::string EF_TRACE_VALUE_;
    static const std::string EF_TRACE_MESSAGE_;

private:
    boost::shared_ptr<TableFormat> EFT_TRACE_;
    boost::shared_ptr<Context> context;
    std::string traceEventGroup;
    TableFormatPtr EFT_TRACE();

protected:
    boost::shared_ptr<Context> getContext();

public:
    ContextExpressionTracer(boost::shared_ptr<Context> context, const std::string & traceEventGroup);
    void install();
    //TODO: void * value
    virtual void trace(void* value, const std::string& message);
};
