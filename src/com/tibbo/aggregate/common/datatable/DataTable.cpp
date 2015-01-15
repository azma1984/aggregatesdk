// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java
#include "DataTable.h"


DataTable::DataTable()
{

}
/*


DataTable::DataTable()
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DataTable::DataTable(TableFormat* format)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

DataTable::DataTable(TableFormat* format, int emptyRecords)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,emptyRecords);
}

DataTable::DataTable(TableFormat* format, bool createEmptyRecords)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,createEmptyRecords);
}

DataTable::DataTable(DataRecord* record)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(record);
}

DataTable::DataTable(TableFormat* format, const std::string & dataString, ::encoding::ClassicEncodingSettings* settings)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,dataString,settings);
}

DataTable::DataTable(TableFormat* format, voidArray* firstRowData)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,firstRowData);
}

DataTable::DataTable(const std::string & data)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

DataTable::DataTable(const std::string & data, bool validate)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,validate);
}

DataTable::DataTable(const std::string & data, ::encoding::ClassicEncodingSettings* settings, bool validate)
    : DataTable(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,settings,validate);
}

void DataTable::init()
{
    id;
    records = new ::java::util::ArrayList();
    format = DataTable::DEFAULT_FORMAT_;
}

TableFormat*& DataTable::DEFAULT_FORMAT()
{
    
    return DEFAULT_FORMAT_;
}
TableFormat* DataTable::DEFAULT_FORMAT_;

std::string& DataTable::ELEMENT_FORMAT()
{
    
    return ELEMENT_FORMAT_;
}
std::string DataTable::ELEMENT_FORMAT_;

std::string& DataTable::ELEMENT_FORMAT_ID()
{
    
    return ELEMENT_FORMAT_ID_;
}
std::string DataTable::ELEMENT_FORMAT_ID_;

std::string& DataTable::ELEMENT_RECORD()
{
    
    return ELEMENT_RECORD_;
}
std::string DataTable::ELEMENT_RECORD_;

std::string& DataTable::ELEMENT_INVALIDATOR()
{
    
    return ELEMENT_INVALIDATOR_;
}
std::string DataTable::ELEMENT_INVALIDATOR_;

std::string& DataTable::ELEMENT_FIELD_NAME()
{
    
    return ELEMENT_FIELD_NAME_;
}
std::string DataTable::ELEMENT_FIELD_NAME_;

void DataTable::ctor()
{
    super::ctor();
    init();
}

void DataTable::ctor(TableFormat* format)
{
    super::ctor();
    init();
    setFormat(format);
}

void DataTable::ctor(TableFormat* format, int emptyRecords)
{
    ctor(format);
    for (auto i = int(0); i < emptyRecords; i++) {
        addRecord();
    }
}

void DataTable::ctor(TableFormat* format, bool createEmptyRecords)
{
    ctor(format, createEmptyRecords ? format != 0 ? format)->getMinRecords() : int(0) : int(0));
}

void DataTable::ctor(DataRecord* record)
{
    ctor();
    addRecord(record);
}

void DataTable::ctor(TableFormat* format, const std::string & dataString, ::encoding::ClassicEncodingSettings* settings)
{
    super::ctor();
    init();
    if(dataString == 0) {
        throw new ::java::lang::NullPointerException(u"Data string is null"_j);
    }
    setFormat(format);
    std::list  fieldNames;
    auto recs = ::com::tibbo::aggregate::common::util::StringUtils::elements(dataString, false);
    for (auto _i = recs)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            if(ELEMENT_FIELD_NAME_)->equals(el)->getName()))) {
                if(fieldNames == 0) {
                    fieldNames = new ::java::util::LinkedList();
                }
                fieldNames)->add(el)->getValue()));
            } else if(ELEMENT_RECORD_)->equals(el)->getName()))) {
                addRecord(new DataRecord(getFormat(), el)->getValue(), settings, true, fieldNames));
            } else {
                Log::DATATABLE())->warn(std::stringBuilder().append(u"Invalid element found: "_j)->append(el))->toString());
            }
        }
    }
}

void DataTable::ctor(TableFormat* format, voidArray* firstRowData)
{
    ctor(format);
    if(firstRowData)->length > 0) {
        addRecord(new DataRecord(format, firstRowData));
    }
}

void DataTable::ctor(const std::string & data)
{
    ctor(data, true);
}

void DataTable::ctor(const std::string & data, bool validate)
{
    ctor(data, new ::encoding::ClassicEncodingSettings(false), validate);
}

void DataTable::ctor(const std::string & data, ::encoding::ClassicEncodingSettings* settings, bool validate)
{
    super::ctor();
    init();
    if(data == 0) {
        return;
    }
    auto found = false;
    const std::string & encodedFormat;
    std::list  fieldNames;
    auto recs = ::com::tibbo::aggregate::common::util::StringUtils::elements(data, settings != 0 ? settings)->isUseVisibleSeparators() : false);
    for (auto _i = recs)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            if(el)->getName() != 0) {
                if(el)->getName())->equals(ELEMENT_FORMAT_ID_))) {
                    int formatId = (el)->getValue())))->intValue();
                    if(settings)->getFormatCache() == 0) {
                        throw new ::java::lang::IllegalStateException(u"Can't use format ID - format cache not found"_j);
                    }
                    if(encodedFormat != 0) {
                        auto format = new TableFormat(encodedFormat, settings, validate);
                        settings)->getFormatCache())->put(formatId, format);
                        continue;
                    }
                    auto format = settings)->getFormatCache())->get(formatId);
                    if(format == 0) {
                        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Format with specified ID not found in the cache: "_j)->append(formatId)->toString());
                    }
                    setFormat(format);
                    found = true;
                    continue;
                } else if(el)->getName())->equals(ELEMENT_FORMAT_))) {
                    encodedFormat = el)->getValue();
                    setFormat(new TableFormat(encodedFormat, settings, validate));
                    found = true;
                    continue;
                } else if(el)->getName())->equals(ELEMENT_FIELD_NAME_))) {
                    if(fieldNames == 0) {
                        fieldNames = new ::java::util::LinkedList();
                    }
                    fieldNames)->add(el)->getValue()));
                    continue;
                } else if(el)->getName())->equals(ELEMENT_RECORD_))) {
                    auto format = found ? getFormat() : (settings != 0 ? settings)->getFormat() : static_cast< TableFormat* >(0));
                    if(format == 0) {
                        throw new ::java::lang::IllegalStateException(u"Table format is neither found in encoded table nor provided by decoding environment"_j);
                    }
                    addRecord(new DataRecord(format, el)->getValue(), settings, validate, fieldNames));
                    continue;
                } else if(el)->getName())->equals(ELEMENT_INVALIDATOR_))) {
                    invalidationMessage = el)->getValue();
                    continue;
                }
            }
        }
    }
}

int DataTable::getRecordCount()
{
    return records)->size();
}

int DataTable::getFieldCount()
{
    return format)->getFieldCount();
}

TableFormat* DataTable::getFormat()
{
    return format;
}

FieldFormat* DataTable::getFormat(int field)
{
    return getFormat())->getField(field);
}

FieldFormat* DataTable::getFormat(const std::string & name)
{
    return getFormat())->getField(name);
}

java::lang::Long* DataTable::getId()
{
    return id;
}

DataTable* DataTable::setFormat(TableFormat* format)
{
    if(format != 0) {
        format)->makeImmutable(this);
        this->format = format;
    }
    return this;
}

void DataTable::setId(::java::lang::Long* id)
{
    this->id = id;
}

bool DataTable::hasField(const std::string & field)
{
    return format)->hasField(field);
}

void DataTable::setInvalidationMessage(const std::string & invalidationMessage)
{
    this->invalidationMessage = invalidationMessage;
}

void DataTable::checkOrSetFormat(DataRecord* record)
{
    if(format)->getFieldCount() != 0) {
        if(format != record)->getFormat()) {
            auto message = record)->getFormat())->extendMessage(format);
            if(message != 0) {
                std::cout <<"Format of new record ('"_j)->append(record)->getFormat()))
                    ->append(u"') differs from format of data table ('"_j)
                    ->append(getFormat()))
                    ->append(u"'): "_j)
                    ->append(message)->toString());
            }
        }
    } else {
        format = record)->getFormat();
    }
}

DataTable* DataTable::addRecord(DataRecord* record)
{
    checkOrSetFormat(record);
    addRecordImpl(0, record);
    return this;
}

DataRecord* DataTable::addRecord(voidArray* fieldValues)
{
    auto rec = addRecord();
    for(auto value : *fieldValues)) {
        rec)->addValue(value);
    }
    return rec;
}

DataTable* DataTable::addRecord(int index, DataRecord* record)
{
    checkOrSetFormat(record);
    addRecordImpl(index), record);
    return this;
}

DataRecord* DataTable::addRecord()
{
    if(getFormat() == 0) {
        throw new ::java::lang::IllegalStateException(u"Can't add empty record because format of data table was not set"_j);
    }
    auto record = new DataRecord(getFormat());
    addRecordImpl(0, record);
    return record;
}

void DataTable::addRecordImpl(int  index, DataRecord* record)
{
    if(getRecordCount() >= format)->getMaxRecords()) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"dtCannotAddRecord"_j))->append(u"maximum number of records is reached: "_j)
            ->append(format)->getMaxRecords())->toString());
    }
    try {
        validateRecord(record);
    } catch (ValidationException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
    if(index != 0) {
        records)->add((index))->intValue(), record);
    } else {
        records)->add(record));
    }
    record)->setTable(this);
}

void DataTable::validate()
{
    if(isInvalid()) {
        throw new ValidationException(invalidationMessage);
    }
    for (auto _i = getFormat())->getTableValidators())->iterator(); _i->hasNext(); ) {
        ::validator::TableValidator* tv = java_cast< ::validator::TableValidator* >(_i->next());
        {
            tv)->validate(this);
        }
    }
    for (auto _i = getFormat())->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->getType() == FieldFormat::DATATABLE_FIELD) {
                for (auto _i = this->iterator(); _i->hasNext(); ) {
                    DataRecord* rec = java_cast< DataRecord* >(_i->next());
                    {
                        auto nested = rec)->getDataTable(ff)->getName());
                        if(nested != 0) {
                            nested)->validate();
                        }
                    }
                }
            }
        }
    }
    new DataTable(encode(new ::encoding::ClassicEncodingSettings(false)));
}

void DataTable::validateRecord(DataRecord* record)
{
    for (auto _i = getFormat())->getRecordValidators())->iterator(); _i->hasNext(); ) {
        ::validator::RecordValidator* rv = java_cast< ::validator::RecordValidator* >(_i->next());
        {
            rv)->validate(this, record);
        }
    }
}

DataTable* DataTable::setRecord(int index, DataRecord* record)
{
    checkOrSetFormat(record);
    java_cast< DataRecord* >(records)->get(index)))->setTable(0);
    records)->set(index, record);
    record)->setTable(this);
    return this;
}

void DataTable::swapRecords(int index1, int index2)
{
    auto r1 = java_cast< DataRecord* >(records)->get(index1));
    auto r2 = java_cast< DataRecord* >(records)->get(index2));
    records)->set(index1, r2);
    records)->set(index2, r1);
}

java::util::List* DataTable::getRecords()
{
    return ::java::util::Collections::unmodifiableList(records);
}

bool DataTable::isInvalid()
{
    return invalidationMessage != 0;
}

std::string DataTable::getInvalidationMessage()
{
    return invalidationMessage;
}

DataRecord* DataTable::getRecord(int number)
{
    return java_cast< DataRecord* >(records)->get(number));
}

DataRecord* DataTable::getRecordById(const std::string & id)
{
    if(id == 0) {
        return 0;
    }
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            if(rec)->getId() != 0 && rec)->getId())->equals(id))) {
                return rec;
            }
        }
    }
    return 0;
}

DataRecord* DataTable::removeRecordImpl(int index)
{
    if(getRecordCount() <= format)->getMinRecords()) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Cannot remove record: minimum number of records is reached: "_j)->append(format)->getMinRecords())->toString());
    }
    return java_cast< DataRecord* >(records)->remove(index));
}

DataRecord* DataTable::removeRecord(int index)
{
    return removeRecordImpl(index);
}

void DataTable::removeRecords(DataRecord* rec)
{
    for (auto i = records)->size() - int(1); i >= 0; i--) {
        if(::com::tibbo::aggregate::common::util::Util::equals(rec, java_cast< DataRecord* >(records)->get(i)))) {
            removeRecordImpl(i);
        }
    }
}

void DataTable::reorderRecord(DataRecord* record, int index)
{
    auto oi = records)->indexOf(record);
    if(oi == -int(1)) {
        throw new ::java::lang::IllegalStateException(u"Record is not from this table"_j);
    }
    if(records)->remove(record))) {
        records)->add(index - (oi < index ? int(1) : int(0)), record);
    }
}

bool DataTable::equals(void* obj)
{
    if(obj == 0) {
        return false;
    }
    if(!(dynamic_cast< DataTable* >(obj) != 0)) {
        return false;
    }
    auto other = java_cast< DataTable* >(obj);
    if(!format)->equals(other)->getFormat()))) {
        return false;
    }
    if(getRecordCount() != other)->getRecordCount()) {
        return false;
    }
    for (auto i = int(0); i < getRecordCount(); i++) {
        if(!getRecord(i))->equals(other)->getRecord(i)))) {
            return false;
        }
    }
    return true;
}

std::string DataTable::getEncodedData(::encoding::ClassicEncodingSettings* settings)
{
    auto encodedData = new std::stringBuffer(getFieldCount() * getRecordCount() * int(3));
    auto encodeFieldNames = settings != 0 ? settings)->isEncodeFieldNames() : true;
    if(encodeFieldNames) {
        for (auto i = int(0); i < format)->getFieldCount(); i++) {
            encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FIELD_NAME_, format)->getField(i))->getName()))->encode(settings != 0 ? settings)->isUseVisibleSeparators() : false));
        }
    }
    for (auto i = int(0); i < getRecordCount(); i++) {
        encodedData)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_RECORD_, getRecord(i))->encode(settings)))->encode(settings != 0 ? settings)->isUseVisibleSeparators() : false));
    }
    return encodedData)->toString();
}

std::string DataTable::encode()
{
    return encode(new ::encoding::ClassicEncodingSettings(false));
}

std::string DataTable::encode(bool useVisibleSeparators)
{
    return encode(new ::encoding::ClassicEncodingSettings(useVisibleSeparators));
}

std::string DataTable::encode(::encoding::ClassicEncodingSettings* settings)
{
    int  formatId;
    auto res = new std::stringBuffer(getFieldCount() * getRecordCount() * int(3) + getFieldCount() * int(7));
    auto needToInsertFormat = settings != 0 && settings)->isEncodeFormat();
    if(needToInsertFormat) {
        if(getFormat())->getFieldCount() > 0 && settings)->getFormatCache() != 0) {
            formatId = settings)->getFormatCache())->getId(getFormat());
            if(formatId == 0) {
                formatId = settings)->getFormatCache())->add(getFormat()));
            }
            if(settings)->getKnownFormatCollector() != 0) {
                needToInsertFormat = false;
                if(settings)->getKnownFormatCollector())->isKnown((formatId))->intValue()) && settings)->getKnownFormatCollector())->isMarked((formatId))->intValue())) {
                    res)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FORMAT_ID_, formatId)->toString()))->encode(settings)->isUseVisibleSeparators()));
                    if(Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                        Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Using cached format #"_j)->append(formatId))
                            ->append(u": "_j)
                            ->append(getFormat())->encode(settings))->toString());
                    }
                } else {
                    auto encodedFormat = getFormat())->encode(settings);
                    res)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FORMAT_, encodedFormat))->encode(settings)->isUseVisibleSeparators()));
                    res)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FORMAT_ID_, formatId)->toString()))->encode(settings)->isUseVisibleSeparators()));
                    if(Log::PROTOCOL_CACHING())->isDebugEnabled()) {
                        Log::PROTOCOL_CACHING())->debug(std::stringBuilder().append(u"Marking format #"_j)->append(formatId))
                            ->append(u" as known for caller: "_j)
                            ->append(encodedFormat)->toString());
                    }
                }
            }
        }
        if(needToInsertFormat) {
            auto encodedFormat = getFormat())->encode(settings);
            res)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FORMAT_, encodedFormat))->encode(settings)->isUseVisibleSeparators()));
        }
    }
    res)->append(getEncodedData(settings));
    if(isInvalid()) {
        res)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_FORMAT_, invalidationMessage))->encode(settings)->isUseVisibleSeparators()));
    }
    if(formatId != 0) {
        settings)->getKnownFormatCollector())->makeKnown((formatId))->intValue(), true);
    }
    return res)->toString();
}

std::string DataTable::toString()
{
    if(getNamingExpression() != 0) {
        return getDescription();
    } else {
        return toDefaultString();
    }
}

std::string DataTable::getDescription()
{
    auto namingExpression = getNamingExpression();
    if(namingExpression == 0) {
        return toDefaultString();
    }
    auto evaluator = ensureEvaluator();
    void* name;
    try {
        name = evaluator)->evaluate(namingExpression);
    } catch (::java::lang::Exception* ex) {
        Log::CORE())->info(std::stringBuilder().append(u"Error evaluating naming expression of table '"_j)->append(toDefaultString())
            ->append(u"'"_j)->toString(), ex);
        return toDefaultString();
    }
    return name == 0 ? static_cast< const std::string & >(0) : name)->toString();
}

std::string DataTable::toDefaultString()
{
    if(getRecordCount() == 1) {
        return dataAsString();
    } else {
        return ::java::text::MessageFormat::format(Cres::get())->getString(u"dtTable"_j), new voidArray({getRecordCount()))}));
    }
}

com::tibbo::aggregate::common::expression::Expression* DataTable::getNamingExpression()
{
    return format == 0 ? static_cast< ::com::tibbo::aggregate::common::expression::Expression* >(0) : format)->getNamingExpression();
}

com::tibbo::aggregate::common::expression::Evaluator* DataTable::ensureEvaluator()
{
    if(namingEvaluator == 0) {
        auto defaultResolver = new ::com::tibbo::aggregate::common::expression::DefaultReferenceResolver();
        defaultResolver)->setDefaultTable(this);
        namingEvaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(static_cast< ::com::tibbo::aggregate::common::expression::ReferenceResolver* >(defaultResolver));
        namingEvaluator)->setResolver(::com::tibbo::aggregate::common::expression::Reference::SCHEMA_ENVIRONMENT(), new DataTable_DataTableReferenceResolver(this));
    }
    return namingEvaluator;
}

void DataTable::fixRecords()
{
    getFormat())->fixRecords(this);
}

std::string DataTable::dataAsString()
{
    return dataAsString(true, false);
}

std::string DataTable::dataAsString(bool showFieldNames, bool showHiddenFields)
{
    auto res = new std::stringBuffer();
    auto recordSeparator = getFieldCount() > 1 ? u" | "_j : u", "_j;
    for (auto i = int(0); i < getRecordCount(); i++) {
        if(i > 0) {
            res)->append(recordSeparator);
        }
        auto rec = getRecord(i);
        res)->append(rec)->dataAsString(showFieldNames, showHiddenFields));
    }
    return res)->toString();
}

bool DataTable::isOneCellTable()
{
    return getFieldCount() == 1 && getRecordCount() == 1;
}

bool DataTable::conform(TableFormat* rf)
{
    return conformMessage(rf) == 0;
}

std::string DataTable::conformMessage(TableFormat* rf)
{
    if(getRecordCount() < rf)->getMinRecords()) {
        return std::stringBuilder().append(u"Number of records too small: need "_j)->append(rf)->getMinRecords())
            ->append(u" or more, found "_j)
            ->append(getRecordCount())->toString();
    }
    if(getRecordCount() > rf)->getMaxRecords()) {
        return std::stringBuilder().append(u"Number of records too big: need "_j)->append(rf)->getMaxRecords())
            ->append(u" or less, found "_j)
            ->append(getRecordCount())->toString();
    }
    return getFormat())->extendMessage(rf);
}

java::util::List* DataTable::selectAll(DataTableQuery* query)
{
    std::list  r = new ::java::util::ArrayList();
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            auto meet = true;
            for (auto _i = query)->getConditions())->iterator(); _i->hasNext(); ) {
                QueryCondition* cond = java_cast< QueryCondition* >(_i->next());
                {
                    if(!rec)->meetToCondition(cond)) {
                        meet = false;
                    }
                }
            }
            if(meet) {
                r)->add(rec));
            }
        }
    }
    return r;
}

java::lang::Integer* DataTable::findIndex(DataTableQuery* query)
{
    for (auto i = int(0); i < this->getRecordCount(); i++) {
        auto meet = true;
        auto rec = this->getRecord(i);
        for (auto _i = query)->getConditions())->iterator(); _i->hasNext(); ) {
            QueryCondition* cond = java_cast< QueryCondition* >(_i->next());
            {
                if(!rec)->meetToCondition(cond)) {
                    meet = false;
                }
            }
        }
        if(meet) {
            return i);
        }
    }
    return 0;
}

DataRecord* DataTable::select(DataTableQuery* query)
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            auto meet = true;
            for (auto _i = query)->getConditions())->iterator(); _i->hasNext(); ) {
                QueryCondition* cond = java_cast< QueryCondition* >(_i->next());
                {
                    if(!rec)->meetToCondition(cond)) {
                        meet = false;
                    }
                }
            }
            if(meet) {
                return rec;
            }
        }
    }
    return 0;
}

DataRecord* DataTable::select(const std::string & field, void* value)
{
    return select(new DataTableQuery(new QueryConditionArray({new QueryCondition(field, value)})));
}

java::lang::Integer* DataTable::findIndex(const std::string & field, void* value)
{
    return findIndex(new DataTableQuery(new QueryConditionArray({new QueryCondition(field, value)})));
}

void DataTable::sort(const std::string & field, bool ascending)
{
    sort(new DataTableSorter(new SortOrderArray({new SortOrder(field, ascending)})));
}

void DataTable::sort(DataTableSorter* sorter)
{
    ::java::util::Collections::sort(records, new DataTable_sort_1(this, sorter));
}

void DataTable::sort(::java::util::Comparator* comparator)
{
    ::java::util::Collections::sort(records, comparator);
}

DataRecord* DataTable::rec()
{
    return getRecord(0);
}

void* DataTable::get()
{
    return getRecord(0))->getValue(int(0));
}

void DataTable::splitFormat()
{
    for (auto _i = records)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            rec)->cloneFormatFromTable();
        }
    }
}

void DataTable::joinFormats()
{
    for (auto _i = records)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            rec)->setFormat(this->getFormat());
        }
    }
}

java::util::Iterator* DataTable::iterator()
{
    return new DataTable_Iter(this);
}
 */
