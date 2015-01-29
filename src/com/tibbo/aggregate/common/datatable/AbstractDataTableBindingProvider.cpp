// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.java
#include "datatable/AbstractDataTableBindingProvider.h"

#include "Log.h"
#include "binding/Binding.h"
#include "binding/EvaluationOptions.h"
#include "binding/ReferenceListener.h"
#include "binding/ReferenceWriter.h"
#include "datatable/DataTableBindingProvider.h"
#include "expression/Reference.h"
#include "util/Util.h"
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
DateAbstractDataTableBindingProvider::AbstractDataTableBindingProvider(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateAbstractDataTableBindingProvider::AbstractDataTableBindingProvider() 
    : AbstractDataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DateAbstractDataTableBindingProvider::AbstractDataTableBindingProvider(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector) 
    : AbstractDataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor(errorCollector);
}

void DateAbstractDataTableBindingProvider::init()
{
    listeners = new ::java::util::LinkedHashMap();
    listenersLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

void DateAbstractDataTableBindingProvider::ctor()
{
    super::ctor();
    init();
}

void DateAbstractDataTableBindingProvider::ctor(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector)
{
    super::ctor(errorCollector);
    init();
}

void DateAbstractDataTableBindingProvider::writeReference(Reference* ref, void* value) /* throws(BindingException) */
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

void DateAbstractDataTableBindingProvider::writeToEditor(const std::string & property, void* value)
{
    if(DataTableBindingProvider::PROPERTY_ENABLED())->equals(property))) {
        setEditorEnabled((util::Util::convertToBoolean(value, true, false)))->booleanValue());
    }
}

void DateAbstractDataTableBindingProvider::writeToField(int row, const std::string & field, const std::string & property, void* value) /* throws(BindingException) */
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

int DateAbstractDataTableBindingProvider::getListenerCount()
{
    return listeners)->size();
}

java::util::Map* DateAbstractDataTableBindingProvider::getListeners()
{
    return listeners;
}

java::util::concurrent::locks::ReentrantReadWriteLock* DateAbstractDataTableBindingProvider::getListenersLock()
{
    return listenersLock;
}

void DateAbstractDataTableBindingProvider::addReferenceListener(Reference* ref, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener) /* throws(BindingException) */
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

void DateAbstractDataTableBindingProvider::removeReferenceListener(::com::tibbo::aggregate::common::binding::ReferenceListener* listener)
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

bool DateAbstractDataTableBindingProvider::isLocalReference(Reference* ref)
{
    return ref)->getSchema() == 0 && ref)->getContext() == 0 && ref)->getEntity() == 0;
}

void DateAbstractDataTableBindingProvider::processBindings(const std::string & field, int record, bool startup)
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
                    auto const ref = java_cast< Reference* >(entry)->getValue());
                    auto const listener = java_cast< ::com::tibbo::aggregate::common::binding::ReferenceListener* >(entry)->getKey());
                    if(startup && ::com::tibbo::aggregate::common::util::Util::equals(listener)->getBinding())->getReference())->getSchema(), Reference::SCHEMA_TABLE())) {
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



java::lang::Class* DateAbstractDataTableBindingProvider::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.AbstractDataTableBindingProvider", 69);
    return c;
}

java::lang::Class* DateAbstractDataTableBindingProvider::getClass0()
{
    return class_();
}

