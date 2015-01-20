
#include "datatable/DataTableBindingProvider.h"


  const std::string DataTableBindingProvider::PROPERTY_ENABLED = "enabled";
  const std::string DataTableBindingProvider::PROPERTY_HIDDEN = "hidden";
  const std::string DataTableBindingProvider::PROPERTY_CHOICES = "choices";
  const std::string DataTableBindingProvider::PROPERTY_OPTIONS = "options";

//DataTableBindingProvider::DataTableBindingProvider(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//DataTableBindingProvider::DataTableBindingProvider(DataTable* table) 
//    : DataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(table);
//}
//
//DataTableBindingProvider::DataTableBindingProvider(DataTable* table, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector) 
//    : DataTableBindingProvider(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(table,errorCollector);
//}
//
//std::string& DataTableBindingProvider::PROPERTY_ENABLED()
//{
//    
//    return PROPERTY_ENABLED_;
//}
//std::string DataTableBindingProvider::PROPERTY_ENABLED_;
//
//std::string& DataTableBindingProvider::PROPERTY_HIDDEN()
//{
//    
//    return PROPERTY_HIDDEN_;
//}
//std::string DataTableBindingProvider::PROPERTY_HIDDEN_;
//
//std::string& DataTableBindingProvider::PROPERTY_CHOICES()
//{
//    
//    return PROPERTY_CHOICES_;
//}
//std::string DataTableBindingProvider::PROPERTY_CHOICES_;
//
//std::string& DataTableBindingProvider::PROPERTY_OPTIONS()
//{
//    
//    return PROPERTY_OPTIONS_;
//}
//std::string DataTableBindingProvider::PROPERTY_OPTIONS_;
//
//com::tibbo::aggregate::common::binding::EvaluationOptions*& DataTableBindingProvider::EVALUATION_OPTIONS()
//{
//    
//    return EVALUATION_OPTIONS_;
//}
//com::tibbo::aggregate::common::binding::EvaluationOptions* DataTableBindingProvider::EVALUATION_OPTIONS_;
//
//void DataTableBindingProvider::ctor(DataTable* table)
//{
//    super::ctor();
//    this->table = table;
//}
//
//void DataTableBindingProvider::ctor(DataTable* table, ::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector)
//{
//    super::ctor(errorCollector);
//    this->headless = true;
//    this->table = table;
//}
//
//java::util::Map* DataTableBindingProvider::createBindings()
//{
//    std::map bm = new ::java::util::LinkedHashMap();
//    for (auto _i = table)->getFormat())->getBindings())->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::binding::Binding* b = java_cast< ::com::tibbo::aggregate::common::binding::Binding* >(_i->next());
//        {
//            bm)->put(b, EVALUATION_OPTIONS_);
//        }
//    }
//    return bm;
//}
//
//void DataTableBindingProvider::callReferenceChanged(Reference* cause, int method, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener)
//{
//    try {
//        listener)->referenceChanged(cause, 0, 0);
//    } catch (::com::tibbo::aggregate::common::binding::BindingException* ex) {
//        processError(listener)->getBinding(), method, cause, static_cast< ::java::lang::Exception* >(ex));
//    }
//}
//
//com::tibbo::aggregate::common::binding::ReferenceWriter* DataTableBindingProvider::getExternalReferenceWriter()
//{
//    return 0;
//}
//
//void DataTableBindingProvider::setCellValue(void* value, int row, const std::string & field)
//{
//    table)->getRecord(row))->setValue(field, value);
//}
//
//void DataTableBindingProvider::setEnabled(void* value, int row, const std::string & field)
//{
//}
//
//void DataTableBindingProvider::setHidden(void* value, int row, const std::string & field)
//{
//    if(headless) {
//        return;
//    }
//    bool const hidden = (java_cast< ::java::lang::Boolean* >(value)))->booleanValue();
//    try {
//        auto ff = getFieldFormat(row, field);
//        if(ff != 0) {
//            ff)->setHidden(hidden);
//        }
//    } catch (::com::tibbo::aggregate::common::binding::BindingException* ex) {
//        Log::BINDINGS())->error(std::stringBuilder().append(u"Error hidden status setting field "_j)->append(field)
//            ->append(u" in row "_j)
//            ->append(row)
//            ->append(u" to "_j)
//            ->append(hidden)->toString(), ex);
//    }
//}
//
//void DataTableBindingProvider::setOptions(void* value, int row, const std::string & field)
//{
//}
//
//void DataTableBindingProvider::setSelectionValues(void* value, int row, const std::string & field)
//{
//}
//
//void DataTableBindingProvider::setEditorEnabled(bool enabled)
//{
//}
//
//void DataTableBindingProvider::start()
//{
//    for (auto i = int(0); i < table)->getRecordCount(); i++) {
//        for (auto _i = table)->getFormat())->iterator(); _i->hasNext(); ) {
//            FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
//            {
//                processBindings(ff)->getName(), i, true);
//            }
//        }
//    }
//}
//
//void DataTableBindingProvider::stop()
//{
//}
//
//void DataTableBindingProvider::writeReference(int method, Reference* ref, Reference* cause, void* value, ::com::tibbo::aggregate::common::binding::ChangeCache* cache) /* throws(BindingException) */
//{
//    auto row = ref)->getRow() != 0 ? ref)->getRow() : (cause != 0 && cause)->getRow() != 0) ? cause)->getRow() : static_cast< int  >(0);
//    auto clone = ref)->clone();
//    clone)->setRow(row);
//    writeReference(clone, value);
//}
//
//DateFieldFormat* DataTableBindingProvider::getFieldFormat(int row, const std::string & field) /* throws(BindingException) */
//{
//    if(row >= table)->getRecordCount()) {
//        throw new ::com::tibbo::aggregate::common::binding::BindingException(std::stringBuilder().append(Cres::get())->getString(u"dtRecordNotAvail"_j))->append(row)->toString());
//    }
//    auto ff = table)->getRecord(row))->getFormat())->getField(field);
//    if(ff == 0) {
//        throw new ::com::tibbo::aggregate::common::binding::BindingException(std::stringBuilder().append(Cres::get())->getString(u"dtFieldNotAvail"_j))->append(field)->toString());
//    }
//    return ff;
//}
//
//
//
//java::lang::Class* DataTableBindingProvider::class_()
//{
//    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableBindingProvider", 61);
//    return c;
//}
//
//void DataTableBindingProvider::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    PROPERTY_ENABLED_ = u"enabled"_j;
//    PROPERTY_HIDDEN_ = u"hidden"_j;
//    PROPERTY_CHOICES_ = u"choices"_j;
//    PROPERTY_OPTIONS_ = u"options"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        EVALUATION_OPTIONS_ = new ::com::tibbo::aggregate::common::binding::EvaluationOptions(true, false, static_cast< long >(int(0)));
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//
//void DataTableBindingProvider::writeReference(Reference* ref, void* value)
//{
//    super::writeReference(ref, value);
//}
//

