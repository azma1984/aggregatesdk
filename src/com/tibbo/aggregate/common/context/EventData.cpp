#include "context/EventData.h"

//EventData::EventData(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//EventData::EventData(EventDefinition* definition) 
//    : EventData(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(definition);
//}
//
//void EventData::init()
//{
//    listeners = new ContextEventListenerSet();
//    history = ::java::util::Collections::synchronizedList(new ::java::util::LinkedList());
//}
//
//void EventData::ctor(EventDefinition* definition)
//{
//    super::ctor();
//    init();
//    this->definition = definition;
//}
//
//void EventData::registerFiredEvent()
//{
//    fireCount++;
//}
//
//EventDefinition* EventData::getDefinition()
//{
//    return definition;
//}
//
//std::set  EventData::getListeners()
//{
//    return listeners)->getListeners();
//}
//
//std::set  EventData::getListenersInfo()
//{
//    return listeners)->getListenersInfo();
//}
//
//long EventData::getFireCount()
//{
//    return fireCount;
//}
//
//bool EventData::addListener(ContextEventListener* listener, bool weak)
//{
//    return listeners)->addListener(listener, weak);
//}
//
//bool EventData::removeListener(ContextEventListener* listener)
//{
//    return listeners)->removeListener(listener);
//}
//
//void EventData::clearListeners()
//{
//    listeners)->clear();
//}
//
//void EventData::dispatch(Event* event)
//{
//    try {
//        auto logger = ::com::tibbo::aggregate::common::Log::CONTEXT_EVENTS();
//        auto listenerSet = listeners)->getListeners();
//        if(logger)->isDebugEnabled()) {
//            logger)->debug(std::stringBuilder().append(u"Dispatching event '"_j)->append(event))
//                ->append(u"', "_j)
//                ->append(listenerSet)->size())
//                ->append(u" listeners"_j)->toString());
//        }
//        for (auto _i = listenerSet)->iterator(); _i->hasNext(); ) {
//            ContextEventListener* el = java_cast< ContextEventListener* >(_i->next());
//            {
//                try {
//                    if(!el)->shouldHandle(event)) {
//                        if(logger)->isDebugEnabled()) {
//                            logger)->debug(std::stringBuilder().append(u"Listener '"_j)->append(el))
//                                ->append(u"' does not want to handle event: "_j)
//                                ->append(event))->toString());
//                        }
//                        continue;
//                    }
//                    if(logger)->isDebugEnabled()) {
//                        logger)->debug(std::stringBuilder().append(u"Listener '"_j)->append(el))
//                            ->append(u"' is going to handle event: "_j)
//                            ->append(event))->toString());
//                    }
//                    el)->handle(event);
//                } catch (::java::lang::Exception* ex) {
//                    Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Error handling event '"_j)->append(event)->toString())
//                        ->append(u"'"_j)->toString(), ex);
//                }
//            }
//        }
//    } catch (::java::lang::Throwable* ex) {
//        Log::CONTEXT_EVENTS())->error(std::stringBuilder().append(u"Unexpected error occurred while dispatching event '"_j)->append(event))
//            ->append(u"'"_j)->toString(), ex);
//    }
//}
//
//Event* EventData::store(Event* event, int  customMemoryStorageSize)
//{
//    auto memoryStorateSize = customMemoryStorageSize != 0 ? customMemoryStorageSize : definition)->getMemoryStorageSize();
//    if(memoryStorateSize == 0) {
//        return 0;
//    }
//    Event* duplicate;
//    {
//        synchronized synchronized_0(history);
//        {
//            for (auto *iterator = history)->iterator(); iterator)->hasNext(); ) {
//                auto cur = java_cast< Event* >(iterator)->next());
//                if(cur)->getExpirationtime() != 0 && cur)->getExpirationtime())->getTime() < ::java::lang::System::currentTimeMillis()) {
//                    iterator)->remove();
//                    continue;
//                }
//                if(history)->size() > (memoryStorateSize))->intValue()) {
//                    iterator)->remove();
//                    continue;
//                }
//                if(event)->getDeduplicationId() != 0 && ::com::tibbo::aggregate::common::util::Util::equals(event)->getDeduplicationId(), cur)->getDeduplicationId())) {
//                    if(duplicate != 0) {
//                        Log::CONTEXT_EVENTS())->warn(std::stringBuilder().append(u"Event history of event "_j)->append(event))
//                            ->append(u" contains more than one duplicate with ID: "_j)
//                            ->append(event)->getDeduplicationId())->toString());
//                    }
//                    duplicate = cur;
//                }
//            }
//        }
//    }
//    if(duplicate == 0) {
//        history)->add(event));
//        return 0;
//    } else {
//        Log::CONTEXT_EVENTS())->debug(std::stringBuilder().append(u"Found duplicate of event "_j)->append(event))
//            ->append(u" (duplicate ID: "_j)
//            ->append(event)->getDeduplicationId())
//            ->append(u"): "_j)
//            ->append(duplicate))->toString());
//        duplicate)->setCreationtime(event)->getCreationtime());
//        duplicate)->setCount(duplicate)->getCount() + int(1));
//        return duplicate;
//    }
//}
//
//std::list  EventData::getHistory()
//{
//    return new ::java::util::LinkedList(history);
//}
//
//std::string EventData::toString()
//{
//    return std::stringBuilder().append(definition))->append(u" - "_j)
//        ->append(listeners)->size())
//        ->append(u" listeners"_j)->toString();
//}
//
//int EventData::compareTo(EventData* d)
//{
//    return definition)->compareTo(d)->getDefinition());
//}
//
//int EventData::compareTo(void* arg0)
//{ 
//    return compareTo(dynamic_cast< EventData* >(arg0));
//}
//
//
//

