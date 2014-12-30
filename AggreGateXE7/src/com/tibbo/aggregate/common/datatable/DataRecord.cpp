// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataRecord.java
#include "DataRecord.h"


/*
com::tibbo::aggregate::common::datatable::DataRecord::DataRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::datatable::DataRecord::DataRecord() 
    : DataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::datatable::DataRecord::DataRecord(TableFormat* tableFormat) 
    : DataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableFormat);
}

com::tibbo::aggregate::common::datatable::DataRecord::DataRecord(TableFormat* tableFormat, voidArray* data)
    : DataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableFormat,data);
}

com::tibbo::aggregate::common::datatable::DataRecord::DataRecord(TableFormat* tableFormat, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData)
    : DataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableFormat,dataString,settings,validate,fieldNamesInData);
}

com::tibbo::aggregate::common::datatable::DataRecord::DataRecord(TableFormat* tableFormat, std::string* dataString)
    : DataRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(tableFormat,dataString);
}

void com::tibbo::aggregate::common::datatable::DataRecord::init()
{
    format = new TableFormat();
    id;
}

const int com::tibbo::aggregate::common::datatable::DataRecord::INITIAL_DATA_SIZE;

std::string& com::tibbo::aggregate::common::datatable::DataRecord::ELEMENT_ID()
{
    
    return ELEMENT_ID_;
}
std::string com::tibbo::aggregate::common::datatable::DataRecord::ELEMENT_ID_;

void com::tibbo::aggregate::common::datatable::DataRecord::ctor()
{
    super::ctor();
    init();
    data = new ::java::util::HashMap(INITIAL_DATA_SIZE);
}

void com::tibbo::aggregate::common::datatable::DataRecord::ctor(TableFormat* tableFormat)
{
    super::ctor();
    init();
    data = new ::java::util::HashMap(tableFormat != 0 ? tableFormat)->getFieldCount() : INITIAL_DATA_SIZE);
    if(tableFormat != 0) {
        tableFormat)->makeImmutable(0);
        format = tableFormat;
    }
}

void com::tibbo::aggregate::common::datatable::DataRecord::ctor(TableFormat* tableFormat, voidArray*data)
{
    ctor(tableFormat);
    for(auto param : *data)) {
        addValue(param);
    }
}

void com::tibbo::aggregate::common::datatable::DataRecord::ctor(TableFormat* tableFormat, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData)
{
    ctor(tableFormat);
    setData(dataString, settings, validate, fieldNamesInData);
}

void com::tibbo::aggregate::common::datatable::DataRecord::ctor(TableFormat* tableFormat, std::string* dataString)
{
    ctor(tableFormat, dataString, new ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings(false), true, 0);
}

void com::tibbo::aggregate::common::datatable::DataRecord::setData(std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData)
{
    auto recs = ::com::tibbo::aggregate::common::util::StringUtils::elements(dataString, settings)->isUseVisibleSeparators());
    auto i = int(0);
    for (auto _i = recs)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            if(el)->getName() != 0) {
                if(el)->getName())->equals(ELEMENT_ID_))) {
                    setId(el)->getValue());
                } else {
                    auto ff = format)->getField(el)->getName());
                    if(ff != 0) {
                        setValue(el)->getName(), java_cast< void* >(ff)->valueFromEncodedString(el)->getValue(), settings, validate)), validate);
                    }
                }
            } else {
                if(fieldNamesInData != 0 && fieldNamesInData)->size() > i) {
                    auto fieldName = java_cast< std::string* >(fieldNamesInData)->get(i));
                    if(getFormat())->hasField(fieldName)) {
                        auto value = java_cast< void* >(format)->getField(fieldName))->valueFromEncodedString(el)->getValue(), settings, validate));
                        setValue(fieldName, value, validate);
                    }
                } else if(i < format)->getFieldCount()) {
                    auto value = java_cast< void* >(format)->getField(i))->valueFromEncodedString(el)->getValue(), settings, validate));
                    setValue(i, value, validate);
                }
                i++;
            }
        }
    }
}

int com::tibbo::aggregate::common::datatable::DataRecord::getFieldCount()
{
    if(format == 0) {
        return 0;
    } else {
        return format)->getFieldCount();
    }
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::datatable::DataRecord::getFormat()
{
    return format;
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataRecord::getFormat(int index)
{
    return format)->getField(index);
}

com::tibbo::aggregate::common::datatable::FieldFormat* com::tibbo::aggregate::common::datatable::DataRecord::getFormat(std::string* name)
{
    return format)->getField(name);
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::getId()
{
    return id;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataRecord::getTable()
{
    return table;
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::encode(bool useVisibleSeparators)
{
    return encode(new ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings(useVisibleSeparators));
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings)
{
    auto encodedData = new std::stringBuffer();
    auto useVisibleSeparators = settings != 0 ? settings)->isUseVisibleSeparators() : false;
    if(getId() != 0) {
        encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_ID_, std::string::valueOf(getId()))))->encode(useVisibleSeparators));
    }
    for (auto i = int(0); i < format)->getFieldCount(); i++) {
        auto ff = format)->getField(i);
        auto value = getValue(ff);
        encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(0, ff)->valueToEncodedString(value, settings)))->encode(useVisibleSeparators));
    }
    return encodedData)->toString();
}

void com::tibbo::aggregate::common::datatable::DataRecord::checkNumberOfDataFieldsSet(void* value)
{
    if(data)->size() >= format)->getFieldCount()) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Can't add data to data record since all data fields defined by format are already set: "_j)->append(value))->toString());
    }
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addInt(::java::lang::Integer* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addString(std::string* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addBoolean(::java::lang::Boolean* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addLong(::java::lang::Long* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addFloat(::java::lang::Float* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addDouble(::java::lang::Double* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addDate(::java::util::Date* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addDataTable(DataTable* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addColor(::java::awt::Color* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addData(::com::tibbo::aggregate::common::data::Data* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValue(int index, void* value)
{
    return setValue(index, value, true);
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValue(int index, void* value, bool validate)
{
    auto ff = getFormat())->getField(index);
    try {
        value = java_cast< void* >(ff)->checkAndConvertValue(value, validate));
    } catch (ValidationException* ex) {
        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtIllegalFieldValue"_j), new voidArray({value, ff)->toDetailedString())})))->append(ex)->getMessage())->toString(), ex);
    }
    auto oldValue = java_cast< void* >(data)->get(ff)->getName()));
    try {
        data)->put(ff)->getName(), value);
        if(table != 0) {
            table)->validateRecord(this);
        }
    } catch (ValidationException* ex1) {
        data)->put(ff)->getName(), oldValue);
        throw new ::java::lang::IllegalArgumentException(ex1)->getMessage(), ex1);
    }
    return this;
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValue(std::string* name, void* value)
{
    return setValue(findIndex(name), value, true);
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValue(std::string* name, void* value, bool validate)
{
    return setValue(findIndex(name), value, validate);
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValueSmart(int index, void* value)
{
    auto ff = getFormat(index);
    return setValueSmart(ff)->getName(), value);
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setValueSmart(std::string* name, void* value)
{
    auto ff = getFormat())->getField(name);
    if(ff == 0) {
        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtFieldNotFound"_j), new voidArray({name)})))->append(u": "_j)
            ->append(dataAsString(true, true))->toString());
    }
    if(value == 0 || ff)->getFieldClass())->equals(value)->getClass()) || ff)->getFieldWrappedClass())->equals(value)->getClass())) {
        return setValue(ff)->getName(), value);
    } else {
        auto stringValue = value)->toString();
        try {
            return setValue(ff)->getName(), java_cast< void* >(ff)->valueFromString(stringValue)));
        } catch (::java::lang::Exception* ex) {
            if(ff)->getSelectionValues() != 0) {
                for (auto _i = ff)->getSelectionValues())->keySet())->iterator(); _i->hasNext(); ) {
                    void* sv = java_cast< void* >(_i->next());
                    {
                        auto svdesc = java_cast< void* >(ff)->getSelectionValues())->get(sv)))->toString();
                        if(stringValue)->equals(svdesc))) {
                            return setValue(ff)->getName(), sv);
                        }
                    }
                }
            }
            throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtIllegalFieldValue"_j), new voidArray({::com::tibbo::aggregate::common::util::Util::getObjectDescription(value)), ff)->toDetailedString())})))->append(ex)->getMessage())->toString(), ex);
        }
    }
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::addValue(void* value)
{
    checkNumberOfDataFieldsSet(value);
    return setValue(data)->size(), value);
}

int com::tibbo::aggregate::common::datatable::DataRecord::findIndex(std::string* name)
{
    auto index = format)->getFieldIndex(name);
    if(index == -int(1)) {
        std::list  fields = new ::java::util::LinkedList();
        for (auto _i = getFormat())->iterator(); _i->hasNext(); ) {
            FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
            {
                fields)->add(ff)->getName()));
            }
        }
        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtFieldNotFound"_j), new voidArray({name)})))->append(u": "_j)
            ->append(::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(fields)))->toString());
    }
    return index;
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::getString(std::string* name)
{
    return getString(findIndex(name));
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::getString(int index)
{
    return java_cast< std::string* >(getValue(index));
}

java::lang::Integer* com::tibbo::aggregate::common::datatable::DataRecord::getInt(std::string* name)
{
    return getInt(findIndex(name));
}

java::lang::Integer* com::tibbo::aggregate::common::datatable::DataRecord::getInt(int index)
{
    return java_cast< ::java::lang::Integer* >(getValue(index));
}

java::lang::Boolean* com::tibbo::aggregate::common::datatable::DataRecord::getBoolean(std::string* name)
{
    return getBoolean(findIndex(name));
}

java::lang::Boolean* com::tibbo::aggregate::common::datatable::DataRecord::getBoolean(int index)
{
    return java_cast< ::java::lang::Boolean* >(getValue(index));
}

java::lang::Long* com::tibbo::aggregate::common::datatable::DataRecord::getLong(std::string* name)
{
    return getLong(findIndex(name));
}

java::lang::Long* com::tibbo::aggregate::common::datatable::DataRecord::getLong(int index)
{
    return java_cast< ::java::lang::Long* >(getValue(index));
}

java::lang::Float* com::tibbo::aggregate::common::datatable::DataRecord::getFloat(std::string* name)
{
    return getFloat(findIndex(name));
}

java::lang::Float* com::tibbo::aggregate::common::datatable::DataRecord::getFloat(int index)
{
    return java_cast< ::java::lang::Float* >(getValue(index));
}

java::lang::Double* com::tibbo::aggregate::common::datatable::DataRecord::getDouble(std::string* name)
{
    return getDouble(findIndex(name));
}

java::lang::Double* com::tibbo::aggregate::common::datatable::DataRecord::getDouble(int index)
{
    return java_cast< ::java::lang::Double* >(getValue(index));
}

java::util::Date* com::tibbo::aggregate::common::datatable::DataRecord::getDate(std::string* name)
{
    return getDate(findIndex(name));
}

java::util::Date* com::tibbo::aggregate::common::datatable::DataRecord::getDate(int index)
{
    return java_cast< ::java::util::Date* >(getValue(index));
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataRecord::getDataTable(std::string* name)
{
    return getDataTable(findIndex(name));
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataRecord::getDataTable(int index)
{
    return java_cast< DataTable* >(getValue(index));
}

java::awt::Color* com::tibbo::aggregate::common::datatable::DataRecord::getColor(std::string* name)
{
    return getColor(findIndex(name));
}

java::awt::Color* com::tibbo::aggregate::common::datatable::DataRecord::getColor(int index)
{
    return java_cast< ::java::awt::Color* >(getValue(index));
}

com::tibbo::aggregate::common::data::Data* com::tibbo::aggregate::common::datatable::DataRecord::getData(std::string* name)
{
    return getData(findIndex(name));
}

com::tibbo::aggregate::common::data::Data* com::tibbo::aggregate::common::datatable::DataRecord::getData(int index)
{
    return java_cast< ::com::tibbo::aggregate::common::data::Data* >(getValue(index));
}

void* com::tibbo::aggregate::common::datatable::DataRecord::getValue(int index)
{
    auto ff = format)->getField(index);
    return getValue(ff);
}

void* com::tibbo::aggregate::common::datatable::DataRecord::getValue(std::string* name)
{
    return getValue(findIndex(name));
}

void* com::tibbo::aggregate::common::datatable::DataRecord::getValue(FieldFormat* ff)
{
    if(data)->containsKey(ff)->getName())) {
        return java_cast< void* >(data)->get(ff)->getName()));
    }
    return ff)->isDefaultOverride() ? 0) : java_cast< void* >(ff)->getDefaultValueCopy());
}

void* com::tibbo::aggregate::common::datatable::DataRecord::getValueDescription(std::string* name)
{
    auto value = getValue(name);
    auto const ff = getFormat(name);
    auto sv = ff)->getSelectionValues();
    auto description = sv != 0 ? java_cast< std::string* >(sv)->get(value)) : static_cast< std::string* >(0);
    return description != 0 ? description) : ff)->valueToString(value));
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::getValueAsString(std::string* name)
{
    return getValueAsString(findIndex(name));
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::getValueAsString(int index)
{
    return format)->getField(index))->valueToString(getValue(index));
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::setId(std::string* id)
{
    this->id = id;
    return this;
}

void com::tibbo::aggregate::common::datatable::DataRecord::setTable(DataTable* table)
{
    this->table = table;
}

void com::tibbo::aggregate::common::datatable::DataRecord::setFormat(TableFormat* format)
{
    format)->makeImmutable(0);
    this->format = format;
}

bool com::tibbo::aggregate::common::datatable::DataRecord::equals(void* obj)
{
    if(obj == 0) {
        return false;
    }
    if(!(dynamic_cast< DataRecord* >(obj) != 0)) {
        return false;
    }
    auto rec = java_cast< DataRecord* >(obj);
    if(!::com::tibbo::aggregate::common::util::Util::equals(getId(), rec)->getId())) {
        return false;
    }
    if(table == 0) {
        if(!format)->equals(rec)->getFormat()))) {
            return false;
        }
    }
    for (auto i = int(0); i < getFieldCount(); i++) {
        auto field = getValue(i);
        auto value = rec)->getValue(i);
        if(field != 0 ? !field)->equals(value) : value != 0) {
            return false;
        }
    }
    return true;
}

bool com::tibbo::aggregate::common::datatable::DataRecord::hasField(std::string* name)
{
    return getFormat())->hasField(name);
}

bool com::tibbo::aggregate::common::datatable::DataRecord::meetToCondition(QueryCondition* cond)
{
    if(hasField(cond)->getField())) {
        auto val = getValue(cond)->getField());
        if(val == 0) {
            if(cond)->getOperator() != QueryCondition::EQ) {
                throw new ::java::lang::IllegalArgumentException(u"Can't compare value to NULL"_j);
            }
            if(cond)->getValue() == 0) {
                return true;
            } else {
                return false;
            }
        }
        if((cond)->getOperator() & QueryCondition::EQ) > 0) {
            return val)->equals(cond)->getValue());
        } else {
            if(!(dynamic_cast< ::java::lang::Comparable* >(val) != 0)) {
                std::cout <<"Value isn't comparable: "_j)->append(val))->toString());
            }
            auto comp = java_cast< ::java::lang::Comparable* >(val);
            if((cond)->getOperator() & QueryCondition::GT) > 0) {
                return comp)->compareTo(cond)->getValue()) > 0;
            } else {
                if((cond)->getOperator() & QueryCondition::LT) > 0) {
                    return comp)->compareTo(cond)->getValue()) < 0;
                }
            }
        }
        std::cout <<"Illegal operator: "_j)->append(cond)->getOperator())->toString());
    }
    return false;
}

void com::tibbo::aggregate::common::datatable::DataRecord::cloneFormatFromTable()
{
    if(table != 0) {
        format = table)->getFormat())->clone();
    } else {
        format = format)->clone();
    }
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::dataAsString(bool showFieldNames, bool showHiddenFields)
{
    auto res = new std::stringBuffer();
    auto needSeparator = false;
    for (auto j = int(0); j < getFieldCount(); j++) {
        auto ff = getFormat())->getField(j);
        if(ff)->isHidden() && !showHiddenFields) {
            continue;
        }
        if(needSeparator) {
            res)->append(u", "_j);
        } else {
            needSeparator = true;
        }
        auto value = valueAsString(ff)->getName());
        res)->append(std::stringBuilder().append((showFieldNames ? std::stringBuilder().append(ff)->toString())->append(u"="_j)->toString() : u""_j))->append(value)->toString());
    }
    return res)->toString();
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::valueAsString(std::string* name)
{
    auto ff = getFormat(name);
    auto val = getValue(name);
    auto value = val != 0 ? val)->toString() : u"NULL"_j;
    if(ff)->hasSelectionValues()) {
        auto sv = java_cast< void* >(ff)->getSelectionValues())->get(val));
        value = sv != 0 ? sv)->toString() : value;
    }
    return value;
}

std::string com::tibbo::aggregate::common::datatable::DataRecord::toString()
{
    return dataAsString(true, true);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataRecord::wrap()
{
    return new DataTable(this);
}

com::tibbo::aggregate::common::datatable::DataRecord* com::tibbo::aggregate::common::datatable::DataRecord::clone()
{
    DataRecord* cl;
    try {
        cl = java_cast< DataRecord* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
    cl)->data = java_cast< std::map >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(data));
    return cl;
}




*/

