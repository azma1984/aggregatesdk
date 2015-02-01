#ifndef _REFERENCE_H_
#define _REFERENCE_H_

#include "util/Cloneable.h"
//#include "context/ContextUtils.h"
//#include "expression/Expression.h"
//#include "expression/ExpressionUtils.h"


#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

class   Expression;
//todo - class stub
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
    std::string image;
    std::string schema;
    std::string server;
    std::string context;
    std::string entity;
    int entityType;
    //TODO: need boost:shared ?
    std::vector<boost::shared_ptr<void>>  parameters; // May contain Strings, Expressions and NULLs
    std::string field;
    std::string property;
    int  row;
    void init();

protected:
    void ctor();
    void ctor(const std::string & source);
    void ctor(const std::string & server, const std::string & context);
    void ctor(const std::string & entity, int entityType, const std::string & field);
    void ctor(const std::string & context, const std::string & entity, int entityType, const std::string & field);
    void ctor(const std::string & context, const std::string & entity, int entityType);
    void ctor(const std::string & context, const std::string & function, std::vector<boost::shared_ptr<void>> parameters);

public:// protected
    void parse(const std::string & source);

public:
    std::string getServer();
    std::string getContext();
    std::string getEntity();
    int getEntityType();
    std::string getField();
    std::vector<boost::shared_ptr<void>> getParameters();
    int getRow();
    std::string getSchema();
    std::string getProperty();
    std::string getImage();

private:
    std::string createImage();

public:
    std::string toString();
    void setContext(const std::string & context);
    void setEntity(const std::string & entity);
    void setEntityType(int entityType);
    void addParameter(const std::string & parameter);
    void addParameter(boost::shared_ptr<Expression> parameter);
    void setField(const std::string & field);
    void setProperty(const std::string & property);
    void setSchema(const std::string & schema);
    void setRow(int row);
    void setServer(const std::string & server);
    Reference* clone() const;
    bool equals(Reference* obj);
    //int hashCode();

    // Generated
    Reference();
    Reference(const std::string & source);
    Reference(const std::string & server, const std::string & context);
    Reference(const std::string & entity, int entityType, const std::string & field);
    Reference(const std::string & context, const std::string & entity, int entityType, const std::string & field);
    Reference(const std::string & context, const std::string & entity, int entityType);
    Reference(const std::string & context, const std::string & function, std::vector<boost::shared_ptr<void>> parameters);
};

#endif  //_REFERENCE_H_
