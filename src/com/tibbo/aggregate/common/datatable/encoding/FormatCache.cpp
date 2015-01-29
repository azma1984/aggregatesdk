// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/FormatCache.java
#include "datatable/encoding/FormatCache.h"

#include "Log.h"
#include "context/Context.h"
#include "context/Contexts.h"
#include "context/FunctionDefinition.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "protocol/AbstractAggreGateDeviceController.h"
#include "protocol/ProxyContext.h"
#include "protocol/RemoteContextManager.h"
#include "server/CommonServerFormats.h"
#include "server/UtilitiesContextConstants.h"
#include "util/Util.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/InterruptedException.h"
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
#include <ObjectArray.h"

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
extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
Dateencoding::FormatCache::FormatCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Dateencoding::FormatCache::FormatCache(::com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController* controller) 
    : FormatCache(*static_cast< ::default_init_tag* >(0))
{
    ctor(controller);
}

Dateencoding::FormatCache::FormatCache() 
    : FormatCache(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void Dateencoding::FormatCache::init()
{
    cache = new ::java::util::LinkedHashMap(int(100), 0.75f);
    cacheLock = new ::java::util::concurrent::locks::ReentrantReadWriteLock();
}

const int Dateencoding::FormatCache::RETRIES;

const int Dateencoding::FormatCache::TIMEOUT;

void Dateencoding::FormatCache::ctor(::com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController* controller)
{
    super::ctor();
    init();
    this->controller = controller;
}

void Dateencoding::FormatCache::ctor()
{
    super::ctor();
    init();
}

void Dateencoding::FormatCache::put(int id, TableFormat* format)
{
    cacheLock)->writeLock())->lock();
    {
        auto finally0 = finally([&] {
            cacheLock)->writeLock())->unlock();
        });
        {
            if(format == 0) {
                throw new ::java::lang::IllegalArgumentException(u"Format is NULL"_j);
            }
            if(java_cast< TableFormat* >(cache)->put(id), format)) == 0 && Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Cached format as #"_j)->append(id)
                    ->append(u": "_j)
                    ->append(format))->toString());
            }
            {
                synchronized synchronized_0(this);
                {
                    notifyAll();
                }
            }
        }
    }

}

int Dateencoding::FormatCache::add(TableFormat* format)
{
    cacheLock)->writeLock())->lock();
    {
        auto finally1 = finally([&] {
            cacheLock)->writeLock())->unlock();
        });
        {
            if(format == 0) {
                throw new ::java::lang::IllegalArgumentException(u"Format is NULL"_j);
            }
            auto id = format)->hashCode();
            auto previous = java_cast< TableFormat* >(cache)->put(id), format));
            if(previous != 0 && !::com::tibbo::aggregate::common::util::Util::equals(format, previous)) {
                Log::PROTOCOL_CACHING())->warn(std::stringBuilder().append(u"Found two non-equal formats with equal ID ("_j)->append(id)
                    ->append(u"): "_j)
                    ->append(format))
                    ->append(u" and "_j)
                    ->append(previous))->toString());
            }
            {
                synchronized synchronized_1(this);
                {
                    notifyAll();
                }
            }
            if(!format)->isImmutable()) {
                Log::PROTOCOL_CACHING())->warn(std::stringBuilder().append(u"Cached mutable format as #"_j)->append(id)
                    ->append(u": "_j)
                    ->append(format))->toString(), new ::java::lang::Exception());
            }
            if(Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Cached format as #"_j)->append(id)
                    ->append(u": "_j)
                    ->append(format))->toString());
            }
            return id;
        }
    }

}

java::lang::Integer* Dateencoding::FormatCache::getId(TableFormat* format)
{
    cacheLock)->readLock())->lock();
    {
        auto finally2 = finally([&] {
            cacheLock)->readLock())->unlock();
        });
        {
            auto id = format)->hashCode();
            return cache)->containsKey(id)) ? id) : static_cast< int  >(0);
        }
    }

}

DateTableFormat* Dateencoding::FormatCache::getCachedVersion(TableFormat* format)
{
    cacheLock)->readLock())->lock();
    {
        auto finally3 = finally([&] {
            cacheLock)->readLock())->unlock();
        });
        {
            auto cached = format != 0 ? java_cast< TableFormat* >(cache)->get(format)->hashCode()))) : static_cast< TableFormat* >(0);
            return cached != 0 ? cached : format;
        }
    }

}

