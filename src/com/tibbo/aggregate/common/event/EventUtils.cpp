// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventUtils.java
#include <com/tibbo/aggregate/common/event/EventUtils.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/context/EventDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/event/EventLevel.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/awt/Color.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/Math.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Collection.h"
//#include <java/util/Hashtable.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/Random.h"
//#include <java/util/ResourceBundle.h"

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

com::tibbo::aggregate::common::event::EventUtils::EventUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::EventUtils::EventUtils()
    : EventUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_FATAL()
{
    
    return COLOR_FATAL_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_FATAL_;

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_ERROR()
{
    
    return COLOR_ERROR_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_ERROR_;

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_WARNING()
{
    
    return COLOR_WARNING_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_WARNING_;

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_INFO()
{
    
    return COLOR_INFO_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_INFO_;

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_NOTICE()
{
    
    return COLOR_NOTICE_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_NOTICE_;

java::awt::Color*& com::tibbo::aggregate::common::event::EventUtils::COLOR_NONE()
{
    
    return COLOR_NONE_;
}
java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::COLOR_NONE_;

java::util::Map*& com::tibbo::aggregate::common::event::EventUtils::COLORS()
{
    
    return COLORS_;
}
java::util::Map* com::tibbo::aggregate::common::event::EventUtils::COLORS_;

std::string& com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_COLOR()
{
    
    return FIELD_SEVERITY_STATS_COLOR_;
}
std::string com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_COLOR_;

std::string& com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_NUMBER()
{
    
    return FIELD_SEVERITY_STATS_NUMBER_;
}
std::string com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_NUMBER_;

std::string& com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_LEVEL()
{
    
    return FIELD_SEVERITY_STATS_LEVEL_;
}
std::string com::tibbo::aggregate::common::event::EventUtils::FIELD_SEVERITY_STATS_LEVEL_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::event::EventUtils::SEVERITY_STATS_FORMAT()
{
    
    return SEVERITY_STATS_FORMAT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::event::EventUtils::SEVERITY_STATS_FORMAT_;

java::util::Random*& com::tibbo::aggregate::common::event::EventUtils::ID_GENERATOR()
{
    
    return ID_GENERATOR_;
}
java::util::Random* com::tibbo::aggregate::common::event::EventUtils::ID_GENERATOR_;

long com::tibbo::aggregate::common::event::EventUtils::generateEventId()
{
    
    return ::java::lang::Math::abs(ID_GENERATOR_)->nextLong());
}

java::util::List* com::tibbo::aggregate::common::event::EventUtils::getEventDefinitions(::com::tibbo::aggregate::common::context::ContextManager* cm, const std::string & contextMask, const std::string & eventsMask, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    
    std::list  events = new ::java::util::LinkedList();
    auto contexts = ::com::tibbo::aggregate::common::context::ContextUtils::expandMaskToContexts(contextMask, cm, caller);
    for (auto _i = contexts)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::context::Context* context = java_cast< ::com::tibbo::aggregate::common::context::Context* >(_i->next());
        {
            events)->addAll(static_cast< ::java::util::Collection* >(getEvents(context, eventsMask, caller)));
        }
    }
    return events;
}

java::util::List* com::tibbo::aggregate::common::event::EventUtils::getEvents(::com::tibbo::aggregate::common::context::Context* context, const std::string & eventsMask, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    
    std::list  events = new ::java::util::LinkedList();
    if(eventsMask)->equals(::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_GROUP_MASK()))) {
        for (auto _i = context)->getEventDefinitions(caller))->iterator(); _i->hasNext(); ) {
            ::com::tibbo::aggregate::common::context::EventDefinition* ed = java_cast< ::com::tibbo::aggregate::common::context::EventDefinition* >(_i->next());
            {
                if(ed)->getGroup() != 0 && !context::ContextUtils::GROUP_SYSTEM())->equals(ed)->getGroup()))) {
                    events)->add(ed));
                }
            }
        }
    } else {
        auto ed = context)->getEventDefinition(eventsMask);
        if(ed != 0) {
            events)->add(ed));
        }
    }
    return events;
}

bool com::tibbo::aggregate::common::event::EventUtils::matchesToMask(const std::string & eventMask, ::com::tibbo::aggregate::common::context::EventDefinition* ed)
{
    
    if(context::ContextUtils::ENTITY_GROUP_MASK())->equals(eventMask))) {
        return ed)->getGroup() != 0 && !context::ContextUtils::GROUP_SYSTEM())->equals(ed)->getGroup()));
    }
    return ed)->getName())->equals(eventMask));
}

