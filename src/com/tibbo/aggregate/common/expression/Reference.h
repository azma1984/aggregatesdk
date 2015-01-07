// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Reference.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"



class com::tibbo::aggregate::common::expression::Reference
    
    , public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{

public:
    typedef void super;

private:
    static const std::string SCHEMA_FORM_;
    static const std::string SCHEMA_TABLE_;
    static const std::string SCHEMA_STATISTICS_;
    static const std::string SCHEMA_ENVIRONMENT_;
    static const std::string SCHEMA_PARENT_;
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
    std::string* image;
    std::string* schema;
    std::string* server;
    std::string* context;
    std::string* entity;
    int entityType;
    std::list  parameters;
    std::string* field;
    ::java::lang::Integer* row;
    std::string* property;
protected:
    void ctor();
    void ctor(std::string* source);
    void ctor(std::string* server, std::string* context);
    void ctor(std::string* entity, int entityType, std::string* field);
    void ctor(std::string* context, std::string* entity, int entityType, std::string* field);
    void ctor(std::string* context, std::string* entity, int entityType);
    void ctor(std::string* context, std::string* function, voidArray* parameters);

public: /* protected */
    void parse(std::string* source);

public:
    std::string* getServer();
    std::string* getContext();
    std::string* getEntity();
    int getEntityType();
    std::string* getField();
    std::list  getParameters();
    ::java::lang::Integer* getRow();
    std::string* getSchema();
    std::string* getProperty();
    std::string* getImage();

private:
    std::string* createImage();

public:
    std::string* toString();
    void setContext(std::string* context);
    void setEntity(std::string* entity);
    void setEntityType(int entityType);
    void addParameter(std::string* parameter);
    void addParameter(Expression* parameter);
    void setField(std::string* field);
    void setProperty(std::string* property);
    void setSchema(std::string* schema);
    void setRow(::java::lang::Integer* row);
    void setServer(std::string* server);
    Reference* clone();
    bool equals(void* obj);
    int hashCode();

    // Generated
    Reference();
    Reference(std::string* source);
    Reference(std::string* server, std::string* context);
    Reference(std::string* entity, int entityType, std::string* field);
    Reference(std::string* context, std::string* entity, int entityType, std::string* field);
    Reference(std::string* context, std::string* entity, int entityType);
    Reference(std::string* context, std::string* function, voidArray* parameters);
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

private:
    ::java::lang::Class* getClass0();
};
