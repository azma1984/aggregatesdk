#pragma once
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/AgObject.h"

class Class;
class TableFormat;
class FieldFormat;
class DataRecord;

template <class T> class FormatConverter
{
public:
    virtual boost::shared_ptr<Class> getValueClass() = 0;
    virtual boost::shared_ptr<TableFormat> getFormat() = 0;
    virtual boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name) = 0;
    virtual boost::shared_ptr<AgObject> instantiate(boost::shared_ptr<DataRecord> source) = 0;
    virtual boost::shared_ptr<T> clone(boost::shared_ptr<T> value, bool useConversion) = 0;
    virtual boost::shared_ptr<AgObject> convertToTable(boost::shared_ptr<T> value) = 0;
    virtual boost::shared_ptr<AgObject> convertToTable(boost::shared_ptr<T> value, boost::shared_ptr<TableFormat> format) = 0;
    virtual boost::shared_ptr<T> convertToBean(boost::shared_ptr<AgObject> value, boost::shared_ptr<T> originalValue) = 0;
};
