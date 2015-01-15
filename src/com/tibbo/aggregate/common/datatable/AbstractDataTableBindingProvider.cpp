// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.java
#include <com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/binding/ReferenceListener.h"
#include <com/tibbo/aggregate/common/binding/ReferenceWriter.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/Map_Entry.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_ReadLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_WriteLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock.h"
//#include <org/apache/log4j/Logger.h"

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::AbstractDataTableBindingProvider(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::AbstractDataTableBindingProvider() 
    : AbstractDataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::AbstractDataTableBindingProvider(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector) 
    : AbstractDataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCollector);
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::init()
{
    listeners = new ::java::util::LinkedHashMap();
    listenersLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::ctor(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector)
{
    super::ctor(errorCollector);
    init();
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::writeReference(::com::tibbo::aggregate::common::expression::Reference* ref, void* value) /* throws(BindingException) */
{
    if(isLocalReference(ref) && ref)->getServer() == 0) {
        auto row = ref)->getRow() != 0 ? (ref)->getRow()))->intValue() : int(0);
        auto field = ref)->getField();
        auto property = ref)->getProperty();
        if(field == 0 || field)->length() == 0) {
            writeToEditor(property, value);
        } else {
            writeToField(row, field, property, value);
        }
    } else {
        auto externalReferenceWriter = getExternalReferenceWriter();
        if(externalReferenceWriter != 0) {
            externalReferenceWriter)->writeReference(ref, value);
        } else {
            Log::BINDINGS())->debug(std::stringBuilder().append(u"Unable to write value referenced by '"_j)->append(ref))
                ->append(u"': no external reference writer is defined"_j)->toString());
        }
    }
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::writeToEditor(const std::string & property, void* value)
{
    if(DataTableBindingProvider::PROPERTY_ENABLED())->equals(property))) {
        setEditorEnabled((util::Util::convertToBoolean(value, true, false)))->booleanValue());
    }
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::writeToField(int row, const std::string & field, const std::string & property, void* value) /* throws(BindingException) */
{
    if(DataTableBindingProvider::PROPERTY_ENABLED())->equals(property))) {
        setEnabled(value, row, field);
    } else if(DataTableBindingProvider::PROPERTY_HIDDEN())->equals(property))) {
        setHidden(value, row, field);
    } else if(DataTableBindingProvider::PROPERTY_CHOICES())->equals(property))) {
        setSelectionValues(value, row, field);
    } else if(DataTableBindingProvider::PROPERTY_OPTIONS())->equals(property))) {
        setOptions(value, row, field);
    } else if(property == 0) {
        setCellValue(value, row, field);
    } else {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Unknown property: '"_j)->append(property)
            ->append(u"'"_j)->toString());
    }
}

int com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::getListenerCount()
{
    return listeners)->size();
}

java::util::Map* com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::getListeners()
{
    return listeners;
}

java::util::concurrent::locks::ReentrantReadWriteLock* com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::getListenersLock()
{
    return listenersLock;
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::addReferenceListener(::com::tibbo::aggregate::common::expression::Reference* ref, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener) /* throws(BindingException) */
{
    listenersLock)->writeLock())->lock();
    {
        auto finally0 = finally([&] {
            listenersLock)->writeLock())->unlock();
        });
        {
            listeners)->put(listener, ref);
        }
    }

}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::removeReferenceListener(::com::tibbo::aggregate::common::binding::ReferenceListener* listener)
{
    listenersLock)->writeLock())->lock();
    {
        auto finally1 = finally([&] {
            listenersLock)->writeLock())->unlock();
        });
        {
            listeners)->remove(listener);
        }
    }

}

bool com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::isLocalReference(::com::tibbo::aggregate::common::expression::Reference* ref)
{
    return ref)->getSchema() == 0 && ref)->getContext() == 0 && ref)->getEntity() == 0;
}

void com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::processBindings(const std::string & field, int record, bool startup)
{
    listenersLock)->readLock())->lock();
    {
        auto finally2 = finally([&] {
            listenersLock)->readLock())->unlock();
        });
        {
            for (auto _i = listeners)->entrySet())->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    auto const ref = java_cast< ::com::tibbo::aggregate::common::expression::Reference* >(entry)->getValue());
                    auto const listener = java_cast< ::com::tibbo::aggregate::common::binding::ReferenceListener* >(entry)->getKey());
                    if(startup && ::com::tibbo::aggregate::common::util::Util::equals(listener)->getBinding())->getReference())->getSchema(), ::com::tibbo::aggregate::common::expression::Reference::SCHEMA_TABLE())) {
                        continue;
                    }
                    auto rfield = ref)->getField();
                    auto nonLocal = !isLocalReference(ref);
                    auto listenerField = listener)->getBinding())->getReference())->getField();
                    auto targetPointsToCurrentField = listenerField != 0 && listenerField)->equals(field));
                    if((startup && nonLocal && targetPointsToCurrentField) || (rfield != 0 && rfield)->equals(field)))) {
                        if(ref)->getRow() != 0 && (ref)->getRow()))->intValue() == record) {
                            callReferenceChanged(ref, startup ? ::com::tibbo::aggregate::common::binding::EvaluationOptions::STARTUP : ::com::tibbo::aggregate::common::binding::EvaluationOptions::EVENT, listener);
                        }
                        if(ref)->getRow() == 0) {
                            auto clone = ref)->clone();
                            clone)->setRow(ref)->getSchema() == 0 ? record) : static_cast< int  >(0));
                            callReferenceChanged(clone, startup ? ::com::tibbo::aggregate::common::binding::EvaluationOptions::STARTUP : ::com::tibbo::aggregate::common::binding::EvaluationOptions::EVENT, listener);
                        }
                    }
                }
            }
        }
    }

}



java::lang::Class* com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.AbstractDataTableBindingProvider", 69);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider::getClass0()
{
    return class_();
}