bool com::tibbo::aggregate::common::event::EventUtils::matchesToMask(const std::string & eventMask, const std::string & event)
{
    
    if(context::ContextUtils::ENTITY_GROUP_MASK())->equals(eventMask))) {
        return true;
    }
    return ::com::tibbo::aggregate::common::util::Util::equals(event, eventMask);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::event::EventUtils::createSeverityStatisticsTable(int none, int notice, int info, int warning, int error, int fatal)
{
    
    auto stats = new DataTable(SEVERITY_STATS_FORMAT_);
    stats)->addRecord())->addInt(EventLevel::NONE)))->addInt(none)))->addColor(COLOR_NONE_);
    stats)->addRecord())->addInt(EventLevel::NOTICE)))->addInt(notice)))->addColor(COLOR_NOTICE_);
    stats)->addRecord())->addInt(EventLevel::INFO)))->addInt(info)))->addColor(COLOR_INFO_);
    stats)->addRecord())->addInt(EventLevel::WARNING)))->addInt(warning)))->addColor(COLOR_WARNING_);
    stats)->addRecord())->addInt(EventLevel::ERROR)))->addInt(error)))->addColor(COLOR_ERROR_);
    stats)->addRecord())->addInt(EventLevel::FATAL)))->addInt(fatal)))->addColor(COLOR_FATAL_);
    return stats;
}

java::awt::Color* com::tibbo::aggregate::common::event::EventUtils::getEventColor(int level)
{
    
    return java_cast< ::java::awt::Color* >(COLORS_)->get(level)));
}



java::lang::Class* com::tibbo::aggregate::common::event::EventUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.EventUtils", 43);
    return c;
}

void com::tibbo::aggregate::common::event::EventUtils::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_SEVERITY_STATS_COLOR_ = u"color"_j;
    FIELD_SEVERITY_STATS_NUMBER_ = u"number"_j;
    FIELD_SEVERITY_STATS_LEVEL_ = u"level"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        COLOR_FATAL_ = new ::java::awt::Color(int(240), int(120), int(120));
        COLOR_ERROR_ = new ::java::awt::Color(int(240), int(190), int(120));
        COLOR_WARNING_ = new ::java::awt::Color(int(240), int(240), int(120));
        COLOR_INFO_ = new ::java::awt::Color(int(160), int(240), int(120));
        COLOR_NOTICE_ = new ::java::awt::Color(int(120), int(150), int(240));
        COLOR_NONE_ = new ::java::awt::Color(int(230), int(230), int(230));
        COLORS_ = new ::java::util::Hashtable();
        {
            COLORS_)->put(EventLevel::NONE), EventUtils::COLOR_NONE_);
            COLORS_)->put(EventLevel::NOTICE), EventUtils::COLOR_NOTICE_);
            COLORS_)->put(EventLevel::INFO), EventUtils::COLOR_INFO_);
            COLORS_)->put(EventLevel::WARNING), EventUtils::COLOR_WARNING_);
            COLORS_)->put(EventLevel::ERROR), EventUtils::COLOR_ERROR_);
            COLORS_)->put(EventLevel::FATAL), EventUtils::COLOR_FATAL_);
        }
        SEVERITY_STATS_FORMAT_ = new TableFormat();
        {
            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_SEVERITY_STATS_LEVEL_)
                ->append(u"><I><D="_j)
                ->append(Cres::get())->getString(u"level"_j))
                ->append(u">"_j)->toString());
            ff)->setSelectionValues(static_cast< std::map >(EventLevel::getSelectionValues()));
            SEVERITY_STATS_FORMAT_)->addField(ff);
            SEVERITY_STATS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_SEVERITY_STATS_NUMBER_)
                ->append(u"><I><D="_j)
                ->append(Cres::get())->getString(u"efEventCount"_j))
                ->append(u">"_j)->toString())));
            SEVERITY_STATS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_SEVERITY_STATS_COLOR_)
                ->append(u"><C><F=HI>"_j)->toString())));
        }
        ID_GENERATOR_ = new ::java::util::Random();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::event::EventUtils::getClass0()
{
    return class_();
}

