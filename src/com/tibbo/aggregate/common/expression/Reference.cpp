// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Reference.java
#include "Reference.h"



/*
Reference(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Reference() 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

Reference(std::string* source) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(source);
}

Reference(std::string* server, std::string* context) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(server,context);
}

Reference(std::string* entity, int entityType, std::string* field) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(entity,entityType,field);
}

Reference(std::string* context, std::string* entity, int entityType, std::string* field) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,entity,entityType,field);
}

Reference(std::string* context, std::string* entity, int entityType) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,entity,entityType);
}

Reference(std::string* context, std::string* function, voidArray* parameters) 
    : Reference(*static_cast< ::default_init_tag* >(0))
{
    ctor(context,function,parameters);
}

void init()
{
    entityType = ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE;
    parameters = new ::java::util::LinkedList();
}

std::string& SCHEMA_FORM()
{
    
    return SCHEMA_FORM_;
}
std::string SCHEMA_FORM_;

std::string& SCHEMA_TABLE()
{
    
    return SCHEMA_TABLE_;
}
std::string SCHEMA_TABLE_;

std::string& SCHEMA_STATISTICS()
{
    
    return SCHEMA_STATISTICS_;
}
std::string SCHEMA_STATISTICS_;

std::string& SCHEMA_ENVIRONMENT()
{
    
    return SCHEMA_ENVIRONMENT_;
}
std::string SCHEMA_ENVIRONMENT_;

std::string& SCHEMA_PARENT()
{
    
    return SCHEMA_PARENT_;
}
std::string SCHEMA_PARENT_;

std::string& SCHEMA_MENU()
{
    
    return SCHEMA_MENU_;
}
std::string SCHEMA_MENU_;

std::string& SCHEMA_ACTION()
{
    
    return SCHEMA_ACTION_;
}
std::string SCHEMA_ACTION_;

const char16_t EVENT_SIGN;

const char16_t ACTION_SIGN;

const char16_t PARAMS_BEGIN;

const char16_t PARAMS_END;

const char16_t SCHEMA_END;

const char16_t SERVER_END;

const char16_t CONTEXT_END;

const char16_t FIELD_BEGIN;

const char16_t ROW_BEGIN;

const char16_t ROW_END;

const char16_t PROPERTY_BEGIN;

void ctor()
{
    super::ctor();
    init();
}

void ctor(std::string* source)
{
    super::ctor();
    init();
    parse(source);
}

void ctor(std::string* server, std::string* context)
{
    super::ctor();
    init();
    this->server = server;
    this->context = context;
}

void ctor(std::string* entity, int entityType, std::string* field)
{
    super::ctor();
    init();
    this->entity = entity;
    this->entityType = entityType;
    this->field = field;
}

void ctor(std::string* context, std::string* entity, int entityType, std::string* field)
{
    ctor(entity, entityType, field);
    this->context = context;
}

void ctor(std::string* context, std::string* entity, int entityType)
{
    super::ctor();
    init();
    this->context = context;
    this->entity = entity;
    this->entityType = entityType;
}

void ctor(std::string* context, std::string* function, voidArray* parameters)
{
    super::ctor();
    init();
    this->context = context;
    this->entity = function;
    this->entityType = ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION;
    ::java::util::Collections::addAll(java_cast< std::list  >(this->parameters), parameters);
}

void parse(std::string* source)
{
    source = source)->trim();
    auto isFunction = false;
    auto isEvent = false;
    auto isAction = false;
    image = source;
    auto src = image;
    auto paramsBegin = src)->indexOf(static_cast< int >(PARAMS_BEGIN));
    auto paramsEnd = src)->lastIndexOf(static_cast< int >(PARAMS_END));
    if(paramsBegin != -int(1)) {
        if(paramsEnd == -int(1)) {
            throw new ::java::lang::IllegalArgumentException(u"No closing ')' for function parameters"_j);
        }
        isFunction = true;
        auto paramsSrc = src)->substring(paramsBegin + int(1), paramsEnd);
        parameters = ExpressionUtils::getFunctionParameters(paramsSrc, true);
        entityType = ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION;
        src = std::stringBuilder().append(src)->substring(0, paramsBegin))->append(src)->substring(paramsEnd + int(1)))->toString();
    } else {
        auto eventSignPos = src)->lastIndexOf(static_cast< int >(EVENT_SIGN));
        if(eventSignPos != -int(1)) {
            isEvent = true;
            entityType = ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_EVENT;
            src = std::stringBuilder().append(src)->substring(0, eventSignPos))->append(src)->substring(eventSignPos + int(1)))->toString();
        } else {
            auto actionSignPos = src)->lastIndexOf(static_cast< int >(ACTION_SIGN));
            if(actionSignPos != -int(1)) {
                isAction = true;
                entityType = ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_ACTION;
                src = std::stringBuilder().append(src)->substring(0, actionSignPos))->append(src)->substring(actionSignPos + int(1)))->toString();
            }
        }
    }
    auto schemaEnd = src)->indexOf(static_cast< int >(SCHEMA_END));
    if(schemaEnd != -int(1)) {
        schema = src)->substring(0, schemaEnd);
        src = src)->substring(schemaEnd + int(1));
    }
    auto serverEnd = src)->indexOf(static_cast< int >(SERVER_END));
    if(serverEnd != -int(1)) {
        server = src)->substring(0, serverEnd);
        src = src)->substring(serverEnd + int(1));
    }
    auto contextEnd = src)->indexOf(static_cast< int >(CONTEXT_END));
    if(contextEnd != -int(1)) {
        context = src)->substring(0, contextEnd);
        src = src)->substring(contextEnd + int(1));
    }
    auto propertyBegin = src)->indexOf(static_cast< int >(PROPERTY_BEGIN));
    if(propertyBegin != -int(1)) {
        property = src)->substring(propertyBegin + int(1));
        src = src)->substring(0, propertyBegin);
    }
    auto rowBegin = src)->indexOf(static_cast< int >(ROW_BEGIN));
    auto rowEnd = src)->indexOf(static_cast< int >(ROW_END));
    if(rowBegin != -int(1)) {
        if(rowEnd == -int(1)) {
            throw new ::java::lang::IllegalArgumentException(u"No closing ']' in row reference"_j);
        }
        row = src)->substring(rowBegin + int(1), rowEnd));
        src = src)->substring(0, rowBegin);
    }
    auto fieldBegin = src)->indexOf(static_cast< int >(FIELD_BEGIN));
    if(fieldBegin != -int(1)) {
        entity = src)->substring(0, fieldBegin);
        field = (fieldBegin != src)->length() - int(1)) ? src)->substring(fieldBegin + int(1)) : static_cast< std::string* >(0);
    } else if(src)->length() > 0) {
        if(context != 0 || isFunction || isEvent || isAction) {
            entity = src;
        } else {
            field = src;
        }
    }
}

std::string getServer()
{
    return server;
}

std::string getContext()
{
    return context;
}

std::string getEntity()
{
    return entity;
}

int getEntityType()
{
    return entityType;
}

std::string getField()
{
    return field;
}

java::util::List* getParameters()
{
    return parameters;
}

java::lang::Integer* getRow()
{
    return row;
}

std::string getSchema()
{
    return schema;
}

std::string getProperty()
{
    return property;
}

std::string getImage()
{
    if(image != 0) {
        return image;
    } else {
        return createImage();
    }
}

std::string createImage()
{
    auto sb = new std::stringBuilder();
    if(schema != 0) {
        sb)->append(schema);
        sb)->append(SCHEMA_END);
    }
    if(server != 0) {
        sb)->append(server);
        sb)->append(SERVER_END);
    }
    if(context != 0) {
        sb)->append(context);
        sb)->append(CONTEXT_END);
    }
    if(entity != 0) {
        sb)->append(entity);
        if(entityType == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_FUNCTION) {
            sb)->append(PARAMS_BEGIN);
            sb)->append(ExpressionUtils::getFunctionParameters(parameters));
            sb)->append(PARAMS_END);
        }
        if(entityType == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_EVENT) {
            sb)->append(EVENT_SIGN);
        }
        if(entityType == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_ACTION) {
            sb)->append(ACTION_SIGN);
        }
        if(field != 0 || (context == 0 && entityType == ::com::tibbo::aggregate::common::context::ContextUtils::ENTITY_VARIABLE)) {
            sb)->append(FIELD_BEGIN);
        }
    }
    if(field != 0) {
        sb)->append(field);
    }
    if(row != 0) {
        sb)->append(ROW_BEGIN);
        sb)->append(row));
        sb)->append(ROW_END);
    }
    if(property != 0) {
        sb)->append(PROPERTY_BEGIN);
        sb)->append(property);
    }
    image = sb)->toString();
    return image;
}

std::string toString()
{
    return getImage();
}

void setContext(std::string* context)
{
    this->context = context;
    image;
}

void setEntity(std::string* entity)
{
    this->entity = entity;
    image;
}

void setEntityType(int entityType)
{
    this->entityType = entityType;
    image;
}

void addParameter(std::string* parameter)
{
    parameters)->add(parameter));
}

void addParameter(Expression* parameter)
{
    parameters)->add(parameter));
}

void setField(std::string* field)
{
    this->field = field;
    image;
}

void setProperty(std::string* property)
{
    this->property = property;
    image;
}

void setSchema(std::string* schema)
{
    this->schema = schema;
    image;
}

void setRow(::java::lang::Integer* row)
{
    this->row = row;
    image;
}

void setServer(std::string* server)
{
    this->server = server;
    image;
}

com::tibbo::aggregate::common::expression::Reference* clone()
{
    try {
        return java_cast< Reference* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

bool equals(void* obj)
{
    auto const isReferenceNotNull = !(obj == 0 || !(dynamic_cast< Reference* >(obj) != 0));
    return isReferenceNotNull && getImage())->equals((java_cast< Reference* >(obj)))->getImage()));
}

int hashCode()
{
    return getImage())->hashCode();
}



java::lang::Class* class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.Reference", 47);
    return c;
}

void clinit()
{
struct string_init_ {
    string_init_() {
    SCHEMA_FORM_ = u"form"_j;
    SCHEMA_TABLE_ = u"table"_j;
    SCHEMA_STATISTICS_ = u"statistics"_j;
    SCHEMA_ENVIRONMENT_ = u"env"_j;
    SCHEMA_PARENT_ = u"parent"_j;
    SCHEMA_MENU_ = u"menu"_j;
    SCHEMA_ACTION_ = u"action"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

*/

