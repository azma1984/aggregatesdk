#include "TableFormat.h"

#include "util/ElementList.h"
#include "AggreGateException.h"

/*boost::shared_ptr<TableFormat> *///TableFormat *TableFormat::EMPTY_FORMAT = new TableFormat(0, 0);
/*
const int TableFormat::DEFAULT_MIN_RECORDS = 0;
const int TableFormat::DEFAULT_MAX_RECORDS = 0x7fffffff;

const std::string TableFormat::ELEMENT_FLAGS = "F";
const std::string TableFormat::ELEMENT_TABLE_VALIDATORS = "V";
const std::string TableFormat::ELEMENT_RECORD_VALIDATORS = "R";
const std::string TableFormat::ELEMENT_BINDINGS = "B";
const std::string TableFormat::ELEMENT_MIN_RECORDS = "M";
const std::string TableFormat::ELEMENT_MAX_RECORDS = "X";
const std::string TableFormat::ELEMENT_NAMING = "N";

const char TableFormat::TABLE_VALIDATOR_KEY_FIELDS = 'K';
const char TableFormat::TABLE_VALIDATOR_EXPRESSION = 'E';
const char TableFormat::RECORD_VALIDATOR_KEY_FIELDS = 'K';

const char TableFormat::REORDERABLE_FLAG = 'R';
const char TableFormat::UNRESIZEBLE_FLAG = 'U';
const char TableFormat::BINDINGS_EDITABLE_FLAG = 'B';

*/
TableFormat::TableFormat() 
{
}

TableFormat::TableFormat(bool reorderable) 
{
}

TableFormat::TableFormat(int minRecords, int maxRecords)
{
  //  ctor(minRecords,maxRecords);
}

TableFormat *TableFormat::clone() const
{
    return NULL;
}

std::list<boost::shared_ptr<FieldFormat>> &TableFormat::getFields()
{
    //todo
    //return immutable ? Collections.unmodifiableList(fields) : fields;
    return fields;
}

/*
TableFormat::TableFormat(FieldFormat* ff) 
{
    ctor(ff);
}

TableFormat::TableFormat(const std::string& format, ClassicEncodingSettings* settings)
{
    ctor(format, settings);
}

TableFormat::TableFormat(const std::string& format, ClassicEncodingSettings* settings, bool validate)
{
    ctor(format, settings, validate);
}
*/
TableFormat::TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat)
{
   // ctor(minRecords,maxRecords,fieldFormat);
}
/*
TableFormat::TableFormat(int minRecords, int maxRecords, FieldFormat* fieldFormat)     
{
    ctor(minRecords,maxRecords,fieldFormat);
}

void TableFormat::init()
{    
    minRecords = TableFormat::DEFAULT_MIN_RECORDS;
    maxRecords = TableFormat::DEFAULT_MAX_RECORDS;
    reorderable = false;
    unresizable = false;
    bindingsEditable = false;
}

void TableFormat::ctor()
{
    init();
}

void TableFormat::ctor(bool reorderable)
{
    ctor();
    setReorderable(reorderable);
}

void TableFormat::ctor(int minRecords, int maxRecords)
{
    ctor();
    setMinRecords(minRecords);
    setMaxRecords(maxRecords);
}

void TableFormat::ctor(FieldFormat* ff)
{
    ctor();
    addField(ff);
}

void TableFormat::ctor(const std::string& format, ClassicEncodingSettings* settings)
{
    ctor(format, settings, true);
}

void TableFormat::ctor(const std::string& format, ClassicEncodingSettings* settings, bool validate)
{
    ctor();

    //TODO: ElementList
    ElementList els = StringUtils.elements(format, settings->isUseVisibleSeparators());

    for (Element el : els)
    {
        if (el.getName() == null) {
            int index = fields.size();
            FieldFormat ff = FieldFormat.create(el.getValue(), settings, validate);
            fields.add(ff);
            getFieldLookup().put(ff.getName(), index);
        }else if (el.getName().equals(ELEMENT_FLAGS)) {
            std::string flags = el.getValue();
            setReorderable(flags.indexOf(REORDERABLE_FLAG) != -1 ? true : false);
            setUnresizable(flags.indexOf(UNRESIZEBLE_FLAG) != -1 ? true : false);
            setBindingsEditable(flags.indexOf(BINDINGS_EDITABLE_FLAG) != -1 ? true : false);
        }else if (el.getName().equals(ELEMENT_MIN_RECORDS)) {
            minRecords = Integer.parseInt(el.getValue());
        }else if (el.getName().equals(ELEMENT_MAX_RECORDS)) {
            maxRecords = Integer.parseInt(el.getValue());
        }else if (el.getName().equals(ELEMENT_TABLE_VALIDATORS)) {
            createTableValidators(el.getValue(), settings);
        }else if (el.getName().equals(ELEMENT_RECORD_VALIDATORS)) {
            createRecordValidators(el.getValue(), settings);
        }else if (el.getName().equals(ELEMENT_BINDINGS)) {
            createBindings(el.getValue(), settings);
        }else if (el.getName().equals(ELEMENT_NAMING)) {
            createNaming(el.getValue(), settings);
        }
    }
}

void TableFormat::ctor(int minRecords, int maxRecords, const std::string & fieldFormat)
{
    ctor(minRecords, maxRecords);
    addField(fieldFormat);
}

void TableFormat::ctor(int minRecords, int maxRecords, boost::shared_ptr<FieldFormat> fieldFormat)
{
    ctor(minRecords, maxRecords);
    addField(fieldFormat);
}

//TableFormat* TableFormat::addFields(FieldFormatArray* fieldFormats)
//{
//    for(auto each : *fieldFormats)) {
//        this->addField(each);
//    }
//    return this;
//}


TableFormat* TableFormat::addFields(std::list<FieldFormat>& fieldFormats)
{
    for (std::list<FieldFormat>::iterator it = fieldFormats.begin(); it!=fieldFormats.end(); ++it) {
        this->addField(each);
    }

    return this;
}

TableFormat* TableFormat::addField(FieldFormat* ff)
{
    return addField(ff, fields->size());
}
*/
boost::shared_ptr<TableFormat> TableFormat::addField(const std::string &encodedFormat)
{
    return 0;
}