DateTableFormat* Dateencoding::FormatCache::get(int id)
{
    TableFormat* result;
    auto retry = int(0);
    do {
        cacheLock)->readLock())->lock();
        {
            auto finally4 = finally([&] {
                cacheLock)->readLock())->unlock();
            });
            {
                result = java_cast< TableFormat* >(cache)->get(id)));
            }
        }

        if(result == 0) {
            if(controller != 0) {
                try {
                    if(Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                        Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Requesting remote format #"_j)->append(id)->toString());
                    }
                    DataTable* output;
                    auto utilitiesContext = java_cast< ::com::tibbo::aggregate::common::protocol::RemoteContextManager* >(controller)->getContextManager()) != 0 ? static_cast< Context* >(java_cast< ::com::tibbo::aggregate::common::protocol::ProxyContext* >(java_cast< ::com::tibbo::aggregate::common::protocol::RemoteContextManager* >(controller)->getContextManager()))->get(Contexts::CTX_UTILITIES()))) : static_cast< Context* >(0);
                    if(utilitiesContext != 0 && utilitiesContext)->getFunctionDefinition(::com::tibbo::aggregate::common::server::UtilitiesContextConstants::F_GET_FORMAT()) != 0) {
                        output = utilitiesContext)->callFunction(::com::tibbo::aggregate::common::server::UtilitiesContextConstants::F_GET_FORMAT(), new voidArray({id))}));
                    } else {
                        auto const input = (new DataRecord(::com::tibbo::aggregate::common::server::CommonServerFormats::FIFT_GET_FORMAT(), new voidArray({id))})))->wrap();
                        output = controller)->callRemoteFunction(Contexts::CTX_UTILITIES(), ::com::tibbo::aggregate::common::server::UtilitiesContextConstants::F_GET_FORMAT(), ::com::tibbo::aggregate::common::server::CommonServerFormats::FOFT_GET_FORMAT(), input);
                    }
                    auto formatData = output)->rec())->getString(::com::tibbo::aggregate::common::server::UtilitiesContextConstants::FOF_GET_FORMAT_DATA());
                    result = new TableFormat(formatData, new ClassicEncodingSettings(false));
                    if(Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                        Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Received explicitely requested remote format #"_j)->append(id)
                            ->append(u": "_j)
                            ->append(result))->toString());
                    }
                    cacheLock)->writeLock())->lock();
                    {
                        auto finally5 = finally([&] {
                            cacheLock)->writeLock())->unlock();
                        });
                        {
                            cache)->put(id), result);
                        }
                    }

                } catch (::java::lang::Exception* ex) {
                    throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Error obtaining format #"_j)->append(id)
                        ->append(u": "_j)
                        ->append(ex)->getMessage())->toString(), ex);
                }
            } else {
                Log::PROTOCOL_CACHING())->warn(std::stringBuilder().append(u"Waiting for format #"_j)->append(id)->toString());
                try {
                    wait(TIMEOUT);
                } catch (::java::lang::InterruptedException* ex) {
                    Log::PROTOCOL_CACHING())->warn(std::stringBuilder().append(u"Interrupted while waiting for format with ID: "_j)->append(id)->toString());
                    return 0;
                }
            }
        }
        retry++;
    } while (result == 0 && retry < RETRIES);
    if(result == 0) {
        Log::PROTOCOL_CACHING())->warn(std::stringBuilder().append(u"Timeout while getting format #"_j)->append(id)
            ->append(u", cache size: "_j)
            ->append(cache)->size())->toString());
        dump();
    }
    return result;
}

void Dateencoding::FormatCache::clear()
{
    cacheLock)->writeLock())->lock();
    {
        auto finally6 = finally([&] {
            cacheLock)->writeLock())->unlock();
        });
        {
            cache)->clear();
        }
    }

}

void Dateencoding::FormatCache::dump()
{
    cacheLock)->readLock())->lock();
    {
        auto finally7 = finally([&] {
            cacheLock)->readLock())->unlock();
        });
        {
            for (auto _i = cache)->entrySet())->iterator(); _i->hasNext(); ) {
                ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
                {
                    Log::PROTOCOL_CACHING())->info(std::stringBuilder().append(u"Format cache entry with ID #"_j)->append(java_cast< int  >(entry)->getKey())))
                        ->append(u": "_j)
                        ->append(java_cast< TableFormat* >(entry)->getValue())))->toString());
                }
            }
        }
    }

}



java::lang::Class* Dateencoding::FormatCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.encoding.FormatCache", 57);
    return c;
}

java::lang::Class* Dateencoding::FormatCache::getClass0()
{
    return class_();
}

