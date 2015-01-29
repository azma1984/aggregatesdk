#include "communication/CommandProcessorStatistics.h"


//CommandProcessorStatistics::CommandProcessorStatistics(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//CommandProcessorStatistics::CommandProcessorStatistics()
//    : CommandProcessorStatistics(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//DateTableFormatPtr& CommandProcessorStatistics::FORMAT()
//{
//
//    return FORMAT_;
//}
//DateTableFormatPtr CommandProcessorStatistics::FORMAT_;
//
//void CommandProcessorStatistics::update(ReplyMonitor* monitor)
//{
//    if(commandCount == 0) {
//        startTime = ::java::lang::Long::valueOf(::java::lang::System::currentTimeMillis());
//    }
//    commandCount++;
//    averageResponseTime = (averageResponseTime * ((new ::java::lang::Float(static_cast< float >(commandCount))))->floatValue() - int(1)) + (new ::java::lang::Float(static_cast< float >(::java::lang::System::currentTimeMillis() - monitor)->getStartTime()))))->floatValue()) / (new ::java::lang::Float(static_cast< float >(commandCount))))->floatValue();
//    outgoingTraffic += java_cast< CommandPtr >(monitor)->getCommand()))->size();
//    if(java_cast< CommandPtr >(monitor)->getReply()) != 0) {
//        incomingTraffic += java_cast< CommandPtr >(monitor)->getReply()))->size();
//    } else {
//        unrepliedCommandCount++;
//    }
//}
//
//DateDataTablePtr CommandProcessorStatistics::toDataTable()
//{
//    try {
//        return DataTableConversion::beanToTable(this, FORMAT_);
//    } catch (DataTableException* ex) {
//        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//    }
//}
//
// CommandProcessorStatistics::getStartTime()
//{
//    return startTime;
//}
//
// CommandProcessorStatistics::getConnectionTime()
//{
//    return startTime != 0 ? ::java::lang::Long::valueOf((::java::lang::System::currentTimeMillis() - (startTime))->longValue())) : static_cast< long  >(0);
//}
//
//long CommandProcessorStatistics::getCommandCount()
//{
//    return commandCount;
//}
//
//long CommandProcessorStatistics::getAverageResponseTime()
//{
//    return (new ::java::lang::Float(averageResponseTime))->longValue();
//}
//
//long CommandProcessorStatistics::getOutgoingTraffic()
//{
//    return outgoingTraffic;
//}
//
//long CommandProcessorStatistics::getIncomingTraffic()
//{
//    return incomingTraffic;
//}
//
//long CommandProcessorStatistics::getUnrepliedCommandCount()
//{
//    return unrepliedCommandCount;
//}
//
//
//
//java::lang::Class* CommandProcessorStatistics::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.communication.CommandProcessorStatistics", 67);
//    return c;
//}
//
//void CommandProcessorStatistics::clinit()
//{
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        FORMAT_ = new TableFormat(int(1), int(1));
//        {
//            FORMAT_)->addField(std::stringBuilder().append(u"<connectionTime><L><F=N><D="_j)->append(Cres::get())->getString(u"commConnectionTime"_j))
//                ->append(u"><E="_j)
//                ->append(field::LongFieldFormat::EDITOR_PERIOD())
//                ->append(u"><O="_j)
//                ->append(field::LongFieldFormat::encodePeriodEditorOptions(TimeHelper::SECOND, TimeHelper::DAY))
//                ->append(u">"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<commandCount><L><D="_j)->append(Cres::get())->getString(u"commCommandCount"_j))
//                ->append(u">"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<averageResponseTime><L><D="_j)->append(Cres::get())->getString(u"commAvgResponseTime"_j))
//                ->append(u"><E="_j)
//                ->append(field::LongFieldFormat::EDITOR_PERIOD())
//                ->append(u"><O="_j)
//                ->append(field::LongFieldFormat::encodePeriodEditorOptions(TimeHelper::MILLISECOND, TimeHelper::MILLISECOND))
//                ->append(u">"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<incomingTraffic><L><D="_j)->append(Cres::get())->getString(u"commIncomingTraffic"_j))
//                ->append(u"><E="_j)
//                ->append(field::LongFieldFormat::EDITOR_BYTES())
//                ->append(u">"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<outgoingTraffic><L><D="_j)->append(Cres::get())->getString(u"commOutgoingTraffic"_j))
//                ->append(u"><E="_j)
//                ->append(field::LongFieldFormat::EDITOR_BYTES())
//                ->append(u">"_j)->toString());
//            FORMAT_)->addField(std::stringBuilder().append(u"<unrepliedCommandCount><L><D="_j)->append(Cres::get())->getString(u"commUnrepliedCommandCount"_j))
//                ->append(u">"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