boost::shared_ptr<TableFormat> TableFormat::addField(boost::shared_ptr<FieldFormat> ff, int index)
{
    return 0;
}

boost::shared_ptr<TableFormat> TableFormat::addField(boost::shared_ptr<FieldFormat> ff)
{
    return 0;
}


/*
void TableFormat::addField(char type, const std::string& name)
{
    addField(type, name, fields.size());
}

TableFormat* TableFormat::addField(char type, const std::string& name, const std::string& description)
{
    addField(static_cast< FieldFormat* >(&FieldFormat::create(name, type, description)));
    return this;
}

TableFormat* TableFormat::addField(char type, const std::string& name, const std::string& description, void* defaultValue)
{
    addField(static_cast<FieldFormat*>(&FieldFormat::create(name, type, description, defaultValue)));
    return this;
}

TableFormat* TableFormat::addField(char type, const std::string& name, const std::string& description, void* defaultValue, const std::string& group)
{
    addField(static_cast<FieldFormat*>(&FieldFormat::create(name, type, description, defaultValue, group)));
    return this;
}

TableFormat* TableFormat::addField(char type, const std::string& name, const std::string& description, void* defaultValue, bool nullable)
{
    addField(static_cast< FieldFormat* >(&FieldFormat::create(name, type, description, defaultValue, nullable)));
    return this;
}

TableFormat* TableFormat::addField(char type, const std::string & name, const std::string & description, void* defaultValue, bool nullable, const std::string & group)
{
    addField(static_cast< FieldFormat* >(&FieldFormat::create(name, type, description, defaultValue, nullable, group)));
    return this;
}
//TODO: доступ по индексу
TableFormat* TableFormat::addField(FieldFormat* ff, int index)
{
    if(immutable) {
        throw AggreGateException("Immutable", "TableFormat::addField");
    }
    FieldFormat existing = getField(ff.getName());

    if (existing != null) {
        if (!ff.extend(existing)) {
            throw new AggreGateException(std::string("Field '").append(ff.getName()).append("' already exist in format") );
        }else {
            return this;
        }
    }

    for (int i = index; i < fields.size(); i++) {
      std::string fn = fields.get(i).getName();

      Integer previousIndex = getFieldLookup().get(fn);

      if (previousIndex == null)
      {
        throw new IllegalStateException("Null lookup index for field " + i + " (" + fn + ")");
      }

      getFieldLookup().put(fn, previousIndex + 1);
    }

    fields.add(index, ff);

    getFieldLookup().put(ff.getName(), index);

    return this;
}

TableFormat* TableFormat::addField(char16_t type, const std::string & name, int index) 
{
    if (immutable) {
        throw AggreGateException("Immutable", "TableFormat::addField");
    }

    return addField(FieldFormat::create(name, type), index);
}

//TODO: доступ по инлексу
TableFormat* TableFormat::removeField(const std::string& name)
{
    if (immutable) {
        throw AggreGateException("Immutable", "TableFormat::addField");
    }

    std::map<std::string, int>::iterator it= fieldLookup.find(name);
    if (it != fieldLookup.end()) {
        int index = it->second();
        fieldLookup.erase( it );
        //TODO: удаление по индексу
         //fields.remove(index.intValue());
        //for (int i = index; i < fields->size(); i++) {
        //    std::string fn = fields->get(i)->getName();
        //    getFieldLookup().put(fn, getFieldLookup().get(fn) - 1);
        //}
      
    }

    return this;
}

TableFormat* TableFormat::renameField(const std::string& oldName, const std::string& newName)
{
    if (immutable) {
        throw AggreGateException("renameField", "TableFormat::addField");
    }

    FieldFormat* ff = getField(oldName);
    if (ff == 0) {
        return this;
    }

    ff->setName(newName);

    std::map<std::string, int>::iterator it= fieldLookup.find(name);
    if (it != fieldLookup.end()) {
        int index = it->second();
        fieldLookup.erase( it );
        fieldLookup.insert(newName, index);
    }

    return this;
}

char TableFormat::getFieldType(int index)
{
    //TODO: доступ по инлексу
    return fields.get(index)->getType();
}

std::string TableFormat::getFieldName(int index)
{
    //TODO: доступ по инлексу
    return fields.get(index)->getName();
}

int TableFormat::getFieldIndex(const std::string& name)
{
    std::map<std::string, int>::iterator it = fieldLookup.find(name);
    if (it!=fieldLookup.end())
        return it.second();

    return -1;
}

int TableFormat::getFieldCount()
{
    return fields.size();
}

std::list<FieldFormat> TableFormat::getFields()
{
   // return immutable ? unmodifiableList(fields) : fields;
	return fields;
}

//TODO:
std::list<RecordValidator> TableFormat::getRecordValidators()
{    
  //  return immutable ? unmodifiableList(recordValidators) :recordValidators;
	return recordValidators;
}

//TODO:
std::list<TableValidator> TableFormat::getTableValidators()
{
  //  return immutable ? unmodifiableList(tableValidators) : tableValidators;
	return tableValidators;
}

int TableFormat::getMaxRecords()
{
    return maxRecords;
}

int TableFormat::getMinRecords()
{
    return minRecords;
}

bool TableFormat::isReorderable()
{
    return reorderable;
}

bool TableFormat::isUnresizable()
{
    return unresizable;
}

void TableFormat::setUnresizable(bool unresizable)
{
    if(immutable) {
        throw AggreGateException("Immutable");
    }
    this->unresizable = unresizable;
}

bool TableFormat::isBindingsEditable()
{
    return bindingsEditable;
}

void TableFormat::setBindingsEditable(bool bindingsEditable)
{
    this->bindingsEditable = bindingsEditable;
}

//TODO:
std::list<Binding> TableFormat::getBindings()
{
  //  return immutable ? unmodifiableList(bindings) : bindings;
	 return  bindings;
}

void TableFormat::addBinding(Binding* binding)
{
    if(immutable) {
        throw AggreGateException("Immutable");
    }

    bindings.push_back(*binding);
}

void TableFormat::addBinding(Reference* target, Expression* expression)
{
    addBinding(new Binding(target, expression));
}

void TableFormat::addBinding(const std::string & target, const std::string & expression)
{
    addBinding(new Binding(new Reference(target), new Expression(expression)));
}

void TableFormat::removeBinding(Binding* binding)
{
    if(immutable) {
        throw AggreGateException("Immutable");
    }

    bindings.remove( binding );
   
    //for (std::list<boost::shared_ptr<Binding>>::iterator it = bindings.begin(); it!= bindings.end(); ++it) {
    //    if (static_cast<Binding*>(*it)->equals(binding)) {
    //        bindings.erase( it );
    //    }
    //}
    
}

 //TODO:: no usage
//void TableFormat::setBindings(std::list  in_bindings)
//{
//    if(immutable) {
//        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
//    }
//    bindings = in_bindings;
//}

com::tibbo::aggregate::common::expression::Expression* TableFormat::getNamingExpression()
{
    return namingExpression;
}

std::string TableFormat::encode(bool useVisibleSeparators)
{
    return encode(new ::encoding::ClassicEncodingSettings(useVisibleSeparators));
}

//TODO:
std::string TableFormat::encode(ClassicEncodingSettings* settings)
{
    std::stringstream formatString;

    //for (auto i = int(0); i < fields)->size(); i++) {
    //    formatString)->append((new Element(0, getField(i))->encode(settings)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(minRecords != DEFAULT_MIN_RECORDS) {
    //    formatString)->append((new Element(ELEMENT_MIN_RECORDS_, std::string::valueOf(minRecords)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(maxRecords != DEFAULT_MAX_RECORDS) {
    //    formatString)->append((new Element(ELEMENT_MAX_RECORDS_, std::string::valueOf(maxRecords)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(tableValidators)->size() > 0) {
    //    formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_TABLE_VALIDATORS_, getEncodedTableValidators(settings)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(recordValidators)->size() > 0) {
    //    formatString)->append((new Element(ELEMENT_RECORD_VALIDATORS_, getEncodedRecordValidators(settings)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(bindings)->size() > 0) {
    //    formatString)->append((new Element(ELEMENT_BINDINGS_, getEncodedBindings(settings)))->encode(settings)->isUseVisibleSeparators()));
    //}
    //if(namingExpression != 0) {
    //    formatString)->append((new Element(ELEMENT_NAMING_, namingExpression == 0 ? u""_j : namingExpression)->getText()))->encode(settings)->isUseVisibleSeparators()));
    //}
    //encAppend(formatString, ELEMENT_FLAGS_, getEncodedFlags(), settings);

    return formatString.str();
}

void TableFormat::encAppend(std::stringBuffer* buffer, const std::string & name, const std::string & value, ::encoding::ClassicEncodingSettings* settings)
{
    
    if(value != 0 && value)->length() > 0) {
        buffer)->append((new ::com::tibbo::aggregate::common::util::Element(name, value))->encode(settings)->isUseVisibleSeparators()));
    }
}

java::util::Map* TableFormat::getFieldLookup()
{
    if(fieldLookup == 0) {
        fieldLookup = new ::java::util::HashMap(getFieldCount());
        for (auto i = int(0); i < fields)->size(); i++) {
            auto field = java_cast< FieldFormat* >(fields)->get(i));
            fieldLookup)->put(field)->getName(), i));
        }
    }
    return fieldLookup;
}

std::string TableFormat::getEncodedFlags()
{
    auto buf = new std::stringBuffer();
    if(isReorderable()) {
        buf)->append(REORDERABLE_FLAG);
    }
    if(isUnresizable()) {
        buf)->append(UNRESIZEBLE_FLAG);
    }
    if(isBindingsEditable()) {
        buf)->append(BINDINGS_EDITABLE_FLAG);
    }
    return buf)->toString();
}

std::string TableFormat::getEncodedTableValidators(::encoding::ClassicEncodingSettings* settings)
{
    auto enc = new std::stringBuffer();
    for (auto _i = tableValidators)->iterator(); _i->hasNext(); ) {
        ::validator::TableValidator* tv = java_cast< ::validator::TableValidator* >(_i->next());
        {
            if(tv)->getType() != 0) {
                enc)->append((new ::com::tibbo::aggregate::common::util::Element(std::string::valueOf(tv)->getType())), tv)->encode()))->encode(settings)->isUseVisibleSeparators()));
            }
        }
    }
    return enc)->toString();
}

std::string TableFormat::getEncodedRecordValidators(::encoding::ClassicEncodingSettings* settings)
{
    auto enc = new std::stringBuffer();
    for (auto _i = recordValidators)->iterator(); _i->hasNext(); ) {
        ::validator::RecordValidator* rv = java_cast< ::validator::RecordValidator* >(_i->next());
        {
            if(rv)->getType() != 0) {
                enc)->append((new ::com::tibbo::aggregate::common::util::Element(std::string::valueOf(rv)->getType())), rv)->encode()))->encode(settings)->isUseVisibleSeparators()));
            }
        }
    }
    return enc)->toString();
}

std::string TableFormat::getEncodedBindings(::encoding::ClassicEncodingSettings* settings)
{
    auto enc = new std::stringBuffer();
    for (auto _i = bindings)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::binding::Binding* bin = java_cast< ::com::tibbo::aggregate::common::binding::Binding* >(_i->next());
        {
            enc)->append((new ::com::tibbo::aggregate::common::util::Element(bin)->getReference())->getImage(), bin)->getExpression())->getText()))->encode(settings)->isUseVisibleSeparators()));
        }
    }
    return enc)->toString();
}

std::string TableFormat::toString()
{
    return encode(new ::encoding::ClassicEncodingSettings(true));
}

FieldFormat* TableFormat::getField(int index)
{
    return java_cast< FieldFormat* >(fields)->get(index));
}

FieldFormat* TableFormat::getField(const std::string & fieldName)
{
    auto index = getFieldIndex(fieldName);
    if(index != -int(1)) {
        return getField(index);
    } else {
        return 0;
    }
}

bool TableFormat::hasField(const std::string & name)
{
    return getFieldIndex(name) != -int(1);
}

bool TableFormat::hasFields(char16_t type)
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->getType() == type) {
                return true;
            }
        }
    }
    return false;
}

bool TableFormat::hasReadOnlyFields()
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->isReadonly()) {
                return true;
            }
        }
    }
    return false;
}

java::util::List* TableFormat::getKeyFields()
{
    std::list  keyFields = new ::java::util::LinkedList();
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->isKeyField()) {
                keyFields)->add(ff)->getName()));
            }
        }
    }
    return keyFields;
}

bool TableFormat::extend(TableFormat* other)
{
    return extendMessage(other) == 0;
}

std::string TableFormat::extendMessage(TableFormat* other)
{
    if(this == other) {
        return 0;
    }
    if(equals(other))) {
        return 0;
    }
    if(!isReorderable() && other)->isReorderable()) {
        return std::stringBuilder().append(u"Different reorderable flags: need "_j)->append(isReorderable())
            ->append(u", found "_j)
            ->append(other)->isReorderable())->toString();
    }
    if(!isUnresizable() && other)->isUnresizable()) {
        return std::stringBuilder().append(u"Different unresizable flags: need "_j)->append(isUnresizable())
            ->append(u", found "_j)
            ->append(other)->isUnresizable())->toString();
    }
    if(!::com::tibbo::aggregate::common::util::Util::equals(getNamingExpression(), other)->getNamingExpression())) {
        return std::stringBuilder().append(u"Different naming expressions: need "_j)->append(getNamingExpression()))
            ->append(u", found "_j)
            ->append(other)->getNamingExpression()))->toString();
    }
    for (auto _i = other)->getBindings())->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::binding::Binding* otherBinding = java_cast< ::com::tibbo::aggregate::common::binding::Binding* >(_i->next());
        {
            if(!getBindings())->contains(otherBinding))) {
                return std::stringBuilder().append(u"Different bindings: need "_j)->append(getBindings()))
                    ->append(u", found "_j)
                    ->append(other)->getBindings()))->toString();
            }
        }
    }
    for (auto _i = other)->iterator(); _i->hasNext(); ) {
        FieldFormat* otherFormat = java_cast< FieldFormat* >(_i->next());
        {
            auto ownFormat = getField(otherFormat)->getName());
            if(ownFormat == 0) {
                if(otherFormat)->isOptional()) {
                    continue;
                } else {
                    return std::stringBuilder().append(u"Required field doesn't exist: "_j)->append(otherFormat)->getName())->toString();
                }
            }
            auto fieldExtendMessage = ownFormat)->extendMessage(otherFormat);
            if(fieldExtendMessage != 0) {
                return std::stringBuilder().append(u"Incorrect format of field '"_j)->append(otherFormat)->getName())
                    ->append(u"': "_j)
                    ->append(fieldExtendMessage)->toString();
            }
        }
    }
    return 0;
}

void TableFormat::addTableValidator(::validator::TableValidator* tv)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    tableValidators)->add(tv));
}

void TableFormat::addRecordValidator(::validator::RecordValidator* rv)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    recordValidators)->add(rv));
}

void TableFormat::createTableValidators(const std::string & source, ::encoding::ClassicEncodingSettings* settings)
{
    if(source == 0 || source)->length() == 0) {
        return;
    }
    auto validatorsData = ::com::tibbo::aggregate::common::util::StringUtils::elements(source, settings)->isUseVisibleSeparators());
    for (auto _i = validatorsData)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            auto validatorType = el)->getName())->charAt(int(0));
            auto validatorParams = el)->getValue();
            switch (validatorType) {
            case TABLE_VALIDATOR_KEY_FIELDS:
                addTableValidator(new ::validator::TableKeyFieldsValidator(validatorParams));
                break;
            case TABLE_VALIDATOR_EXPRESSION:
                addTableValidator(new ::validator::TableExpressionValidator(validatorParams));
                break;
            }

        }
    }
}

void TableFormat::createRecordValidators(const std::string & source, ::encoding::ClassicEncodingSettings* settings)
{
    if(source == 0 || source)->length() == 0) {
        return;
    }
    auto validatorsData = ::com::tibbo::aggregate::common::util::StringUtils::elements(source, settings)->isUseVisibleSeparators());
    for (auto _i = validatorsData)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            auto validatorType = el)->getName())->charAt(int(0));
            auto validatorParams = el)->getValue();
            switch (validatorType) {
            case RECORD_VALIDATOR_KEY_FIELDS:
                addRecordValidator(new ::validator::KeyFieldsValidator(validatorParams));
                break;
            }

        }
    }
}

void TableFormat::createBindings(const std::string & source, ::encoding::ClassicEncodingSettings* settings)
{
    if(source == 0 || source)->length() == 0) {
        return;
    }
    auto bindingsData = ::com::tibbo::aggregate::common::util::StringUtils::elements(source, settings)->isUseVisibleSeparators());
    for (auto _i = bindingsData)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            bindings)->add(new ::com::tibbo::aggregate::common::binding::Binding(new ::com::tibbo::aggregate::common::expression::Reference(el)->getName()), new ::com::tibbo::aggregate::common::expression::Expression(el)->getValue()))));
        }
    }
}

void TableFormat::createNaming(const std::string & source, ::encoding::ClassicEncodingSettings* settings)
{
    if(source == 0 || source)->length() == 0) {
        return;
    }
    namingExpression = new ::com::tibbo::aggregate::common::expression::Expression(source);
}

java::util::Iterator* TableFormat::iterator()
{
    return fields)->iterator();
}

bool TableFormat::isReplicated()
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(!ff)->isNotReplicated()) {
                return true;
            }
        }
    }
    return false;
}

bool TableFormat::isReadonly()
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(!ff)->isReadonly()) {
                return false;
            }
        }
    }
    return true;
}

bool TableFormat::isGrouped()
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->getGroup() != 0) {
                return true;
            }
        }
    }
    return false;
}

bool TableFormat::isAdvanced()
{
    for (auto _i = this->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            if(ff)->isAdvanced()) {
                return true;
            }
        }
    }
    return false;
}

bool TableFormat::isSingleRecord()
{
    return minRecords == 1 && maxRecords == 1;
}

bool TableFormat::isSingleField()
{
    return getFieldCount() == 1;
}

bool TableFormat::isSingleCell()
{
    return isSingleRecord() && isSingleField();
}

bool TableFormat::isEmpty()
{
    return minRecords == 0 && maxRecords == 0 && getFieldCount() == 0;
}

bool TableFormat::isImmutable()
{
    return immutable;
}

TableFormat* TableFormat::resetAllowedRecords()
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->minRecords = DEFAULT_MIN_RECORDS;
    this->maxRecords = DEFAULT_MAX_RECORDS;
    return this;
}

TableFormat* TableFormat::setMaxRecords(int maxRecords)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->maxRecords = maxRecords;
    return this;
}

TableFormat* TableFormat::setMinRecords(int minRecords)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->minRecords = minRecords;
    return this;
}

void TableFormat::fixRecords(DataTable* table)
{
    if(immutable && immutabilizer != table) {
        throw new ::java::lang::IllegalStateException(u"Format was not made immutable by this table"_j);
    }
    minRecords = table)->getRecordCount();
    maxRecords = table)->getRecordCount();
}

TableFormat* TableFormat::setReorderable(bool reorderable)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->reorderable = reorderable;
    return this;
}
*/
//TableFormat* TableFormat::setNamingExpression(Expression* namingExpression)
//
  /*
	if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->namingExpression = namingExpression;
    */
