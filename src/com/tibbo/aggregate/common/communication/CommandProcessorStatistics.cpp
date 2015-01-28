// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/CommandProcessorStatistics.java
#include <com/tibbo/aggregate/common/communication/CommandProcessorStatistics.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/communication/Command.h"
#include <com/tibbo/aggregate/common/communication/ReplyMonitor.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/LongFieldFormat.h"
#include <com/tibbo/aggregate/common/util/TimeHelper.h"
////#include <java/lang/ClassCastException.h"
////#include <java/lang/Float.h"
////#include <java/lang/IllegalStateException.h"
////#include <java/lang/Long.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"
////#include <java/lang/System.h"
////#include <java/util/ResourceBundle.h"

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

com::tibbo::aggregate::common::communication::CommandProcessorStatistics::CommandProcessorStatistics(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::communication::CommandProcessorStatistics::CommandProcessorStatistics()
    : CommandProcessorStatistics(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DateTableFormatPtr& com::tibbo::aggregate::common::communication::CommandProcessorStatistics::FORMAT()
{
    
    return FORMAT_;
}
DateTableFormatPtr com::tibbo::aggregate::common::communication::CommandProcessorStatistics::FORMAT_;

void com::tibbo::aggregate::common::communication::CommandProcessorStatistics::update(ReplyMonitor* monitor)
{
    if(commandCount == 0) {
        startTime = ::java::lang::Long::valueOf(::java::lang::System::currentTimeMillis());
    }
    commandCount++;
    averageResponseTime = (averageResponseTime * ((new ::java::lang::Float(static_cast< float >(commandCount))))->floatValue() - int(1)) + (new ::java::lang::Float(static_cast< float >(::java::lang::System::currentTimeMillis() - monitor)->getStartTime()))))->floatValue()) / (new ::java::lang::Float(static_cast< float >(commandCount))))->floatValue();
    outgoingTraffic += java_cast< CommandPtr >(monitor)->getCommand()))->size();
    if(java_cast< CommandPtr >(monitor)->getReply()) != 0) {
        incomingTraffic += java_cast< CommandPtr >(monitor)->getReply()))->size();
    } else {
        unrepliedCommandCount++;
    }
}

DateDataTablePtr com::tibbo::aggregate::common::communication::CommandProcessorStatistics::toDataTable()
{
    try {
        return DataTableConversion::beanToTable(this, FORMAT_);
    } catch (DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

 com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getStartTime()
{
    return startTime;
}

 com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getConnectionTime()
{
    return startTime != 0 ? ::java::lang::Long::valueOf((::java::lang::System::currentTimeMillis() - (startTime))->longValue())) : static_cast< long  >(0);
}

long com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getCommandCount()
{
    return commandCount;
}

long com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getAverageResponseTime()
{
    return (new ::java::lang::Float(averageResponseTime))->longValue();
}

long com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getOutgoingTraffic()
{
    return outgoingTraffic;
}

long com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getIncomingTraffic()
{
    return incomingTraffic;
}

long com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getUnrepliedCommandCount()
{
    return unrepliedCommandCount;
}



java::lang::Class* com::tibbo::aggregate::common::communication::CommandProcessorStatistics::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.communication.CommandProcessorStatistics", 67);
    return c;
}

void com::tibbo::aggregate::common::communication::CommandProcessorStatistics::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat(int(1), int(1));
        {
            FORMAT_)->addField(std::stringBuilder().append(u"<connectionTime><L><F=N><D="_j)->append(Cres::get())->getString(u"commConnectionTime"_j))
                ->append(u"><E="_j)
                ->append(field::LongFieldFormat::EDITOR_PERIOD())
                ->append(u"><O="_j)
                ->append(field::LongFieldFormat::encodePeriodEditorOptions(TimeHelper::SECOND, TimeHelper::DAY))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<commandCount><L><D="_j)->append(Cres::get())->getString(u"commCommandCount"_j))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<averageResponseTime><L><D="_j)->append(Cres::get())->getString(u"commAvgResponseTime"_j))
                ->append(u"><E="_j)
                ->append(field::LongFieldFormat::EDITOR_PERIOD())
                ->append(u"><O="_j)
                ->append(field::LongFieldFormat::encodePeriodEditorOptions(TimeHelper::MILLISECOND, TimeHelper::MILLISECOND))
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<incomingTraffic><L><D="_j)->append(Cres::get())->getString(u"commIncomingTraffic"_j))
                ->append(u"><E="_j)
                ->append(field::LongFieldFormat::EDITOR_BYTES())
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<outgoingTraffic><L><D="_j)->append(Cres::get())->getString(u"commOutgoingTraffic"_j))
                ->append(u"><E="_j)
                ->append(field::LongFieldFormat::EDITOR_BYTES())
                ->append(u">"_j)->toString());
            FORMAT_)->addField(std::stringBuilder().append(u"<unrepliedCommandCount><L><D="_j)->append(Cres::get())->getString(u"commUnrepliedCommandCount"_j))
                ->append(u">"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::communication::CommandProcessorStatistics::getClass0()
{
    return class_();
}

