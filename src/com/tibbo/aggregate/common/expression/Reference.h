#ifndef _REFERENCE_H_
#define _REFERENCE_H_

#include "util/Cloneable.h"
/*
#include <com/tibbo/aggregate/common/context/ContextUtils.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
*/

#include <string>

class Reference : public Cloneable
{
public:
    static const std::string SCHEMA_FORM;
    static const std::string SCHEMA_TABLE;
    static const std::string SCHEMA_STATISTICS;
    static const std::string SCHEMA_ENVIRONMENT;
    static const std::string SCHEMA_PARENT;
    static const std::string SCHEMA_MENU;
    static const std::string SCHEMA_ACTION;

    static const char EVENT_SIGN;
    static const char ACTION_SIGN;
    static const char PARAMS_BEGIN;
    static const char PARAMS_END;
    static const char SCHEMA_END;
    static const char SERVER_END;
    static const char CONTEXT_END;
    static const char FIELD_BEGIN;
    static const char ROW_BEGIN;
    static const char ROW_END;
    static const char PROPERTY_BEGIN;

private:
    const std::string image;
    const std::string schema;
    const std::string server;
    const std::string context;
    const std::string entity;
    int entityType;
    //std::list  parameters;
    const std::string field;
    const std::string property;
    int  row;

protected:
    void ctor();
    void ctor(const std::string & source);
    void ctor(const std::string & server, const std::string & context);
    void ctor(const std::string & entity, int entityType, const std::string & field);
    void ctor(const std::string & context, const std::string & entity, int entityType, const std::string & field);
    void ctor(const std::string & context, const std::string & entity, int entityType);
    void ctor(const std::string & context, const std::string & function, voidArray* parameters);

public:// protected
    void parse(const std::string & source);

public:
    const std::string & getServer();
    const std::string & getContext();
    const std::string & getEntity();
    int getEntityType();
    const std::string & getField();
    std::list  getParameters();
    int getRow();
    const std::string & getSchema();
    const std::string & getProperty();
    const std::string & getImage();

private:
    const std::string & createImage();

public:
    const std::string & toString();
    void setContext(const std::string & context);
    void setEntity(const std::string & entity);
    void setEntityType(int entityType);
    void addParameter(const std::string & parameter);
    void addParameter(Expression* parameter);
    void setField(const std::string & field);
    void setProperty(const std::string & property);
    void setSchema(const std::string & schema);
    void setRow(int  row);
    void setServer(const std::string & server);
    Reference* clone();
    bool equals(void* obj);
    int hashCode();

    // Generated
    Reference();
    Reference(const std::string & source);
    Reference(const std::string & server, const std::string & context);
    Reference(const std::string & entity, int entityType, const std::string & field);
    Reference(const std::string & context, const std::string & entity, int entityType, const std::string & field);
    Reference(const std::string & context, const std::string & entity, int entityType);
    Reference(const std::string & context, const std::string & function, voidArray* parameters);
protected:
    Reference(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& SCHEMA_FORM();
    static const std::string& SCHEMA_TABLE();
    static const std::string& SCHEMA_STATISTICS();
    static const std::string& SCHEMA_ENVIRONMENT();
    static const std::string& SCHEMA_PARENT();
    static const std::string& SCHEMA_MENU();
    static const std::string& SCHEMA_ACTION();

};

#endif  //_REFERENCE_H_
