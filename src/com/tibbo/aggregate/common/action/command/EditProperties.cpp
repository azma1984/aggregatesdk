#include "action/command/EditProperties.h"

//
//EditProperties::EditProperties(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//EditProperties::EditProperties()
//    : EditProperties(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//EditProperties::EditProperties(const std::string & title, const std::string & contextName, const std::string & propertiesGroup)
//    : EditProperties(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,contextName,propertiesGroup);
//}
//
//EditProperties::EditProperties(const std::string & title, const std::string & contextName, std::list  properties)
//    : EditProperties(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,contextName,properties);
//}
//
//EditProperties::EditProperties(const std::string & title, DataTablePtr parameters)
//    : EditProperties(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,parameters);
//}
//
//std::string& EditProperties::CF_READ_ONLY()
//{
//
//    return CF_READ_ONLY_;
//}
//std::string EditProperties::CF_READ_ONLY_;
//
//std::string& EditProperties::CF_DYNAMIC()
//{
//
//    return CF_DYNAMIC_;
//}
//std::string EditProperties::CF_DYNAMIC_;
//
//std::string& EditProperties::CF_ASYNC()
//{
//
//    return CF_ASYNC_;
//}
//std::string EditProperties::CF_ASYNC_;
//
//std::string& EditProperties::CF_USE_DOCKABLE_FRAME()
//{
//
//    return CF_USE_DOCKABLE_FRAME_;
//}
//std::string EditProperties::CF_USE_DOCKABLE_FRAME_;
//
//std::string& EditProperties::CF_SINGLE_WINDOW_MODE()
//{
//
//    return CF_SINGLE_WINDOW_MODE_;
//}
//std::string EditProperties::CF_SINGLE_WINDOW_MODE_;
//
//std::string& EditProperties::CF_CONTEXT()
//{
//
//    return CF_CONTEXT_;
//}
//std::string EditProperties::CF_CONTEXT_;
//
//std::string& EditProperties::CF_SLAVES()
//{
//
//    return CF_SLAVES_;
//}
//std::string EditProperties::CF_SLAVES_;
//
//std::string& EditProperties::CF_LOCATION()
//{
//
//    return CF_LOCATION_;
//}
//std::string EditProperties::CF_LOCATION_;
//
//std::string& EditProperties::CF_DASHBOARD()
//{
//
//    return CF_DASHBOARD_;
//}
//std::string EditProperties::CF_DASHBOARD_;
//
//std::string& EditProperties::CF_PROPERTIES()
//{
//
//    return CF_PROPERTIES_;
//}
//std::string EditProperties::CF_PROPERTIES_;
//
//std::string& EditProperties::CF_PROPERTIES_GROUP()
//{
//
//    return CF_PROPERTIES_GROUP_;
//}
//std::string EditProperties::CF_PROPERTIES_GROUP_;
//
//std::string& EditProperties::RF_EDIT_PROPERTIES_RESULT()
//{
//
//    return RF_EDIT_PROPERTIES_RESULT_;
//}
//std::string EditProperties::RF_EDIT_PROPERTIES_RESULT_;
//
//std::string& EditProperties::RF_EDIT_PROPERTIES_CHANGED_PROPERTIES()
//{
//
//    return RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_;
//}
//std::string EditProperties::RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_;
//
//std::string& EditProperties::FIELD_PROPERTIES_PROPERTY()
//{
//
//    return FIELD_PROPERTIES_PROPERTY_;
//}
//std::string EditProperties::FIELD_PROPERTIES_PROPERTY_;
//
//std::string& EditProperties::CF_SLAVES_CONTEXT()
//{
//
//    return CF_SLAVES_CONTEXT_;
//}
//std::string EditProperties::CF_SLAVES_CONTEXT_;
//
//DateTableFormatPtr& EditProperties::CFT_SLAVES()
//{
//
//    return CFT_SLAVES_;
//}
//DateTableFormatPtr EditProperties::CFT_SLAVES_;
//
//DateTableFormatPtr& EditProperties::FT_PROPERTIES()
//{
//
//    return FT_PROPERTIES_;
//}
//DateTableFormatPtr EditProperties::FT_PROPERTIES_;
//
//DateTableFormatPtr& EditProperties::CFT_EDIT_PROPERTIES()
//{
//
//    return CFT_EDIT_PROPERTIES_;
//}
//DateTableFormatPtr EditProperties::CFT_EDIT_PROPERTIES_;
//
//DateTableFormatPtr& EditProperties::RFT_EDIT_PROPERTIES()
//{
//
//    return RFT_EDIT_PROPERTIES_;
//}
//DateTableFormatPtr EditProperties::RFT_EDIT_PROPERTIES_;
//
//void EditProperties::ctor()
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_PROPERTIES(), CFT_EDIT_PROPERTIES_, RFT_EDIT_PROPERTIES_);
//}
//
//void EditProperties::ctor(const std::string & title, const std::string & contextName, const std::string & propertiesGroup)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_PROPERTIES(), title);
//    this->context = contextName;
//    this->propertiesGroup = propertiesGroup;
//}
//
//void EditProperties::ctor(const std::string & title, const std::string & contextName, std::list  properties)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_PROPERTIES(), title);
//    this->context = contextName;
//    this->properties = properties;
//}
//
//void EditProperties::ctor(const std::string & title, DataTablePtr parameters)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_PROPERTIES(), title, parameters, CFT_EDIT_PROPERTIES_);
//}
//
//DateDataTablePtr EditProperties::constructParameters()
//{
//    auto slavesTable = createSlavesTable(slaves);
//    auto table = new DataTable(CFT_EDIT_PROPERTIES_);
//    auto rec = table)->addRecord();
//    rec)->addString(context);
//    rec)->addString(propertiesGroup);
//    auto propertiesTable = new DataTable(FT_PROPERTIES_);
//    if(properties != 0) {
//        for (auto _i = properties)->iterator(); _i->hasNext(); ) {
//            const std::string & property = java_cast< const std::string & >(_i->next());
//            {
//                propertiesTable)->addRecord())->addString(property);
//            }
//        }
//    }
//    rec)->addDataTable(propertiesTable);
//    rec)->addBoolean(::java::lang::Boolean::valueOf(singleWindowMode));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(useDockableFrame));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(readOnly));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(dynamic));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(async));
//    rec)->addDataTable(slavesTable);
//    rec)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< DataTablePtr >(0));
//    rec)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< DataTablePtr >(0));
//    return rec)->wrap();
//}
//
//DateDataTablePtr EditProperties::createSlavesTable(std::list  slaves)
//{
//    if(slaves == 0) {
//        return 0;
//    }
//    auto slavesTable = new DataTable(CFT_SLAVES_);
//    for (auto _i = slaves)->iterator(); _i->hasNext(); ) {
//        const std::string & slave = java_cast< const std::string & >(_i->next());
//        {
//            slavesTable)->addRecord())->addString(slave);
//        }
//    }
//    return slavesTable;
//}
//
//std::list  EditProperties::getSlaves(::com::tibbo::aggregate::common::action::GenericActionCommandPtr cmd, ContextPtr base, CallerControllerPtr caller)
//{
//
//    auto slavesTable = cmd)->getParameters())->rec())->getDataTable(CF_SLAVES_);
//    if(slavesTable == 0) {
//        return 0;
//    }
//    std::list  slaves = new ::java::util::LinkedList();
//    for (auto _i = slavesTable)->iterator(); _i->hasNext(); ) {
//        DataRecordPtr rec = java_cast< DataRecordPtr >(_i->next());
//        {
//            auto context = rec)->getString(CF_SLAVES_CONTEXT_);
//            auto slave = java_cast< ContextPtr >(base)->get(context, caller));
//            if(slave != 0) {
//                slaves)->add(slave));
//            }
//        }
//    }
//    return slaves;
//}
//
//std::string EditProperties::getContext()
//{
//    return context;
//}
//
//void EditProperties::setContext(const std::string & contextName)
//{
//    this->context = contextName;
//}
//
//std::string EditProperties::getPropertiesGroup()
//{
//    return propertiesGroup;
//}
//
//void EditProperties::setPropertiesGroup(const std::string & propertiesGroup)
//{
//    this->propertiesGroup = propertiesGroup;
//}
//
//std::list  EditProperties::getProperties()
//{
//    return properties;
//}
//
//void EditProperties::setProperties(std::list  properties)
//{
//    this->properties = properties;
//}
//
//std::list  EditProperties::getSlaves()
//{
//    return slaves;
//}
//
//void EditProperties::setSlaves(std::list  slaves)
//{
//    this->slaves = slaves;
//}
//
//bool EditProperties::isReadOnly()
//{
//    return readOnly;
//}
//
//void EditProperties::setReadOnly(bool readOnly)
//{
//    this->readOnly = readOnly;
//}
//
//bool EditProperties::isDynamic()
//{
//    return dynamic;
//}
//
//void EditProperties::setDynamic(bool dynamic)
//{
//    this->dynamic = dynamic;
//}
//
//bool EditProperties::isUseDockableFrame()
//{
//    return useDockableFrame;
//}
//
//void EditProperties::setUseDockableFrame(bool useDockableFrame)
//{
//    this->useDockableFrame = useDockableFrame;
//}
//
//bool EditProperties::isSingleWindowMode()
//{
//    return singleWindowMode;
//}
//
//void EditProperties::setSingleWindowMode(bool singleWindowMode)
//{
//    this->singleWindowMode = singleWindowMode;
//}
//
//bool EditProperties::isAsync()
//{
//    return async;
//}
//
//void EditProperties::setAsync(bool async)
//{
//    this->async = async;
//}
//
//com::tibbo::aggregate::common::util::WindowLocationPtr EditProperties::getLocation()
//{
//    return location;
//}
//
//void EditProperties::setLocation(WindowLocationPtr location)
//{
//    this->location = location;
//}
//
//com::tibbo::aggregate::common::util::DashboardPropertiesPtr EditProperties::getDashboard()
//{
//    return dashboard;
//}
//
//void EditProperties::setDashboard(DashboardPropertiesPtr dashboard)
//{
//    this->dashboard = dashboard;
//}
//
//
//
//java::lang::Class* EditProperties::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.EditProperties", 56);
//    return c;
//}
//
//void EditProperties::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CF_READ_ONLY_ = u"readOnly"_j;
//    CF_DYNAMIC_ = u"dynamic"_j;
//    CF_ASYNC_ = u"async"_j;
//    CF_USE_DOCKABLE_FRAME_ = u"useDockableFrame"_j;
//    CF_SINGLE_WINDOW_MODE_ = u"singleWindowMode"_j;
//    CF_CONTEXT_ = u"context"_j;
//    CF_SLAVES_ = u"slaves"_j;
//    CF_LOCATION_ = u"location"_j;
//    CF_DASHBOARD_ = u"dashboard"_j;
//    CF_PROPERTIES_ = u"properties"_j;
//    CF_PROPERTIES_GROUP_ = u"propertiesGroup"_j;
//    RF_EDIT_PROPERTIES_RESULT_ = u"result"_j;
//    RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_ = u"changedProperties"_j;
//    FIELD_PROPERTIES_PROPERTY_ = u"property"_j;
//    CF_SLAVES_CONTEXT_ = u"context"_j;
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
//        CFT_SLAVES_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_SLAVES_CONTEXT_)
//            ->append(u"><S>"_j)->toString()))->wrap();
//        FT_PROPERTIES_ = datatable::FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_PROPERTIES_PROPERTY_)
//            ->append(u"><S><D="_j)
//            ->append(Cres::get())->getString(u"property"_j))
//            ->append(u">"_j)->toString()))->wrap();
//        CFT_EDIT_PROPERTIES_ = new TableFormat(int(1), int(1));
//        {
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_CONTEXT_)
//                ->append(u"><S><D="_j)
//                ->append(Cres::get())->getString(u"context"_j))
//                ->append(u"><E="_j)
//                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
//                ->append(u">"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_PROPERTIES_GROUP_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"group"_j))
//                ->append(u">"_j)->toString());
//            auto properties = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(CF_PROPERTIES_)
//                ->append(u"><T><D="_j)
//                ->append(Cres::get())->getString(u"properties"_j))
//                ->append(u">"_j)->toString());
//            properties)->setDefault(new DataTable(FT_PROPERTIES_, true));
//            CFT_EDIT_PROPERTIES_)->addField(properties);
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SINGLE_WINDOW_MODE_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"acSingleWindowMode"_j))
//                ->append(u">"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_USE_DOCKABLE_FRAME_)
//                ->append(u"><B>"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_READ_ONLY_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"acInitiallyReadOnly"_j))
//                ->append(u">"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DYNAMIC_)
//                ->append(u"><B>"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ASYNC_)
//                ->append(u"><B>"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_SLAVES_)
//                ->append(u"><T><F=N>"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
//                ->append(u"><T><F=N>"_j)->toString());
//            CFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
//                ->append(u"><T><F=N>"_j)->toString());
//            auto ref = std::stringBuilder().append(CF_PROPERTIES_)->append(u"#"_j)
//                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString();
//            auto exp = std::stringBuilder().append(u"{"_j)->append(CF_PROPERTIES_GROUP_)
//                ->append(u"} == null"_j)->toString();
//            CFT_EDIT_PROPERTIES_)->addBinding(ref, exp);
//        }
//        RFT_EDIT_PROPERTIES_ = new TableFormat(int(1), int(1));
//        {
//            RFT_EDIT_PROPERTIES_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_EDIT_PROPERTIES_RESULT_)
//                ->append(u"><S>"_j)->toString());
//            auto changedProperties = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_)
//                ->append(u"><T>"_j)->toString());
//            changedProperties)->setDefault(new DataTable(FT_PROPERTIES_, true));
//            RFT_EDIT_PROPERTIES_)->addField(changedProperties);
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}

