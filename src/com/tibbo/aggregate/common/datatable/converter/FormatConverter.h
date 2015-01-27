#pragma once
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/AgObject.h"

class Class;
class TableFormat;
class FieldFormat;
class DataRecord;

class FormatConverter
{
public:
    virtual boost::shared_ptr<Class> getValueClass() = 0;
    virtual boost::shared_ptr<TableFormat> getFormat() = 0;
    virtual boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name) = 0;
    virtual boost::shared_ptr<AgObject> instantiate(boost::shared_ptr<DataRecord> source) = 0;
    virtual boost::shared_ptr<AgObject> clone(boost::shared_ptr<AgObject> value, bool useConversion) = 0;
    virtual boost::shared_ptr<AgObject> convertToTable(boost::shared_ptr<AgObject> value, boost::shared_ptr<TableFormat> format) = 0;
    virtual boost::shared_ptr<AgObject> convertToTable(boost::shared_ptr<AgObject> value)
    {
        return convertToTable(value, NULL);
    }

    virtual boost::shared_ptr<AgObject> convertToBean(boost::shared_ptr<AgObject> value, boost::shared_ptr<AgObject> originalValue) = 0;
};
