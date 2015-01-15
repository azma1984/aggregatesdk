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
{/*
private:
    static const std::string SCHEMA_FORM;
    static const std::string SCHEMA_TABLE;
    static const std::string SCHEMA_STATISTICS;
    static const std::string SCHEMA_ENVIRONMENT;
    static const std::string SCHEMA_PARENT;
    static const std::string SCHEMA_MENU_;
    static const std::string SCHEMA_ACTION_;

public:
    static const char16_t EVENT_SIGN { u'@' };
    static const char16_t ACTION_SIGN { u'!' };
    static const char16_t PARAMS_BEGIN { u'(' };
    static const char16_t PARAMS_END { u')' };
    static const char16_t SCHEMA_END { u'/' };
    static const char16_t SERVER_END { u'^' };
    static const char16_t CONTEXT_END { u':' };
    static const char16_t FIELD_BEGIN { u'$' };
    static const char16_t ROW_BEGIN { u'[' };
    static const char16_t ROW_END { u']' };
    static const char16_t PROPERTY_BEGIN { u'#' };

private:
    const std::string & image;
    const std::string & schema;
    const std::string & server;
    const std::string & context;
    const std::string & entity;
    int entityType;
    std::list  parameters;
    const std::string & field;
    int  row;
    const std::string & property;
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

*/
};

#endif  //_REFERENCE_H_
