#ifndef AggreGateBeanH
#define AggreGateBeanH
 /*
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableConversion.h"
#include <com/tibbo/aggregate/common/datatable/DataTableException.h"*/
#include "datatable/TableFormat.h"

//todo - class stub
class AggreGateBean
{

//private:
//	TableFormat* format;
//protected:
//	void ctor(TableFormat* format);
//	void ctor(TableFormat* format, DataRecord* data);
//
public:
//	DataTable* toDataTable();
//	DataRecord* toDataRecord();
//	TableFormat* getFormat();
//
//
	AggreGateBean(boost::shared_ptr<TableFormat> format);
	AggreGateBean(boost::shared_ptr<TableFormat> format, boost::shared_ptr<DataRecord> data);
//protected:
//	AggreGateBean(const ::default_init_tag&);    


};

#endif
