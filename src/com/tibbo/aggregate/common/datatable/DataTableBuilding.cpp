
#include "datatable/DataTableBuilding.h"



//DateDataTableBuilding::DataTableBuilding(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//DateDataTableBuilding::DataTableBuilding()
//    : DataTableBuilding(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_MIN_RECORDS()
//{
//    
//    return FIELD_TABLE_FORMAT_MIN_RECORDS_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_MIN_RECORDS_;
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_MAX_RECORDS()
//{
//    
//    return FIELD_TABLE_FORMAT_MAX_RECORDS_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_MAX_RECORDS_;
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_FIELDS()
//{
//    
//    return FIELD_TABLE_FORMAT_FIELDS_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_FIELDS_;
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_REORDERABLE()
//{
//    
//    return FIELD_TABLE_FORMAT_REORDERABLE_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_REORDERABLE_;
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_UNRESIZABLE()
//{
//    
//    return FIELD_TABLE_FORMAT_UNRESIZABLE_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_UNRESIZABLE_;
//
//std::string& DateDataTableBuilding::FIELD_TABLE_FORMAT_BINDINGS()
//{
//    
//    return FIELD_TABLE_FORMAT_BINDINGS_;
//}
//std::string DateDataTableBuilding::FIELD_TABLE_FORMAT_BINDINGS_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_OLDNAME()
//{
//    
//    return FIELD_FIELDS_FORMAT_OLDNAME_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_OLDNAME_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_NAME()
//{
//    
//    return FIELD_FIELDS_FORMAT_NAME_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_NAME_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_TYPE()
//{
//    
//    return FIELD_FIELDS_FORMAT_TYPE_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_TYPE_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_DESCRIPTION()
//{
//    
//    return FIELD_FIELDS_FORMAT_DESCRIPTION_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_DESCRIPTION_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_DEFAULT_VALUE()
//{
//    
//    return FIELD_FIELDS_FORMAT_DEFAULT_VALUE_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_DEFAULT_VALUE_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_HIDDEN()
//{
//    
//    return FIELD_FIELDS_FORMAT_HIDDEN_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_HIDDEN_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_INLINE()
//{
//    
//    return FIELD_FIELDS_FORMAT_INLINE_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_INLINE_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_READONLY()
//{
//    
//    return FIELD_FIELDS_FORMAT_READONLY_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_READONLY_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_NULLABLE()
//{
//    
//    return FIELD_FIELDS_FORMAT_NULLABLE_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_NULLABLE_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_KEY()
//{
//    
//    return FIELD_FIELDS_FORMAT_KEY_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_KEY_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_SELVALS()
//{
//    
//    return FIELD_FIELDS_FORMAT_SELVALS_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_SELVALS_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_EXTSELVALS()
//{
//    
//    return FIELD_FIELDS_FORMAT_EXTSELVALS_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EXTSELVALS_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_HELP()
//{
//    
//    return FIELD_FIELDS_FORMAT_HELP_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_HELP_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR()
//{
//    
//    return FIELD_FIELDS_FORMAT_EDITOR_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR_;
//
//std::string& DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR_OPTIONS()
//{
//    
//    return FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_;
//}
//std::string DateDataTableBuilding::FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_;
//
//std::string& DateDataTableBuilding::FIELD_SELECTION_VALUES_VALUE()
//{
//    
//    return FIELD_SELECTION_VALUES_VALUE_;
//}
//std::string DateDataTableBuilding::FIELD_SELECTION_VALUES_VALUE_;
//
//std::string& DateDataTableBuilding::FIELD_SELECTION_VALUES_DESCRIPTION()
//{
//    
//    return FIELD_SELECTION_VALUES_DESCRIPTION_;
//}
//std::string DateDataTableBuilding::FIELD_SELECTION_VALUES_DESCRIPTION_;
//
//std::string& DateDataTableBuilding::FIELD_BINDINGS_TARGET()
//{
//    
//    return FIELD_BINDINGS_TARGET_;
//}
//std::string DateDataTableBuilding::FIELD_BINDINGS_TARGET_;
//
//std::string& DateDataTableBuilding::FIELD_BINDINGS_EXPRESSION()
//{
//    
//    return FIELD_BINDINGS_EXPRESSION_;
//}
//std::string DateDataTableBuilding::FIELD_BINDINGS_EXPRESSION_;
//
//DateTableFormat*& DateDataTableBuilding::SELECTION_VALUES_FORMAT()
//{
//    
//    return SELECTION_VALUES_FORMAT_;
//}
//DateTableFormat* DateDataTableBuilding::SELECTION_VALUES_FORMAT_;
//
//DateTableFormat*& DateDataTableBuilding::BINDINGS_FORMAT()
//{
//    
//    return BINDINGS_FORMAT_;
//}
//DateTableFormat* DateDataTableBuilding::BINDINGS_FORMAT_;
//
//DateTableFormat*& DateDataTableBuilding::FIELDS_FORMAT()
//{
//    
//    return FIELDS_FORMAT_;
//}
//DateTableFormat* DateDataTableBuilding::FIELDS_FORMAT_;
//
//DateTableFormat*& DateDataTableBuilding::TABLE_FORMAT()
//{
//    
//    return TABLE_FORMAT_;
//}
//DateTableFormat* DateDataTableBuilding::TABLE_FORMAT_;
//
//DateTableFormat* DateDataTableBuilding::createTableFormat(DataTable* formatTable) 
//{
//    
//    return createTableFormat(formatTable, 0, false);
//}
//
//DateTableFormat* DateDataTableBuilding::createTableFormat(DataTable* formatTable, encoding::ClassicEncodingSettings* settings, bool allowNull) 
//{
//    
//    auto rec = formatTable)->rec();
//    int minRecords = (rec)->getInt(FIELD_TABLE_FORMAT_MIN_RECORDS_)))->intValue();
//    int maxRecords = (rec)->getInt(FIELD_TABLE_FORMAT_MAX_RECORDS_)))->intValue();
//    auto fields = rec)->getDataTable(FIELD_TABLE_FORMAT_FIELDS_);
//    if(allowNull && fields)->getRecordCount() == 0) {
//        return 0;
//    }
//    bool reorderable = (rec)->getBoolean(FIELD_TABLE_FORMAT_REORDERABLE_)))->booleanValue();
//    bool unresizable = (rec)->getBoolean(FIELD_TABLE_FORMAT_UNRESIZABLE_)))->booleanValue();
//    auto bindings = rec)->getDataTable(FIELD_TABLE_FORMAT_BINDINGS_);
//    auto format = createTableFormat(minRecords, maxRecords, reorderable, fields, settings);
//    format)->setUnresizable(unresizable);
//    for (auto _i = bindings)->iterator(); _i->hasNext(); ) {
//        DataRecord* binding = java_cast< DataRecord* >(_i->next());
//        {
//            format)->addBinding(binding)->getString(FIELD_BINDINGS_TARGET_), binding)->getString(FIELD_BINDINGS_EXPRESSION_));
//        }
//    }
//    return format;
//}
//
//DateTableFormat* DateDataTableBuilding::createTableFormat(int minRecords, int maxRecords, bool reorderable, DataTable* fields, encoding::ClassicEncodingSettings* settings) 
//{
//    
//    auto rf = new TableFormat(reorderable);
//    rf)->setMinRecords(minRecords);
//    rf)->setMaxRecords(maxRecords);
//    auto hasKeys = false;
//    for (auto _i = fields)->iterator(); _i->hasNext(); ) {
//        DataRecord* fdata = java_cast< DataRecord* >(_i->next());
//        {
//            auto ff = FieldFormat::create(fdata)->getString(FIELD_FIELDS_FORMAT_NAME_), fdata)->getString(FIELD_FIELDS_FORMAT_TYPE_))->charAt(int(0)));
//            ff)->setDescription(fdata)->getString(FIELD_FIELDS_FORMAT_DESCRIPTION_));
//            ff)->setHelp(fdata)->getString(FIELD_FIELDS_FORMAT_HELP_));
//            auto def = fdata)->getString(FIELD_FIELDS_FORMAT_DEFAULT_VALUE_);
//            if(def != 0 && def)->length() > 0) {
//                ff)->setDefault(java_cast< void* >(ff)->valueFromString(def, settings, true)));
//            }
//            ff)->setReadonly((fdata)->getBoolean(FIELD_FIELDS_FORMAT_READONLY_)))->booleanValue());
//            ff)->setNullable((fdata)->getBoolean(FIELD_FIELDS_FORMAT_NULLABLE_)))->booleanValue());
//            if(fdata)->hasField(FIELD_FIELDS_FORMAT_HIDDEN_)) {
//                ff)->setHidden((fdata)->getBoolean(FIELD_FIELDS_FORMAT_HIDDEN_)))->booleanValue());
//            }
//            if(fdata)->hasField(FIELD_FIELDS_FORMAT_INLINE_)) {
//                ff)->setInlineData((fdata)->getBoolean(FIELD_FIELDS_FORMAT_INLINE_)))->booleanValue());
//            }
//            auto key = fdata)->getFormat())->hasField(FIELD_FIELDS_FORMAT_KEY_) ? (fdata)->getBoolean(FIELD_FIELDS_FORMAT_KEY_)))->booleanValue() : false;
//            ff)->setKeyField(key);
//            if(key) {
//                hasKeys = true;
//            }
//            auto selVals = fdata)->getDataTable(FIELD_FIELDS_FORMAT_SELVALS_);
//            ff)->setExtendableSelectionValues((fdata)->getBoolean(FIELD_FIELDS_FORMAT_EXTSELVALS_)))->booleanValue());
//            if(selVals)->getRecordCount() > 0) {
//                std::map sv = new ::java::util::LinkedHashMap();
//                for (auto _i = selVals)->iterator(); _i->hasNext(); ) {
//                    DataRecord* rec = java_cast< DataRecord* >(_i->next());
//                    {
//                        auto val = rec)->getString(FIELD_SELECTION_VALUES_VALUE_);
//                        sv)->put(val != 0 ? java_cast< void* >(ff)->valueFromString(val)) : 0), rec)->getString(FIELD_SELECTION_VALUES_DESCRIPTION_));
//                    }
//                }
//                if(!ff)->isExtendableSelectionValues()) {
//                    if(!sv)->containsKey(java_cast< void* >(ff)->getDefaultValue()))) {
//                        sv)->put(def != 0 ? java_cast< void* >(ff)->valueFromString(def)) : 0), def != 0 ? def)->toString() : u"null"_j);
//                    }
//                }
//                ff)->setSelectionValues(static_cast< std::map >(sv));
//            }
//            ff)->setEditor(fdata)->getString(FIELD_FIELDS_FORMAT_EDITOR_));
//            if(fdata)->hasField(FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_)) {
//                ff)->setEditorOptions(fdata)->getString(FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_));
//            }
//            rf)->addField(ff);
//        }
//    }
//    if(hasKeys) {
//        rf)->addTableValidator(new validator::TableKeyFieldsValidator());
//    }
//    return rf;
//}
//
//DateDataTable* DateDataTableBuilding::formatToFieldsTable(TableFormat* tf, bool readOnly)
//{
//    
//    return formatToFieldsTable(tf, readOnly, 0);
//}
//
//DateDataTable* DateDataTableBuilding::formatToFieldsTable(TableFormat* tf, bool readOnly, encoding::ClassicEncodingSettings* settings)
//{
//    
//    return formatToFieldsTable(tf, readOnly, settings, true);
//}
//
//DateDataTable* DateDataTableBuilding::formatToFieldsTable(TableFormat* tf, bool readOnly, encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields)
//{
//    
//    auto res = new DataTable(FIELDS_FORMAT_);
//    for (auto _i = tf)->iterator(); _i->hasNext(); ) {
//        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
//        {
//            if(ignoreHiddenFields && ff)->isHidden()) {
//                continue;
//            }
//            auto selVals = new DataTable(SELECTION_VALUES_FORMAT_);
//            if(ff)->getSelectionValues() != 0) {
//                for (auto _i = ff)->getSelectionValues())->keySet())->iterator(); _i->hasNext(); ) {
//                    void* value = java_cast< void* >(_i->next());
//                    {
//                        selVals)->addRecord(new voidArray({ff)->valueToString(value, settings)), java_cast< void* >(ff)->getSelectionValues())->get(value))}));
//                    }
//                }
//            }
//            auto rec = res)->addRecord();
//            rec)->setValue(FIELD_FIELDS_FORMAT_OLDNAME_, ff)->getName()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_NAME_, ff)->getName()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_TYPE_, std::string::valueOf(ff)->getType())));
//            rec)->setValue(FIELD_FIELDS_FORMAT_DESCRIPTION_, ff)->getDescription()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_DEFAULT_VALUE_, ff)->valueToString(java_cast< void* >(ff)->getDefaultValue()), settings)));
//            rec)->setValue(FIELD_FIELDS_FORMAT_READONLY_, ::java::lang::Boolean::valueOf(readOnly || ff)->isReadonly()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_NULLABLE_, ::java::lang::Boolean::valueOf(ff)->isNullable()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_KEY_, ::java::lang::Boolean::valueOf(ff)->isKeyField()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_SELVALS_, selVals));
//            rec)->setValue(FIELD_FIELDS_FORMAT_EXTSELVALS_, ::java::lang::Boolean::valueOf(ff)->isExtendableSelectionValues()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_HIDDEN_, ::java::lang::Boolean::valueOf(ff)->isHidden()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_INLINE_, ::java::lang::Boolean::valueOf(ff)->isInlineData()));
//            rec)->setValue(FIELD_FIELDS_FORMAT_HELP_, ff)->getHelp()));
//            try {
//                rec)->setValue(FIELD_FIELDS_FORMAT_EDITOR_, ff)->getEditor()));
//                rec)->setValue(FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_, ff)->getEditorOptions()));
//            } catch (::java::lang::Exception* ex) {
//            }
//        }
//    }
//    return res;
//}
//
//DateDataTable* DateDataTableBuilding::formatToTable(TableFormat* tf, bool ignoreHiddenFields) 
//{
//    
//    return formatToTable(tf, 0, ignoreHiddenFields);
//}
//
//DateDataTable* DateDataTableBuilding::formatToTable(TableFormat* tf) 
//{
//    
//    return formatToTable(tf, static_cast< encoding::ClassicEncodingSettings* >(0));
//}
//
//DateDataTable* DateDataTableBuilding::formatToTable(TableFormat* tf, encoding::ClassicEncodingSettings* settings) 
//{
//    
//    return formatToTable(tf, settings, true);
//}
//
//DateDataTable* DateDataTableBuilding::formatToTable(TableFormat* tf, encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields) 
//{
//    
//    auto rec = new DataRecord(TABLE_FORMAT_);
//    rec)->addInt(tf)->getMinRecords()));
//    rec)->addInt(tf)->getMaxRecords()));
//    rec)->addDataTable(formatToFieldsTable(tf, false, settings, ignoreHiddenFields));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(tf)->isReorderable()));
//    rec)->addBoolean(::java::lang::Boolean::valueOf(tf)->isUnresizable()));
//    auto bindings = new DataTable(BINDINGS_FORMAT_);
//    for (auto _i = tf)->getBindings())->iterator(); _i->hasNext(); ) {
//        ::com::tibbo::aggregate::common::binding::Binding* binding = java_cast< ::com::tibbo::aggregate::common::binding::Binding* >(_i->next());
//        {
//            bindings)->addRecord())->addString(binding)->getReference())->getImage()))->addString(binding)->getExpression())->getText());
//        }
//    }
//    rec)->addDataTable(bindings);
//    return rec)->wrap();
//}
//
//
//
//java::lang::Class* DateDataTableBuilding::class_()
//{
//    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableBuilding", 54);
//    return c;
//}
//
//void DateDataTableBuilding::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    FIELD_TABLE_FORMAT_MIN_RECORDS_ = u"minRecords"_j;
//    FIELD_TABLE_FORMAT_MAX_RECORDS_ = u"maxRecords"_j;
//    FIELD_TABLE_FORMAT_FIELDS_ = u"fields"_j;
//    FIELD_TABLE_FORMAT_REORDERABLE_ = u"reorderable"_j;
//    FIELD_TABLE_FORMAT_UNRESIZABLE_ = u"unresizable"_j;
//    FIELD_TABLE_FORMAT_BINDINGS_ = u"bindings"_j;
//    FIELD_FIELDS_FORMAT_OLDNAME_ = u"oldname"_j;
//    FIELD_FIELDS_FORMAT_NAME_ = u"name"_j;
//    FIELD_FIELDS_FORMAT_TYPE_ = u"type"_j;
//    FIELD_FIELDS_FORMAT_DESCRIPTION_ = u"description"_j;
//    FIELD_FIELDS_FORMAT_DEFAULT_VALUE_ = u"defaultValue"_j;
//    FIELD_FIELDS_FORMAT_HIDDEN_ = u"hidden"_j;
//    FIELD_FIELDS_FORMAT_INLINE_ = u"inline"_j;
//    FIELD_FIELDS_FORMAT_READONLY_ = u"readonly"_j;
//    FIELD_FIELDS_FORMAT_NULLABLE_ = u"nullable"_j;
//    FIELD_FIELDS_FORMAT_KEY_ = u"key"_j;
//    FIELD_FIELDS_FORMAT_SELVALS_ = u"selvals"_j;
//    FIELD_FIELDS_FORMAT_EXTSELVALS_ = u"extselvals"_j;
//    FIELD_FIELDS_FORMAT_HELP_ = u"help"_j;
//    FIELD_FIELDS_FORMAT_EDITOR_ = u"editor"_j;
//    FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_ = u"editorOptions"_j;
//    FIELD_SELECTION_VALUES_VALUE_ = u"value"_j;
//    FIELD_SELECTION_VALUES_DESCRIPTION_ = u"description"_j;
//    FIELD_BINDINGS_TARGET_ = u"target"_j;
//    FIELD_BINDINGS_EXPRESSION_ = u"expression"_j;
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
//        SELECTION_VALUES_FORMAT_ = new TableFormat(true);
//        {
//            SELECTION_VALUES_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_SELECTION_VALUES_VALUE_)
//                ->append(u"><S><F=NK><D="_j)
//                ->append(Cres::get())->getString(u"value"_j))
//                ->append(u">"_j)->toString());
//            SELECTION_VALUES_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_SELECTION_VALUES_DESCRIPTION_)
//                ->append(u"><S><D="_j)
//                ->append(Cres::get())->getString(u"description"_j))
//                ->append(u"><V=<L=1 "_j)
//                ->append(::java::lang::Integer::MAX_VALUE)
//                ->append(u">>"_j)->toString());
//            SELECTION_VALUES_FORMAT_)->addTableValidator(new validator::TableKeyFieldsValidator());
//        }
//        BINDINGS_FORMAT_ = new TableFormat(true);
//        {
//            BINDINGS_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_BINDINGS_TARGET_)
//                ->append(u"><S><D="_j)
//                ->append(Cres::get())->getString(u"target"_j))
//                ->append(u"><V=<L=1 "_j)
//                ->append(::java::lang::Integer::MAX_VALUE)
//                ->append(u">>"_j)->toString());
//            BINDINGS_FORMAT_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_BINDINGS_EXPRESSION_)
//                ->append(u"><S><D="_j)
//                ->append(Cres::get())->getString(u"expression"_j))
//                ->append(u"><E="_j)
//                ->append(field::StringFieldFormat::EDITOR_EXPRESSION())
//                ->append(u"><V=<L=1 "_j)
//                ->append(::java::lang::Integer::MAX_VALUE)
//                ->append(u">>"_j)->toString());
//        }
//        FIELDS_FORMAT_ = new TableFormat(true);
//        {
//            FIELDS_FORMAT_)->addTableValidator(new validator::TableKeyFieldsValidator());
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_OLDNAME_)
//                ->append(u"><S><F=H>"_j)->toString())));
//            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_NAME_)
//                ->append(u"><S><F=K><D="_j)
//                ->append(Cres::get())->getString(u"name"_j))
//                ->append(u">"_j)->toString());
//            ff)->getValidators())->add(validator::ValidatorHelper::NAME_SYNTAX_VALIDATOR()));
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_TYPE_)
//                ->append(u"><S><A="_j)
//                ->append(FieldFormat::INTEGER_FIELD)
//                ->append(u"><D="_j)
//                ->append(Cres::get())->getString(u"type"_j))
//                ->append(u">"_j)->toString());
//            ff)->setSelectionValues(static_cast< std::map >(FieldFormat::getTypeSelectionValues()));
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_DESCRIPTION_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"description"_j))
//                ->append(u">"_j)->toString());
//            ff)->getValidators())->add(validator::ValidatorHelper::DESCRIPTION_SYNTAX_VALIDATOR()));
//            FIELDS_FORMAT_)->addField(ff);
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_DEFAULT_VALUE_)
//                ->append(u"><S><F=N><A=><D="_j)
//                ->append(Cres::get())->getString(u"default"_j))
//                ->append(u">"_j)->toString())));
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_READONLY_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtReadOnly"_j))
//                ->append(u">"_j)->toString())));
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_NULLABLE_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtNullable"_j))
//                ->append(u">"_j)->toString())));
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_KEY_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtKeyField"_j))
//                ->append(u">"_j)->toString())));
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_SELVALS_)
//                ->append(u"><T><D="_j)
//                ->append(Cres::get())->getString(u"dtSelectionValues"_j))
//                ->append(u">"_j)->toString());
//            ff)->setDefault(new DataTable(SELECTION_VALUES_FORMAT_));
//            FIELDS_FORMAT_)->addField(ff);
//            FIELDS_FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_EXTSELVALS_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtExtendableSelVals"_j))
//                ->append(u">"_j)->toString())));
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_HIDDEN_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"hidden"_j))
//                ->append(u">"_j)->toString());
//            ff)->setAdvanced(true);
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_INLINE_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"inline"_j))
//                ->append(u">"_j)->toString());
//            ff)->setAdvanced(true);
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_HELP_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"help"_j))
//                ->append(u">"_j)->toString());
//            ff)->getValidators())->add(validator::ValidatorHelper::DESCRIPTION_SYNTAX_VALIDATOR()));
//            ff)->setEditor(field::StringFieldFormat::EDITOR_TEXT_AREA());
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_EDITOR_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"dtEditorViewer"_j))
//                ->append(u">"_j)->toString());
//            ff)->setSelectionValues(static_cast< std::map >(DataTableUtils::getEditorSelectionValues()));
//            ff)->setExtendableSelectionValues(true);
//            FIELDS_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_)
//                ->append(u"><S><F=N><D="_j)
//                ->append(Cres::get())->getString(u"dtEditorOptions"_j))
//                ->append(u">"_j)->toString());
//            ff)->setAdvanced(true);
//            FIELDS_FORMAT_)->addField(ff);
//        }
//        TABLE_FORMAT_ = new TableFormat(int(1), int(1));
//        {
//            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_MIN_RECORDS_)
//                ->append(u"><I><A=0><D="_j)
//                ->append(Cres::get())->getString(u"dtMinRecords"_j))
//                ->append(u">"_j)->toString());
//            ff)->getValidators())->add(new validator::LimitsValidator(int(0)), ::java::lang::Integer::MAX_VALUE))));
//            TABLE_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_MAX_RECORDS_)
//                ->append(u"><I><F=E><A="_j)
//                ->append(::java::lang::Integer::MAX_VALUE)
//                ->append(u"><D="_j)
//                ->append(Cres::get())->getString(u"dtMaxRecords"_j))
//                ->append(u"><S=<"_j)
//                ->append(Cres::get())->getString(u"dtNotLimited"_j))
//                ->append(u"="_j)
//                ->append(::java::lang::Integer::MAX_VALUE)
//                ->append(u">>"_j)->toString());
//            ff)->getValidators())->add(new validator::LimitsValidator(int(0)), ::java::lang::Integer::MAX_VALUE))));
//            TABLE_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_FIELDS_)
//                ->append(u"><T><D="_j)
//                ->append(Cres::get())->getString(u"fields"_j))
//                ->append(u">"_j)->toString());
//            ff)->setDefault(new DataTable(FIELDS_FORMAT_));
//            TABLE_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_REORDERABLE_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtReorderable"_j))
//                ->append(u">"_j)->toString());
//            TABLE_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_UNRESIZABLE_)
//                ->append(u"><B><D="_j)
//                ->append(Cres::get())->getString(u"dtUnresizable"_j))
//                ->append(u">"_j)->toString());
//            TABLE_FORMAT_)->addField(ff);
//            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_TABLE_FORMAT_BINDINGS_)
//                ->append(u"><T><D="_j)
//                ->append(Cres::get())->getString(u"bindings"_j))
//                ->append(u">"_j)->toString());
//            ff)->setDefault(new DataTable(BINDINGS_FORMAT_));
//            TABLE_FORMAT_)->addField(ff);
//            TABLE_FORMAT_)->addTableValidator(new validator::TableExpressionValidator(std::stringBuilder().append(u"{"_j)->append(FIELD_TABLE_FORMAT_MIN_RECORDS_)
//                ->append(u"} <= {"_j)
//                ->append(FIELD_TABLE_FORMAT_MAX_RECORDS_)
//                ->append(u"} ? null : '"_j)
//                ->append(Cres::get())->getString(u"dtMaxRecsLessThenMin"_j))
//                ->append(u"'"_j)->toString()));
//            TABLE_FORMAT_)->setNamingExpression(std::stringBuilder().append(function::Functions::PRINT())->append(u"({"_j)
//                ->append(FIELD_TABLE_FORMAT_FIELDS_)
//                ->append(u"}, '{"_j)
//                ->append(FIELD_FIELDS_FORMAT_NAME_)
//                ->append(u"}', ', ')"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//
