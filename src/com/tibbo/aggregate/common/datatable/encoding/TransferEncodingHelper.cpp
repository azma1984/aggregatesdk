// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.java
#include "datatable/encoding/TransferEncodingHelper.h"

#include "datatable/DataTableUtils.h"
#include "protocol/AggreGateCommand.h"
#include "protocol/AggreGateCommandUtils.h"
/*
//#include <java/lang/Character.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/util/HashMap.h"
//#include <java/util/Map.h"
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

Dateencoding::TransferEncodingHelper::TransferEncodingHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::TransferEncodingHelper::TransferEncodingHelper()
    : TransferEncodingHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

const char16_t Dateencoding::TransferEncodingHelper::ESCAPE_CHAR;

java::util::Map*& Dateencoding::TransferEncodingHelper::DIRECT()
{
    
    return DIRECT_;
}
java::util::Map* Dateencoding::TransferEncodingHelper::DIRECT_;

java::util::Map*& Dateencoding::TransferEncodingHelper::REVERSE()
{
    
    return REVERSE_;
}
java::util::Map* Dateencoding::TransferEncodingHelper::REVERSE_;

std::string Dateencoding::TransferEncodingHelper::encode(const std::string & s)
{
    
    if(s == 0) {
        return 0;
    }
    auto len = s)->length();
    auto out = new std::stringBuffer(len);
    for (auto i = int(0); i < len; i++) {
        auto c = s)->charAt(i);
        if(DIRECT_)->containsKey(::java::lang::Character::valueOf(c))) {
            out)->append(ESCAPE_CHAR);
            out)->append(java_cast< ::java::lang::Character* >(DIRECT_)->get(::java::lang::Character::valueOf(c)))));
        } else {
            out)->append(c);
        }
    }
    return out)->toString();
}

std::string Dateencoding::TransferEncodingHelper::decode(const std::string & s)
{
    
    if(s == 0) {
        return 0;
    }
    auto len = s)->length();
    auto out = new std::stringBuffer(len);
    for (auto i = int(0); i < len; i++) {
        auto c = s)->charAt(i);
        if(c == ESCAPE_CHAR && i < len - int(1)) {
            auto next = s)->charAt(i + int(1));
            auto orig = java_cast< ::java::lang::Character* >(REVERSE_)->get(::java::lang::Character::valueOf(next)));
            if(orig != 0) {
                out)->append(orig)->charValue());
                i += 1;
            } else {
                out)->append(c);
                out)->append(next);
            }
        } else {
            out)->append(c);
        }
    }
    return out)->toString();
}



java::lang::Class* Dateencoding::TransferEncodingHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.TransferEncodingHelper", 68);
    return c;
}

void Dateencoding::TransferEncodingHelper::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DIRECT_ = new ::java::util::HashMap();
        REVERSE_ = new ::java::util::HashMap();
        {
            DIRECT_)->put(::java::lang::Character::valueOf(ESCAPE_CHAR), ::java::lang::Character::valueOf(u'%'));
            DIRECT_)->put(::java::lang::Character::valueOf(protocol::AggreGateCommandUtils::CLIENT_COMMAND_SEPARATOR())->charAt(int(0))), ::java::lang::Character::valueOf(u'/'));
            DIRECT_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_START), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_START));
            DIRECT_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_END), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_END));
            DIRECT_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_NAME_VALUE_SEPARATOR), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR));
            DIRECT_)->put(::java::lang::Character::valueOf(static_cast< char16_t >(::com::tibbo::aggregate::common::protocol::AggreGateCommand::START_CHAR)), ::java::lang::Character::valueOf(u'^'));
            DIRECT_)->put(::java::lang::Character::valueOf(static_cast< char16_t >(::com::tibbo::aggregate::common::protocol::AggreGateCommand::END_CHAR)), ::java::lang::Character::valueOf(u'$'));
            REVERSE_)->put(::java::lang::Character::valueOf(u'%'), ::java::lang::Character::valueOf(ESCAPE_CHAR));
            REVERSE_)->put(::java::lang::Character::valueOf(u'/'), ::java::lang::Character::valueOf(protocol::AggreGateCommandUtils::CLIENT_COMMAND_SEPARATOR())->charAt(int(0))));
            REVERSE_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_START), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_START));
            REVERSE_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_END), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_END));
            REVERSE_)->put(::java::lang::Character::valueOf(DataTableUtils::ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR), ::java::lang::Character::valueOf(DataTableUtils::ELEMENT_NAME_VALUE_SEPARATOR));
            REVERSE_)->put(::java::lang::Character::valueOf(u'^'), ::java::lang::Character::valueOf(static_cast< char16_t >(::com::tibbo::aggregate::common::protocol::AggreGateCommand::START_CHAR)));
            REVERSE_)->put(::java::lang::Character::valueOf(u'$'), ::java::lang::Character::valueOf(static_cast< char16_t >(::com::tibbo::aggregate::common::protocol::AggreGateCommand::END_CHAR)));
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* Dateencoding::TransferEncodingHelper::getClass0()
{
    return class_();
}

