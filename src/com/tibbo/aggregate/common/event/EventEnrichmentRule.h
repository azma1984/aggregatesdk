
#ifndef _EnrichmentRule_H_
#define _EnrichmentRule_H_

#include "Cres.h"
//#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
//#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
//#include <com/tibbo/aggregate/common/datatable/validator/TableKeyFieldsValidator.h"
//#include "validator/ValidatorHelper.h"
#include "expression/Expression.h"
#include "datatable/AggreGateBean.h"
#include <string>

class EventEnrichmentRule : public AggreGateBean
{
 private:
    static const std::string FIELD_NAME;
    static const std::string FIELD_EXPRESSION;
  
    std::string name;
    std::string expression;
    Expression* enrichmentExpression;


public:
	static TableFormat* FORMAT;
    std::string getName();
    void setName(const std::string & name);
    std::string getExpression();
    void setExpression(const std::string & expression);
    Expression* getEnrichmentExpression();

	void Init();
    EventEnrichmentRule();
    EventEnrichmentRule(DataRecord* data);

};
#endif