#include "binding/ChangeCache.h"



//ChangeCache::ChangeCache(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//ChangeCache::ChangeCache()
//    : ChangeCache(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//void ChangeCache::ctor()
//{
//    super::ctor();
//    init();
//}
//
//void ChangeCache::init()
//{
//    variableChanges = new ::java::util::Hashtable();
//}
//
//void ChangeCache::setVariableField(ContextPtr context, const std::string & variable, const std::string & field, int record, AgObjectPtr value, CallerControllerPtr cc)
//{
//    auto changes = java_cast< std::map >(variableChanges)->get(context));
//    if(changes == 0) {
//        changes = new ::java::util::Hashtable();
//        variableChanges)->put(context, changes);
//    }
//    auto table = java_cast< DataTablePtr >(changes)->get(variable));
//    if(table == 0) {
//        table = context)->getVariable(variable, cc);
//        changes)->put(variable, table);
//    }
//    table)->getRecord(record))->setValue(field, value);
//}
//
//void ChangeCache::commit(BindingProviderPtr provider, CallerControllerSelector* selector)
//{
//    for (auto _i = variableChanges)->entrySet())->iterator(); _i->hasNext(); ) {
//        ::java::util::Map_Entry* ce = java_cast< ::java::util::Map_Entry* >(_i->next());
//        {
//            for (auto _i = java_cast< std::map >(ce)->getValue()))->entrySet())->iterator(); _i->hasNext(); ) {
//                ::java::util::Map_Entry* ve = java_cast< ::java::util::Map_Entry* >(_i->next());
//                {
//                    try {
//                        auto cc = selector)->select(java_cast< ContextPtr >(ce)->getKey()), java_cast< const std::string & >(ve)->getKey()), ContextUtils::ENTITY_VARIABLE);
//                        java_cast< ContextPtr >(ce)->getKey()))->setVariable(java_cast< const std::string & >(ve)->getKey()), cc, java_cast< DataTablePtr >(ve)->getValue()));
//                    } catch (::java::lang::Exception* ex) {
//                        provider)->processError(0, EvaluationOptions::EVENT, 0, ex);
//                    }
//                }
//            }
//        }
//    }
//}
//
//

