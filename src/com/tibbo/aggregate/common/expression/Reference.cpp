#include "Reference.h"

#include "context/ContextUtils.h"
#include "expression/ExpressionUtils.h"
#include "util/SString.h"

const std::string Reference::SCHEMA_FORM = "form";
const std::string Reference::SCHEMA_TABLE = "table";
const std::string Reference::SCHEMA_STATISTICS = "statistics";
const std::string Reference::SCHEMA_ENVIRONMENT = "env";
const std::string Reference::SCHEMA_PARENT = "parent";
const std::string Reference::SCHEMA_MENU = "menu";

// Deprecated in favour of new action reference syntax: context.path:action!
// Support should be terminated in AggreGate 6
const std::string Reference::SCHEMA_ACTION = "action";

const char Reference::EVENT_SIGN = '@';
const char Reference::ACTION_SIGN = '!';
const char Reference::PARAMS_BEGIN = '(';
const char Reference::PARAMS_END = ')';
const char Reference::SCHEMA_END = '/';
const char Reference::SERVER_END = '^';
const char Reference::CONTEXT_END = ':';
const char Reference::FIELD_BEGIN = '$';
const char Reference::ROW_BEGIN = '[';
const char Reference::ROW_END = ']';
const char Reference::PROPERTY_BEGIN = '#';



Reference::Reference()
{
    init();
}

Reference::Reference(const std::string & source)
{
    init();
    parse(source);
}

Reference::Reference(const std::string & server, const std::string & context)
{
    init();
    this->server = server;
    this->context = context;
}

Reference::Reference(const std::string & entity, int entityType, const std::string & field)
{
    init();
    this->entity = entity;
    this->entityType = entityType;
    this->field = field;
}

Reference::Reference(const std::string & context, const std::string & entity, int entityType, const std::string & field)
{
    init();
    this->context = context;
    this->entity = entity;
    this->entityType = entityType;
    this->field = field;
}

Reference::Reference(const std::string & context, const std::string & entity, int entityType)
{
    init();
    this->context = context;
    this->entity = entity;
    this->entityType = entityType;
}

Reference::Reference(const std::string & context, const std::string & function, vector<void*> parameters)
{
    init();
    this->context = context;
    this->entity = function;
    this->entityType = ContextUtils::ENTITY_FUNCTION;

    //TODO: ?
    this->parameters = parameters;//Collections.addAll(this.parameters, parameters);
}

void Reference::init()
{
    entityType = ContextUtils::ENTITY_VARIABLE;
    row = 0;
}

