// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.java
#include <com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.h"

//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/LinkedHashSet.h"
//#include <java/util/Map_Entry.h"
//#include <java/util/Map.h"
//#include <java/util/Set.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_ReadLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock_WriteLock.h"
//#include <java/util/concurrent/locks/ReentrantReadWriteLock.h"

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
Dateencoding::KnownFormatCollector::KnownFormatCollector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::KnownFormatCollector::KnownFormatCollector() 
    : KnownFormatCollector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateencoding::KnownFormatCollector::init()
{
    formatIds = new ::java::util::LinkedHashMap();
    lock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

void Dateencoding::KnownFormatCollector::ctor()
{
    super::ctor();
    init();
}

bool Dateencoding::KnownFormatCollector::isKnown(int formatId)
{
    lock)->readLock())->lock();
    {
        auto finally0 = finally([&] {
            lock)->readLock())->unlock();
        });
        {
            return formatIds)->containsKey(formatId));
        }
    }

}

bool Dateencoding::KnownFormatCollector::isMarked(int formatId)
{
    lock)->readLock())->lock();
    {
        auto finally1 = finally([&] {
            lock)->readLock())->unlock();
        });
        {
            auto marked = java_cast< ::java::lang::Boolean* >(formatIds)->get(formatId)));
            return marked != 0 ? (marked))->booleanValue() : false;
        }
    }

}

void Dateencoding::KnownFormatCollector::makeKnown(int formatId, bool mark)
{
    lock)->writeLock())->lock();
    {
        auto finally2 = finally([&] {
            lock)->writeLock())->unlock();
        });
        {
            formatIds)->put(formatId), ::java::lang::Boolean::valueOf(mark));
        }
    }

}

void Dateencoding::KnownFormatCollector::markAll()
{
    ::std::set  idsToMark = new ::java::util::LinkedHashSet();
    lock)->readLock())->lock();
    {
        auto finally3 = finally([&] {
            lock)->readLock())->unlock();
        });
        {
            for (auto _i = formatIds)->entrySet())->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    if(!(java_cast< ::java::lang::Boolean* >(entry)->getValue())))->booleanValue()) {
                        idsToMark)->add(java_cast< int  >(entry)->getKey())));
                    }
                }
            }
        }
    }

    if(idsToMark)->size() == 0) {
        return;
    }
    lock)->writeLock())->lock();
    {
        auto finally4 = finally([&] {
            lock)->writeLock())->unlock();
        });
        {
            for (auto _i = idsToMark)->iterator(); _i->hasNext(); ) {
                int  id = java_cast< int  >(_i->next());
                {
                    formatIds)->put(id, ::java::lang::Boolean::valueOf(true));
                }
            }
        }
    }

}



java::lang::Class* Dateencoding::KnownFormatCollector::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.KnownFormatCollector", 66);
    return c;
}

java::lang::Class* Dateencoding::KnownFormatCollector::getClass0()
{
    return class_();
}