DataTable* DataTable::clone()
{
	DataTable* cl=0;
	try
	{      // constructor copy
	 cl = new DataTable(*this);
	}
	catch (...)
	{
	}

	//cl->records = CloneUtils::deepClone(records));

   //	for ( )
  //	{
   //	 DataRecord* rec;
   //	 rec->setTable(cl);
   //	}

   //	cl->namingEvaluator=0;
	return cl;
}


//Constructor copy
DataTable::DataTable(DataTable& table)
{

}
 /*
int DataTable::compareTo(DataTable* other)
{
    return dataAsString())->compareTo(other)->dataAsString());
}

int DataTable::compareTo(void* arg0)
{ 
    return compareTo(dynamic_cast< DataTable* >(arg0));
}

void DataTable::append(DataTable* src)
{
    for (auto _i = src)->iterator(); _i->hasNext(); ) {
        DataRecord* rec = java_cast< DataRecord* >(_i->next());
        {
            this->addRecord(rec);
        }
    }
}



java::lang::Class* DataTable::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTable", 46);
    return c;
}

void DataTable::clinit()
{
struct string_init_ {
    string_init_() {
    ELEMENT_FORMAT_ = u"F"_j;
    ELEMENT_FORMAT_ID_ = u"D"_j;
    ELEMENT_RECORD_ = u"R"_j;
    ELEMENT_INVALIDATOR_ = u"I"_j;
    ELEMENT_FIELD_NAME_ = u"N"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_FORMAT_ = new TableFormat();
        {
            DEFAULT_FORMAT_)->makeImmutable(0);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}


 */