void Reference::parse(const std::string& source)
{
    //source = SString::trim()->trim();
    bool isFunction = false;
    bool isEvent = false;
    bool isAction = false;

    image = source;
    std::string src = image;

    size_t paramsBegin = src.find(PARAMS_BEGIN);
    size_t paramsEnd = src.rfind(PARAMS_END);
    if (paramsBegin != std::string::npos) {
        if (paramsEnd == std::string::npos) {
            //TODO:
            //throw IllegalArgumentException(u"No closing ')' for function parameters"_j);
        }

        isFunction = true;
        std::string paramsSrc = src.substr(paramsBegin+1, paramsEnd);
        parameters = ExpressionUtils::getFunctionParameters(paramsSrc, true);
        entityType = ContextUtils::ENTITY_FUNCTION;
        std::stringstream ss;
        ss <<src.substr(0, paramsBegin) <<src.substr(paramsEnd + 1);
        src = ss.str();
    } else {
        size_t eventSignPos = src.rfind(EVENT_SIGN);
        if(eventSignPos != std::string::npos) {
            isEvent = true;
            entityType = ContextUtils::ENTITY_EVENT;
            std::stringstream ss;
            ss <<src.substr(0, eventSignPos) <<src.substr(eventSignPos + 1);
            src = ss.str();
        } else {
            size_t actionSignPos = src.rfind(ACTION_SIGN);
            if(actionSignPos != std::string::npos) {
                isAction = true;
                entityType = ContextUtils::ENTITY_ACTION;
                std::stringstream ss;
                ss <<src.substr(0, actionSignPos) <<src.substr(actionSignPos + 1);
                src = ss.str();
            }
        }
    }

    size_t schemaEnd = src.find((SCHEMA_END);
    if (schemaEnd != std::string::npos) {
        schema = src.substr(0, schemaEnd);
        src = src.substr(schemaEnd + 1);
    }

    size_t serverEnd = src.find(f(SERVER_END);
    if (serverEnd != std::string::npos) {
        server = src.substr(0, serverEnd);
        src = src.substr(serverEnd + 1);
    }

    size_t contextEnd = src.find(CONTEXT_END);
    if (contextEnd != std::string::npos) {
        context = src.substr(0, contextEnd);
        src = src.substr(contextEnd + 1);
    }
    size_t propertyBegin = src.find(PROPERTY_BEGIN);
    if (propertyBegin != std::string::npos) {
        property = src.substr(propertyBegin + 1);
        src = src.substr(0, propertyBegin);
    }

    size_t rowBegin = src.find(ROW_BEGIN);
    size_t rowEnd = src.find(ROW_END);
    if (rowBegin != std::string::npos) {
        if(rowEnd == std::string::npos) {
            //TODO:
            //throw IllegalArgumentException(u"No closing ']' in row reference"_j);
        }
        row = src.substr(rowBegin + 1, rowEnd);
        src = src.substr(0, rowBegin);
    }

    size_t fieldBegin = src.find(FIELD_BEGIN);
    if (fieldBegin != std::string::npos) {
        entity = src.substr(0, fieldBegin);
        field = (fieldBegin != src.length() - 1) ? src.substr(fieldBegin + 1) : "";
    }else if(src.length() > 0) {
        if(context.length() || isFunction || isEvent || isAction) {
            entity = src;
        }else {
            field = src;
        }
    }
}

std::string Reference::getServer()
{
    return server;
}

std::string Reference::getContext()
{
    return context;
}

std::string Reference::getEntity()
{
    return entity;
}

int Reference::getEntityType()
{
    return entityType;
}

std::string Reference::getField()
{
    return field;
}

std::vector<void*> Reference::getParameters()
{
    return parameters;
}

int Reference::getRow()
{
    return row;
}

std::string Reference::getSchema()
{
    return schema;
}

std::string Reference::getProperty()
{
    return property;
}

std::string Reference::getImage()
{
    if (image.length()) {
        return image;
    }else {
        return createImage();
    }
}

std::string Reference::createImage()
{
    std::stringstream ss;

    if (schema.length()) {
        ss <<schema;
        ss <<SCHEMA_END;
    }

    if (server.length()) {
        ss <<server;
        ss <<SERVER_END;
    }

    if (context.length()) {
        ss <<context;
        ss <<CONTEXT_END;
    }

    if (entity.length()) {
        ss << entity;
        if (entityType == ContextUtils::ENTITY_FUNCTION) {
            ss <<PARAMS_BEGIN;
            ss <<ExpressionUtils::getFunctionParameters(parameters));
            sb <<PARAMS_END;
        }

        if (entityType == ContextUtils::ENTITY_EVENT) {
            ss <<EVENT_SIGN;
        }

        if (entityType == ContextUtils::ENTITY_ACTION) {
            ss <<ACTION_SIGN;
        }

        if (field.length() || (context.length() == 0 && entityType == ContextUtils::ENTITY_VARIABLE)) {
            ss <<FIELD_BEGIN;
        }
    }

    if (field.length()) {
        ss <<field;
    }

    if (row != 0) {
        ss <<ROW_BEGIN <<row <<ROW_END;
    }

    if (property.length()) {
        ss <<PROPERTY_BEGIN <<property;
    }

    image = ss.str();
    return image;
}

std::string Reference::toString()
{
    return getImage();
}

void Reference::setContext(const std::string & context)
{
    this->context = context;
}

void Reference::setEntity(const std::string & entity)
{
    this->entity = entity;
}

void Reference::setEntityType(int entityType)
{
    this->entityType = entityType;
}

void Reference::addParameter(const std::string & parameter)
{
    parameters->add(new std::string(parameter));
}

void Reference::addParameter(boost::shared_ptr<Expression> parameter)
{
    parameters.push_back(parameter);
}

void Reference::setField(const std::string & field)
{
    this->field = field;    
}

void Reference::setProperty(const std::string & property)
{
    this->property = property;    
}

void Reference::setSchema(const std::string & schema)
{
    this->schema = schema;   
}

void Reference::setRow(int  row)
{
    this->row = row;   
}

void setServer(const std::string & server)
{
    this->server = server;
    image;
}

Reference* clone()
{
    try {
        return java_cast< Reference* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

bool equals(Reference* obj)
{
    auto const isReferenceNotNull = !(obj == 0 || !(dynamic_cast< Reference* >(obj) != 0));
    return isReferenceNotNull && getImage())->equals((java_cast< Reference* >(obj)))->getImage()));
}

//int hashCode()
//{
//    return getImage())->hashCode();
//}
