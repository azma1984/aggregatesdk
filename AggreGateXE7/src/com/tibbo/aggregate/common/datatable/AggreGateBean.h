#ifndef AggreGateBeanH
#define AggreGateBeanH

/**
 * WARNING:
 * 
 * In the inherited classes, do not assign field values in the declaration!
 * 
 * Field values will be assigned by one of the AggreGateBean constructor.
 * 
 * Default field values must be defined in the format.
 * 
 * Successors must override AggreGateBean(DataRecord) constructor!
 */

#include <datatable/DataRecord.h>
#include <datatable/DataTable.h>
#include <datatable/DataTableConversion.h>
#include <datatable/DataTableException.h>
#include <datatable/TableFormat.h>


class AggreGateBean
{

private:
	TableFormat* format;

protected:
	void ctor(TableFormat* format);
	void ctor(TableFormat* format, DataRecord* data);

public:
	DataTable* toDataTable();
	DataRecord* toDataRecord();
	TableFormat* getFormat();

	// Generated
	AggreGateBean(TableFormat* format);
	AggreGateBean(TableFormat* format, DataRecord* data);
protected:
	AggreGateBean(const ::default_init_tag&);     

};

#endif