//	return this;
//}

TableFormat* TableFormat::setNamingExpression(const std::string & namingExpression)
{
  //  setNamingExpression(new ::com::tibbo::aggregate::common::expression::Expression(namingExpression));
    return this;
}
/*

int TableFormat::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + maxRecords;
    result = prime * result + minRecords;
    result = prime * result + ((fields == 0) ? int(0) : fields)->hashCode());
    result = prime * result + ((namingExpression == 0) ? int(0) : namingExpression)->hashCode());
    result = prime * result + ((recordValidators == 0) ? int(0) : recordValidators)->hashCode());
    result = prime * result + ((tableValidators == 0) ? int(0) : tableValidators)->hashCode());
    result = prime * result + (reorderable ? int(1231) : int(1237));
    result = prime * result + (unresizable ? int(1231) : int(1237));
    result = prime * result + ((bindings == 0) ? int(0) : bindings)->hashCode());
    if(result < 0) {
        result = ::java::lang::Integer::MAX_VALUE + result;
    }
    return result;
}

bool TableFormat::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< TableFormat* >(obj);
    if(maxRecords != other)->maxRecords) {
        return false;
    }
    if(minRecords != other)->minRecords) {
        return false;
    }
    if(fields == 0) {
        if(other)->fields != 0) {
            return false;
        }
    } else if(!fields)->equals(other)->fields))) {
        return false;
    }
    if(namingExpression == 0) {
        if(other)->namingExpression != 0) {
            return false;
        }
    } else if(!namingExpression)->equals(other)->namingExpression))) {
        return false;
    }
    if(recordValidators == 0) {
        if(other)->recordValidators != 0) {
            return false;
        }
    } else if(!recordValidators)->equals(other)->recordValidators))) {
        return false;
    }
    if(tableValidators == 0) {
        if(other)->tableValidators != 0) {
            return false;
        }
    } else if(!tableValidators)->equals(other)->tableValidators))) {
        return false;
    }
    if(reorderable != other)->reorderable) {
        return false;
    }
    if(unresizable != other)->unresizable) {
        return false;
    }
    if(bindings == 0) {
        if(other)->bindings != 0) {
            return false;
        }
    } else if(!bindings)->equals(other)->bindings))) {
        return false;
    }
    return true;
}

TableFormat* TableFormat::clone()
{
    TableFormat* cl;
    try {
        cl = java_cast< TableFormat* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
    cl)->fields = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(fields));
    cl)->fieldLookup = java_cast< std::map >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(getFieldLookup()));
    cl)->recordValidators = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(recordValidators));
    cl)->tableValidators = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(tableValidators));
    cl)->bindings = java_cast< std::list  >(::com::tibbo::aggregate::common::util::CloneUtils::deepClone(bindings));
    cl)->immutable = false;
    return cl;
}
*/
void TableFormat::makeImmutable(DataTable* immutabilizer)
{
    if (immutable) 
	{
        return;
    }

    immutable = true;
//    this->immutabilizer = immutabilizer;

//    for (std::list<FieldFormat>::iterator it = fields.begin(); it!=fields.end(); ++it ) 
//	{
       //TODO:
 //      *it->makeImmutable();
 //   }
}

/*
void TableFormat::clinit()
{
struct string_init_ {
    string_init_() {
    ELEMENT_FLAGS_ = u"F"_j;
    ELEMENT_TABLE_VALIDATORS_ = u"V"_j;
    ELEMENT_RECORD_VALIDATORS_ = u"R"_j;
    ELEMENT_BINDINGS_ = u"B"_j;
    ELEMENT_MIN_RECORDS_ = u"M"_j;
    ELEMENT_MAX_RECORDS_ = u"X"_j;
    ELEMENT_NAMING_ = u"N"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_FORMAT_ = new TableFormat(int(0), int(0));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}
*/
