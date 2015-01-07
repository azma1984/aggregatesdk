// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/TableFormat.java
#include "TableFormat.h"
#include "PublicCloneable.h"
/*
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/validator/KeyFieldsValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/RecordValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/TableExpressionValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/TableValidator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/CloneUtils.h"
#include <com/tibbo/aggregate/common/util/Element.h"
#include <com/tibbo/aggregate/common/util/ElementList.h"

#include <com/tibbo/aggregate/common/util/StringUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
*/
/*
TableFormat::TableFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

TableFormat::TableFormat() 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

TableFormat::TableFormat(bool reorderable) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(reorderable);
}

TableFormat::TableFormat(int minRecords, int maxRecords) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(minRecords,maxRecords);
}

TableFormat::TableFormat(FieldFormat* ff) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(ff);
}

TableFormat::TableFormat(std::string* format, ::encoding::ClassicEncodingSettings* settings) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,settings);
}

TableFormat::TableFormat(std::string* format, ::encoding::ClassicEncodingSettings* settings, bool validate) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(format,settings,validate);
}

TableFormat::TableFormat(int minRecords, int maxRecords, std::string* fieldFormat) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(minRecords,maxRecords,fieldFormat);
}

TableFormat::TableFormat(int minRecords, int maxRecords, FieldFormat* fieldFormat) 
    : TableFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(minRecords,maxRecords,fieldFormat);
}

void TableFormat::init()
{
    fields = new ::java::util::ArrayList(int(4));
    fieldLookup = new ::java::util::HashMap(int(4));
    minRecords = TableFormat::DEFAULT_MIN_RECORDS;
    maxRecords = TableFormat::DEFAULT_MAX_RECORDS;
    recordValidators = new ::java::util::LinkedList();
    tableValidators = new ::java::util::LinkedList();
    bindings = new ::java::util::LinkedList();
}

TableFormat*& TableFormat::EMPTY_FORMAT()
{
    
    return EMPTY_FORMAT_;
}
TableFormat* TableFormat::EMPTY_FORMAT_;

const int TableFormat::DEFAULT_MIN_RECORDS;

const int TableFormat::DEFAULT_MAX_RECORDS;

std::string& TableFormat::ELEMENT_FLAGS()
{
    
    return ELEMENT_FLAGS_;
}
std::string TableFormat::ELEMENT_FLAGS_;

std::string& TableFormat::ELEMENT_TABLE_VALIDATORS()
{
    
    return ELEMENT_TABLE_VALIDATORS_;
}
std::string TableFormat::ELEMENT_TABLE_VALIDATORS_;

std::string& TableFormat::ELEMENT_RECORD_VALIDATORS()
{
    
    return ELEMENT_RECORD_VALIDATORS_;
}
std::string TableFormat::ELEMENT_RECORD_VALIDATORS_;

std::string& TableFormat::ELEMENT_BINDINGS()
{
    
    return ELEMENT_BINDINGS_;
}
std::string TableFormat::ELEMENT_BINDINGS_;

std::string& TableFormat::ELEMENT_MIN_RECORDS()
{
    
    return ELEMENT_MIN_RECORDS_;
}
std::string TableFormat::ELEMENT_MIN_RECORDS_;

std::string& TableFormat::ELEMENT_MAX_RECORDS()
{
    
    return ELEMENT_MAX_RECORDS_;
}
std::string TableFormat::ELEMENT_MAX_RECORDS_;

std::string& TableFormat::ELEMENT_NAMING()
{
    
    return ELEMENT_NAMING_;
}
std::string TableFormat::ELEMENT_NAMING_;

const char16_t TableFormat::TABLE_VALIDATOR_KEY_FIELDS;

const char16_t TableFormat::TABLE_VALIDATOR_EXPRESSION;

const char16_t TableFormat::RECORD_VALIDATOR_KEY_FIELDS;

const char16_t TableFormat::REORDERABLE_FLAG;

const char16_t TableFormat::UNRESIZEBLE_FLAG;

const char16_t TableFormat::BINDINGS_EDITABLE_FLAG;

void TableFormat::ctor()
{
    super::ctor();
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

void TableFormat::ctor(std::string* format, ::encoding::ClassicEncodingSettings* settings)
{
    ctor(format, settings, true);
}

void TableFormat::ctor(std::string* format, ::encoding::ClassicEncodingSettings* settings, bool validate)
{
    ctor();
    if(format == 0) {
        return;
    }
    auto els = ::com::tibbo::aggregate::common::util::StringUtils::elements(format, settings)->isUseVisibleSeparators());
    for (auto _i = els)->iterator(); _i->hasNext(); ) {
        ::com::tibbo::aggregate::common::util::Element* el = java_cast< ::com::tibbo::aggregate::common::util::Element* >(_i->next());
        {
            if(el)->getName() == 0) {
                auto index = fields)->size();
                auto ff = FieldFormat::create(el)->getValue(), settings, validate);
                fields)->add(ff));
                getFieldLookup())->put(ff)->getName(), index));
                continue;
            }
            if(el)->getName())->equals(ELEMENT_FLAGS_))) {
                auto flags = el)->getValue();
                setReorderable(flags)->indexOf(static_cast< int >(REORDERABLE_FLAG)) != -int(1) ? true : false);
                setUnresizable(flags)->indexOf(static_cast< int >(UNRESIZEBLE_FLAG)) != -int(1) ? true : false);
                setBindingsEditable(flags)->indexOf(static_cast< int >(BINDINGS_EDITABLE_FLAG)) != -int(1) ? true : false);
                continue;
            }
            if(el)->getName())->equals(ELEMENT_MIN_RECORDS_))) {
                minRecords = ::java::lang::Integer::parseInt(el)->getValue());
                continue;
            }
            if(el)->getName())->equals(ELEMENT_MAX_RECORDS_))) {
                maxRecords = ::java::lang::Integer::parseInt(el)->getValue());
                continue;
            }
            if(el)->getName())->equals(ELEMENT_TABLE_VALIDATORS_))) {
                createTableValidators(el)->getValue(), settings);
                continue;
            }
            if(el)->getName())->equals(ELEMENT_RECORD_VALIDATORS_))) {
                createRecordValidators(el)->getValue(), settings);
                continue;
            }
            if(el)->getName())->equals(ELEMENT_BINDINGS_))) {
                createBindings(el)->getValue(), settings);
                continue;
            }
            if(el)->getName())->equals(ELEMENT_NAMING_))) {
                createNaming(el)->getValue(), settings);
                continue;
            }
        }
    }
}

void TableFormat::ctor(int minRecords, int maxRecords, std::string* fieldFormat)
{
    ctor(minRecords, maxRecords);
    addField(fieldFormat);
}

void TableFormat::ctor(int minRecords, int maxRecords, FieldFormat* fieldFormat)
{
    ctor(minRecords, maxRecords);
    addField(fieldFormat);
}

TableFormat* TableFormat::addFields(FieldFormatArray* fieldFormats)
{
    for(auto each : *fieldFormats)) {
        this->addField(each);
    }
    return this;
}

TableFormat* TableFormat::addFields(std::list  fieldFormats)
{
    for (auto _i = fieldFormats)->iterator(); _i->hasNext(); ) {
        FieldFormat* each = java_cast< FieldFormat* >(_i->next());
        {
            this->addField(each);
        }
    }
    return this;
}

TableFormat* TableFormat::addField(FieldFormat* ff)
{
    return addField(ff, fields)->size());
}

TableFormat* TableFormat::addField(std::string* encodedFormat)
{
    return addField(static_cast< FieldFormat* >(FieldFormat::create(encodedFormat)));
}

void TableFormat::addField(char16_t type, std::string* name) 
{
    addField(type, name, fields)->size());
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, std::string* description)
{
    addField(static_cast< FieldFormat* >(FieldFormat::create(name, type, description)));
    return this;
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, std::string* description, void* defaultValue)
{
    addField(static_cast< FieldFormat* >(FieldFormat::create(name, type, description, defaultValue)));
    return this;
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, std::string* description, void* defaultValue, std::string* group)
{
    addField(static_cast< FieldFormat* >(FieldFormat::create(name, type, description, defaultValue), group)));
    return this;
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, std::string* description, void* defaultValue, bool nullable)
{
    addField(static_cast< FieldFormat* >(FieldFormat::create(name, type, description, defaultValue), nullable)));
    return this;
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, std::string* description, void* defaultValue, bool nullable, std::string* group)
{
    addField(static_cast< FieldFormat* >(FieldFormat::create(name, type, description, defaultValue, nullable, group)));
    return this;
}

TableFormat* TableFormat::addField(FieldFormat* ff, int index)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    auto existing = getField(ff)->getName());
    if(existing != 0) {
        if(!ff)->extend(existing)) {
            std::cout <<"Field '"_j)->append(ff)->getName())
                ->append(u"' already exist in format"_j)->toString());
        } else {
            return this;
        }
    }
    for (auto i = index; i < fields)->size(); i++) {
        auto fn = java_cast< FieldFormat* >(fields)->get(i)))->getName();
        auto previousIndex = java_cast< ::java::lang::Integer* >(getFieldLookup())->get(fn));
        if(previousIndex == 0) {
            throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Null lookup index for field "_j)->append(i)
                ->append(u" ("_j)
                ->append(fn)
                ->append(u")"_j)->toString());
        }
        getFieldLookup())->put(fn, (previousIndex))->intValue() + int(1)));
    }
    fields)->add(index, ff);
    getFieldLookup())->put(ff)->getName(), index));
    return this;
}

TableFormat* TableFormat::addField(char16_t type, std::string* name, int index) 
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    return addField(FieldFormat::create(name, type), index);
}

TableFormat* TableFormat::removeField(std::string* name)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    auto index = java_cast< ::java::lang::Integer* >(getFieldLookup())->remove(name));
    if(index != 0) {
        fields)->remove(index)->intValue());
        for (int i = (index))->intValue(); i < fields)->size(); i++) {
            auto fn = java_cast< FieldFormat* >(fields)->get(i)))->getName();
            getFieldLookup())->put(fn, (java_cast< ::java::lang::Integer* >(getFieldLookup())->get(fn))))->intValue() - int(1)));
        }
    }
    return this;
}

TableFormat* TableFormat::renameField(std::string* oldName, std::string* newName)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    auto ff = getField(oldName);
    if(ff == 0) {
        return this;
    }
    ff)->setName(newName);
    auto index = java_cast< ::java::lang::Integer* >(getFieldLookup())->remove(oldName));
    if(index != 0) {
        getFieldLookup())->put(newName, index);
    }
    return this;
}

char16_t TableFormat::getFieldType(int index)
{
    return java_cast< FieldFormat* >(fields)->get(index)))->getType();
}

std::string TableFormat::getFieldName(int index)
{
    return java_cast< FieldFormat* >(fields)->get(index)))->getName();
}

int TableFormat::getFieldIndex(std::string* name)
{
    auto index = java_cast< ::java::lang::Integer* >(getFieldLookup())->get(name));
    return index != 0 ? (index))->intValue() : -int(1);
}

int TableFormat::getFieldCount()
{
    return fields)->size();
}

java::util::List* TableFormat::getFields()
{
    return immutable ? ::java::util::Collections::unmodifiableList(fields) : fields;
}

java::util::List* TableFormat::getRecordValidators()
{
    return immutable ? ::java::util::Collections::unmodifiableList(recordValidators) : recordValidators;
}

java::util::List* TableFormat::getTableValidators()
{
    return immutable ? ::java::util::Collections::unmodifiableList(tableValidators) : tableValidators;
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
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
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

java::util::List* TableFormat::getBindings()
{
    return immutable ? ::java::util::Collections::unmodifiableList(bindings) : bindings;
}

void TableFormat::addBinding(::com::tibbo::aggregate::common::binding::Binding* binding)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    bindings)->add(binding));
}

void TableFormat::addBinding(::com::tibbo::aggregate::common::expression::Reference* target, ::com::tibbo::aggregate::common::expression::Expression* expression)
{
    addBinding(new ::com::tibbo::aggregate::common::binding::Binding(target, expression));
}

void TableFormat::addBinding(std::string* target, std::string* expression)
{
    addBinding(new ::com::tibbo::aggregate::common::binding::Binding(new ::com::tibbo::aggregate::common::expression::Reference(target), new ::com::tibbo::aggregate::common::expression::Expression(expression)));
}

void TableFormat::removeBinding(::com::tibbo::aggregate::common::binding::Binding* binding)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    bindings)->remove(binding));
}

void TableFormat::setBindings(std::list  in_bindings)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    bindings = in_bindings;
}

com::tibbo::aggregate::common::expression::Expression* TableFormat::getNamingExpression()
{
    return namingExpression;
}

std::string TableFormat::encode(bool useVisibleSeparators)
{
    return encode(new ::encoding::ClassicEncodingSettings(useVisibleSeparators));
}

std::string TableFormat::encode(::encoding::ClassicEncodingSettings* settings)
{
    auto formatString = new std::stringBuffer(getFieldCount() * int(7));
    for (auto i = int(0); i < fields)->size(); i++) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(0, getField(i))->encode(settings)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(minRecords != DEFAULT_MIN_RECORDS) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_MIN_RECORDS_, std::string::valueOf(minRecords)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(maxRecords != DEFAULT_MAX_RECORDS) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_MAX_RECORDS_, std::string::valueOf(maxRecords)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(tableValidators)->size() > 0) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_TABLE_VALIDATORS_, getEncodedTableValidators(settings)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(recordValidators)->size() > 0) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_RECORD_VALIDATORS_, getEncodedRecordValidators(settings)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(bindings)->size() > 0) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_BINDINGS_, getEncodedBindings(settings)))->encode(settings)->isUseVisibleSeparators()));
    }
    if(namingExpression != 0) {
        formatString)->append((new ::com::tibbo::aggregate::common::util::Element(ELEMENT_NAMING_, namingExpression == 0 ? u""_j : namingExpression)->getText()))->encode(settings)->isUseVisibleSeparators()));
    }
    encAppend(formatString, ELEMENT_FLAGS_, getEncodedFlags(), settings);
    return formatString)->toString();
}

void TableFormat::encAppend(std::stringBuffer* buffer, std::string* name, std::string* value, ::encoding::ClassicEncodingSettings* settings)
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

FieldFormat* TableFormat::getField(std::string* fieldName)
{
    auto index = getFieldIndex(fieldName);
    if(index != -int(1)) {
        return getField(index);
    } else {
        return 0;
    }
}

bool TableFormat::hasField(std::string* name)
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

void TableFormat::createTableValidators(std::string* source, ::encoding::ClassicEncodingSettings* settings)
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

void TableFormat::createRecordValidators(std::string* source, ::encoding::ClassicEncodingSettings* settings)
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

void TableFormat::createBindings(std::string* source, ::encoding::ClassicEncodingSettings* settings)
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

void TableFormat::createNaming(std::string* source, ::encoding::ClassicEncodingSettings* settings)
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

TableFormat* TableFormat::setNamingExpression(::com::tibbo::aggregate::common::expression::Expression* namingExpression)
{
    if(immutable) {
        throw new ::java::lang::IllegalStateException(u"Immutable"_j);
    }
    this->namingExpression = namingExpression;
    return this;
}

TableFormat* TableFormat::setNamingExpression(std::string* namingExpression)
{
    setNamingExpression(new ::com::tibbo::aggregate::common::expression::Expression(namingExpression));
    return this;
}

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

void TableFormat::makeImmutable(DataTable* immutabilizer)
{
    if(immutable) {
        return;
    }
    immutable = true;
    this->immutabilizer = immutabilizer;
    for (auto _i = fields)->iterator(); _i->hasNext(); ) {
        FieldFormat* ff = java_cast< FieldFormat* >(_i->next());
        {
            ff)->makeImmutable();
        }
    }
}



java::lang::Class* TableFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.TableFormat", 48);
    return c;
}

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

java::lang::Class* TableFormat::getClass0()
{
    return class_();
}
*/
