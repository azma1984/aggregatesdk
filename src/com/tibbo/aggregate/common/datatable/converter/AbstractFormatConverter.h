#pragma once

#include <boost/shared_ptr.hpp>
#include "datatable/converter/FormatConverter.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataRecord.h"
#include "util/AgClass.h"


class AbstractFormatConverter : public FormatConverter
{

public:
    static const std::string VF_IS_NULL;

private:
    boost::shared_ptr<AgClass> valueClass;
    boost::shared_ptr<TableFormat> format;
    static std::list<std::string> FIELDS_TO_SKIP;

    static void addDisabledBinding(boost::shared_ptr<TableFormat> format, boost::shared_ptr<FieldFormat> field);

public:
    static boost::shared_ptr<TableFormat> deriveNullable(boost::shared_ptr<TableFormat> format);
    static void addFiledToNullableFormat(boost::shared_ptr<TableFormat> format, boost::shared_ptr<FieldFormat> field);
    static void removeFiledFromNullableFormat(boost::shared_ptr<TableFormat> format, const std::string &fieldName);

    AbstractFormatConverter(boost::shared_ptr<AgClass> valueClass, boost::shared_ptr<TableFormat> format);
    AbstractFormatConverter(boost::shared_ptr<AgClass> valueClass);

    virtual boost::shared_ptr<AgClass> getValueClass();
    void setValueClass(boost::shared_ptr<AgClass> valueClass);
    virtual boost::shared_ptr<TableFormat> getFormat();
    virtual boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name);
    virtual boost::shared_ptr<AgObject> instantiate(boost::shared_ptr<DataRecord> source);
    virtual boost::shared_ptr<AgObject> clone(boost::shared_ptr<AgObject> value, bool useConversion);

protected:
     static boost::shared_ptr<DataTable> simpleToTable(boost::shared_ptr<AgObject> value, boost::shared_ptr<TableFormat> format);
 };
