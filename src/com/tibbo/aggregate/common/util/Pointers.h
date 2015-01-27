#pragma once

#include <boost/shared_ptr.hpp>

class DataTable;
class FormatConverter;
class ClassicEncodingSettings;
class Data;
class AgObject;
class AgClass;
class TableFormat;
class DataRecord;
class DataTableQuery;
class FieldFormat;
class Evaluator;
class Expression;
class DataTableSorter;
class TableKeyFieldsValidator;
class RecordValidator;
class TableValidator;
class Binding;
class Reference;

typedef boost::shared_ptr<AgObject> AgObjectPtr;
typedef boost::shared_ptr<AgClass> AgClassPtr;
typedef boost::shared_ptr<TableFormat> TableFormatPtr;
typedef boost::shared_ptr<DataTable> DataTablePtr;
typedef boost::shared_ptr<DataRecord> DataRecordPtr;
typedef boost::shared_ptr<FieldFormat> FieldFormatPtr;
typedef boost::shared_ptr<FormatConverter> FormatConverterPtr;
typedef boost::shared_ptr<ClassicEncodingSettings> ClassicEncodingSettingsPtr;
typedef boost::shared_ptr<Data> DataPtr;
typedef boost::shared_ptr<Evaluator> EvaluatorPtr;
typedef boost::shared_ptr<Expression> ExpressionPtr;
typedef boost::shared_ptr<DataTableQuery> DataTableQueryPtr;
typedef boost::shared_ptr<DataTableSorter> DataTableSorterPtr;
typedef boost::shared_ptr<TableKeyFieldsValidator> TableKeyFieldsValidatorPtr;
typedef boost::shared_ptr<RecordValidator> RecordValidatorPtr;
typedef boost::shared_ptr<TableValidator> TableValidatorPtr;
typedef boost::shared_ptr<Binding> BindingPtr;
typedef boost::shared_ptr<Reference> ReferencePtr;

