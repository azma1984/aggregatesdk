#ifndef _PersistenceBinding_H_
#define _PersistenceBinding_H_

#include "Cres.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "expression/Expression.h"
#include "datatable/AggreGateBean.h"



class PersistenceBinding  : public AggreGateBean , public Cloneable
{

private:
    static const std::string TYPE_BOOLEAN_;
    static const std::string TYPE_STRING_;
    static const std::string TYPE_INT_;
    static const std::string TYPE_LONG_;
    static const std::string TYPE_FLOAT_;
    static const std::string TYPE_DOUBLE_;
    static const std::string TYPE_TIMESTAMP_;
    static TableFormatPtr FORMAT_;
    const std::string & name;
    const std::string & type;
    const std::string & index;
    const std::string & expression;
    ExpressionPtr compiledExpression;

public:
    const std::string & getType();
    const std::string & getIndex();
    const std::string & getName();
    const std::string & getExpression();
    ExpressionPtr getCompiledExpression();
    void setName(const std::string & name);
    void setType(const std::string & type);
    void setIndex(const std::string & index);
    void setExpression(const std::string & expression);
    PersistenceBindingPtr clone();
    int hashCode();
    bool equals(AgObjectPtr obj);
    std::string toString();

	PersistenceBinding();
    PersistenceBinding(DataRecordPtr record);
    PersistenceBinding(const std::string & name, const std::string & type, const std::string & index, const std::string & expression);

	static const std::string& TYPE_BOOLEAN();
    static const std::string& TYPE_STRING();
    static const std::string& TYPE_INT();
    static const std::string& TYPE_LONG();
    static const std::string& TYPE_FLOAT();
    static const std::string& TYPE_DOUBLE();
    static const std::string& TYPE_TIMESTAMP();
    static TableFormatPtr& FORMAT();

};

#endif 
