#include "DataRecord.h"


const std::string DataRecord::ELEMENT_ID = "I";


DataRecord::DataRecord() 
{
}

DataRecord::DataRecord(TableFormatPtr tableFormat)
{
}

DataRecord::DataRecord(TableFormatPtr tableFormat, std::list<AgObjectPtr> data)
{

}

DataRecord::DataRecord(TableFormatPtr tableFormat, const std::string& dataString, ClassicEncodingSettingsPtr settings, bool validate, std::list<std::string> fieldNamesInData)
{

}

DataRecord::DataRecord(TableFormatPtr tableFormat, const std::string& dataString)
{

}

void DataRecord::setData(const std::string &dataString, ClassicEncodingSettingsPtr settings, bool validate, std::list<std::string> fieldNamesInData)
{

}


/*
DataRecord::DataRecord(TableFormat* tableFormat, voidArray* data)
{
    ctor(tableFormat,data);
}

DataRecord::DataRecord(TableFormat* tableFormat, const std::string& dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>&  fieldNamesInData)
{
    ctor(tableFormat,dataString,settings,validate,fieldNamesInData);
}

DataRecord::DataRecord(TableFormat* tableFormat, const std::string& dataString)
{
    ctor(tableFormat,dataString);
}

DataRecord::DataRecord(DataRecord&)
{
	//TODO: конструктор копирования
}

void DataRecord::init()
{
	table = null;
    format = new TableFormat();    
}

int DataRecord::INITIAL_DATA_SIZE = 4;
std::string DataRecord::ELEMENT_ID_ = "I";

void DataRecord::ctor()
{
    this->ctor();
    init();
    data = new ::java::util::HashMap(INITIAL_DATA_SIZE);
}

void DataRecord::ctor(TableFormat* tableFormat)
{
    this->ctor();
    init();
//    data = new ::java::util::HashMap(tableFormat != 0 ? tableFormat)->getFieldCount() : INITIAL_DATA_SIZE);
    if (tableFormat != 0) {
        tableFormat->makeImmutable(0);
        format = tableFormat;
    }
}
//TODO: Object... data возможно стоит передавать списком
void DataRecord::ctor(TableFormat* tableFormat, voidArray* data)
{
    ctor(tableFormat);
	//TODO:

//     for (auto param : *data)) {
//         addValue(param);
//     }
	
}

void DataRecord::ctor(TableFormat* tableFormat, const std::string& dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>& fieldNamesInData)
{
    ctor(tableFormat);
    setData(dataString, settings, validate, fieldNamesInData);
}

void DataRecord::ctor(TableFormat* tableFormat, const std::string& dataString)
{
    ctor(tableFormat, dataString, new ClassicEncodingSettings(false), true, 0);
}

void DataRecord::setData(const std::string& dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>&  fieldNamesInData)
{
	//TODO:

//     auto recs = StringUtils::elements(dataString, settings)->isUseVisibleSeparators();
//     auto i = int(0);
//     for (auto _i = recs)->iterator(); _i->hasNext(); ) {
//         ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
//         {
//             if(el)->getName() != 0) {
//                 if(el)->getName())->equals(ELEMENT_ID_))) {
//                     setId(el)->getValue());
//                 } else {
//                     auto ff = format)->getField(el)->getName());
//                     if(ff != 0) {
//                         setValue(el)->getName(), java_cast< void* >(ff)->valueFromEncodedString(el)->getValue(), settings, validate)), validate);
//                     }
//                 }
//             } else {
//                 if(fieldNamesInData != 0 && fieldNamesInData)->size() > i) {
//                     auto fieldName = java_cast< const std::string & >(fieldNamesInData)->get(i));
//                     if(getFormat())->hasField(fieldName)) {
//                         auto value = java_cast< void* >(format)->getField(fieldName))->valueFromEncodedString(el)->getValue(), settings, validate));
//                         setValue(fieldName, value, validate);
//                     }
//                 } else if(i < format)->getFieldCount()) {
//                     auto value = java_cast< void* >(format)->getField(i))->valueFromEncodedString(el)->getValue(), settings, validate));
//                     setValue(i, value, validate);
//                 }
//                 i++;
//             }
//         }
//     }
	
}

int DataRecord::getFieldCount()
{
    if(format == 0) {
        return 0;
	}
    
	return format->getFieldCount();    
}

TableFormat* DataRecord::getFormat()
{
    return format;
}

FieldFormat* DataRecord::getFormat(int index)
{
    return format->getField(index);
}

FieldFormat* DataRecord::getFormat(const std::string & name)
{
    return format->getField(name);
}

std::string DataRecord::getId()
{
    return id;
}

DataTable* DataRecord::getTable()
{
    return table;
}

std::string DataRecord::encode(bool useVisibleSeparators)
{
    return encode(new ClassicEncodingSettings(useVisibleSeparators));
}

std::string DataRecord::encode(ClassicEncodingSettings* settings)
{
	//TODO:
	
//     auto encodedData = new std::stringBuffer();
//     auto useVisibleSeparators = settings != 0 ? settings)->isUseVisibleSeparators() : false;
//     if(getId() != 0) {
//         encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_ID_, std::string::valueOf(getId()))))->encode(useVisibleSeparators));
//     }
//     for (auto i = int(0); i < format)->getFieldCount(); i++) {
//         auto ff = format)->getField(i);
//         auto value = getValue(ff);
//         encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(0, ff)->valueToEncodedString(value, settings)))->encode(useVisibleSeparators));
//     }
//     return encodedData)->toString();
	
	
	return std::string;
}

void DataRecord::checkNumberOfDataFieldsSet(void* value)
{
    if (data.size() >= format->getFieldCount()) {
		//TODO:
        throw std::logic_error("Can't add data to data record since all data fields defined by format are already set: ");//+value
    }
}

DataRecord* DataRecord::addInt(int val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addString(const std::string& val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addBoolean(bool val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addLong(long val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addFloat(float val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addDouble(double val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

//TODD: Date класс был из java util
DataRecord* DataRecord::addDate(Date* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addDataTable(DataTable* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

//TODO: java::awt::Color
DataRecord* DataRecord::addColor(Color* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::addData(Data* val)
{
    checkNumberOfDataFieldsSet(val);
    return setValue(data)->size(), val));
}

DataRecord* DataRecord::setValue(int index, void* value)
{
    return setValue(index, value, true);
}

DataRecord* DataRecord::setValue(int index, void* value, bool validate)
{
	//TODO:
	
//     auto ff = getFormat())->getField(index);
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

DataRecord* DataRecord::setValue(const std::string& name, void* value)
{
    return setValue(findIndex(name), value, true);
}

DataRecord* DataRecord::setValue(const std::string& name, void* value, bool validate)
{
    return setValue(findIndex(name), value, validate);
}

DataRecord* DataRecord::setValueSmart(int index, void* value)
{
    FieldFormat* ff = getFormat(index);
    return setValueSmart(ff->getName(), value);
}

DataRecord* DataRecord::setValueSmart(const std::string& name, void* value)
{
	//TODO:
	
//     FieldFormat* ff = getFormat()->getField(name);
//     if(ff == 0) {
//         throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtFieldNotFound"_j), new voidArray({name)})))->append(u": "_j)
//             ->append(dataAsString(true, true))->toString());
//     }
//     if(value == 0 || ff)->getFieldClass())->equals(value)->getClass()) || ff)->getFieldWrappedClass())->equals(value)->getClass())) {
//         return setValue(ff)->getName(), value);
//     } else {
//         auto stringValue = value)->toString();
//         try {
//             return setValue(ff)->getName(), java_cast< void* >(ff)->valueFromString(stringValue)));
//         } catch (::java::lang::Exception* ex) {
//             if(ff)->getSelectionValues() != 0) {
//                 for (auto _i = ff)->getSelectionValues())->keySet())->iterator(); _i->hasNext(); ) {
//                     void* sv = java_cast< void* >(_i->next());
//                     {
//                         auto svdesc = java_cast< void* >(ff)->getSelectionValues())->get(sv)))->toString();
//                         if(stringValue)->equals(svdesc))) {
//                             return setValue(ff->getName(), sv);
//                         }
//                     }
//                 }
//             }
//             throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtIllegalFieldValue"_j), new voidArray({::com::tibbo::aggregate::common::util::Util::getObjectDescription(value)), ff)->toDetailedString())})))->append(ex)->getMessage())->toString(), ex);
//         }
//     }
	
}

DataRecord* DataRecord::addValue(void* value)
{
    checkNumberOfDataFieldsSet(value);
    return setValue(data->size(), value);
}

int DataRecord::findIndex(const std::string& name)
{
	//TODO:
	
    int index = format->getFieldIndex(name);
	
//     if (index == -1) {
//         std::list<std::string>  fields;
// 
//         for (auto _i = getFormat())->iterator(); _i->hasNext(); ) {
//             FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
//             {
//                 fields)->add(ff)->getName()));
//             }
//         }
//         throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"dtFieldNotFound"_j), new voidArray({name)})))->append(u": "_j)
//             ->append(::com::tibbo::aggregate::common::util::StringUtils::print(static_cast< ::java::util::Collection* >(fields)))->toString());
//     }

    return index;
}

std::string DataRecord::getString(const std::string& name)
{
    return getString(findIndex(name));
}

std::string DataRecord::getString(int index)
{
    return reinterpret_cast<std::string>(getValue(index));
}

int DataRecord::getInt(const std::string& name)
{
    return getInt(findIndex(name));
}

int DataRecord::getInt(int index)
{
    return reinterpret_cast<int>(getValue(index));
}

bool DataRecord::getBoolean(const std::string& name)
{
    return getBoolean(findIndex(name));
}

bool DataRecord::getBoolean(int index)
{
    return reinterpret_cast<boolean>(getValue(index));
}

long DataRecord::getLong(const std::string& name)
{
    return getLong(findIndex(name));
}

long DataRecord::getLong(int index)
{
    return reinterpret_cast<long>(getValue(index));
}

float DataRecord::getFloat(const std::string & name)
{
    return getFloat(findIndex(name));
}

float DataRecord::getFloat(int index)
{
    return reinterpret_cast<float>(getValue(index));
}

double DataRecord::getDouble(const std::string& name)
{
    return getDouble(findIndex(name));
}

double DataRecord::getDouble(int index)
{
    return reinterpret_cast<double>(getValue(index));
}

Date DataRecord::getDate(const std::string& name)
{
    return getDate(findIndex(name));
}

//TODO: Date
Date DataRecord::getDate(int index)
{
    return reinterpret_cast<Date>(getValue(index));
}

DataTable DataRecord::getDataTable(const std::string& name)
{
    return getDataTable(findIndex(name));
}

DataTable DataRecord::getDataTable(int index)
{
    return reinterpret_cast< DataTable>(getValue(index));
}

//TODO: Color
Color DataRecord::getColor(const std::string& name)
{
    return getColor(findIndex(name));
}
//TODO: Color
Color DataRecord::getColor(int index)
{
    return reinterpret_cast<Color>(getValue(index));
}

Data DataRecord::getData(const std::string& name)
{
    return getData(findIndex(name));
}

Data DataRecord::getData(int index)
{
    return reinterpret_cast<Data>(getValue(index));
}

void* DataRecord::getValue(int index)
{
    FieldFormat ff = format->getField(index);
    return getValue(ff);
}

void* DataRecord::getValue(const std::string& name)
{
    return getValue(findIndex(name));
}

//TODO: void* Object
void* DataRecord::getValue(FieldFormat* ff)
{
    if (data.find(ff->getName()) != data.end()) {
        return reinterpret_cast< void* >(data[ff->getName()]);
    }

    return ff->isDefaultOverride() ? 0 : reinterpret_cast< void* >(ff->getDefaultValueCopy());
}

void* DataRecord::getValueDescription(const std::string& name)
{
	//TODO: Object

//     auto value = getValue(name);
//     auto const ff = getFormat(name);
//     auto sv = ff)->getSelectionValues();
//     auto description = sv != 0 ? java_cast< const std::string & >(sv)->get(value)) : static_cast< const std::string & >(0);
//     return description != 0 ? description) : ff)->valueToString(value));
	
}

DataRecord::getValueAsString(const std::string& name)
{
    return getValueAsString(findIndex(name));
}

std::string DataRecord::getValueAsString(int index)
{
    return format->getField(index)->valueToString(getValue(index));
}

DataRecord* DataRecord::setId(const std::string& id)
{
    this->id = id;
    return this;
}

void DataRecord::setTable(DataTable* table)
{
    *this->table = *table;
}

void setFormat(TableFormat* format)
{
    format->makeImmutable(0);
    this->format = format;
}

//TODO:
//bool DataRecord::equals(void* obj)
bool DataRecord::operator==(const DataRecord& dataRecord) const	;
{
	
//     if(obj == 0) {
//         return false;
//     }
//     if(!(dynamic_cast< DataRecord* >(obj) != 0)) {
//         return false;
//     }
	
    if (this->id != dataRecord.getId()) {
        return false;
    }
	
    if (table == 0) {
        if (*format == *dataRecord->getFormat()) {
            return false;
        }
    }
	
    for (int i = 0; i < getFieldCount(); i++) {
		//TODO: сравнение 
        auto field = getValue(i);
        auto value = rec)->getValue(i);
        if(field != 0 ? !field)->equals(value) : value != 0) {
            return false;
        }
    }
    return true;
}

bool DataRecord::hasField(const std::string& name)
{
    return getFormat()->hasField(name);
}

//TODO:
bool DataRecord::meetToCondition(QueryCondition* cond)
{
	//TODO: Object -> void*
    if (hasField(cond->getField()) {
        void* val = getValue(cond)->getField());
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

void DataRecord::cloneFormatFromTable()
{
    if (table != 0) {
		//TODO: возможна утечка памяти, необходим delete format
        format = table->getFormat()->clone();
    }
    // else {
		//TODO: возможна утечка памяти, необходим delete format
  //      format = format->clone();
 //   }
}

std::string DataRecord::dataAsString(bool showFieldNames, bool showHiddenFields)
{
    stringstream ss;
    bool needSeparator = false;
	
    for (ште j = 0; j < getFieldCount(); j++) {
        FieldFormat ff = getFormat())->getField(j);
        if (ff->isHidden() && !showHiddenFields) {
            continue;
        }
		
        if (needSeparator) {
            ss <<", ";
        } else {
            needSeparator = true;
        }
		
		if (showFieldNames)
			ss <<ff->toString()toString() <<"=";
		ss <<valueAsString(ff->getName());
    }
	
    return ss.str();
}

//TODO:
std::string DataRecord::valueAsString(const std::string& name)
{
    FieldFormat* ff = getFormat(name);
    void* val = getValue(name);
	//TODO: val->toString()
    std::string value = (val !=0) ? val->toString() : "NULL";
    if(ff->hasSelectionValues()) {
        auto sv = java_cast< void* >(ff)->getSelectionValues())->get(val));
        value = sv != 0 ? sv)->toString() : value;
    }
    return value;
}
*/
std::string DataRecord::toString()
{
 //return dataAsString(true, true);
std::string str;
 return str;
}

  /**
   * Constructs new <code>DataTable</code> and adds this record to it.
   */
boost::shared_ptr<DataTable> DataRecord::wrap()
{
    return 0;
    //return new DataTable(*(DataTable*)this);

//DataTable *dt=0;
//return dt;
}


DataRecord *DataRecord::clone() const
{
	//TODO: копирование
    /*DataRecord* cl;
    try {
        cl = java_cast< DataRecord* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
    cl)->data = java_cast< std::map >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(data));
    return cl;*/
    return 0;
}

