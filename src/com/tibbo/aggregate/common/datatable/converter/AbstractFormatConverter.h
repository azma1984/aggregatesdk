#pragma once

#include <boost/shared_ptr.hpp>
#include "datatable/converter/FormatConverter.h"
#include "datatable/DataTableConversion.h"
#include "datatable/DataRecord.h"
#include "util/Class.h"


template <class T> class AbstractFormatConverter : public FormatConverter<T>
{

public:
    static const std::string VF_IS_NULL;

    /*static boost::shared_ptr<TableFormat> deriveNullable(boost::shared_ptr<TableFormat> format)
    {
        //boost::shared_ptr<TableFormat> format = format->clone();
    }*/

private:
    boost::shared_ptr<Class> valueClass;
    boost::shared_ptr<TableFormat> format;
    static std::list<std::string> FIELDS_TO_SKIP;
    static bool bInit_FIELDS_TO_SKIP;

    static void init()
    {
        if (!bInit_FIELDS_TO_SKIP)
        {
            FIELDS_TO_SKIP.push_back(VF_IS_NULL);
        }
    }

public:
    AbstractFormatConverter(boost::shared_ptr<Class> valueClass, boost::shared_ptr<TableFormat> format)
    {
        this->valueClass = valueClass;
        this->format = format;
    }

     AbstractFormatConverter(boost::shared_ptr<Class> valueClass)
     {
         this->valueClass = valueClass;
     }

     virtual boost::shared_ptr<Class> getValueClass()
     {
         return valueClass;
     }

     void setValueClass(boost::shared_ptr<Class> valueClass)
     {
         this->valueClass = valueClass;
     }


     virtual boost::shared_ptr<TableFormat> getFormat()
     {
         return format;
     }

     virtual boost::shared_ptr<FieldFormat> createFieldFormat(const std::string &name)
     {
         return DataTableConversion::createTableField(name, format);
     }

     virtual boost::shared_ptr<AgObject> instantiate(boost::shared_ptr<DataRecord> source)
     {
         boost::shared_ptr<DataRecord> dataRecord = convertToBean(source->wrap(), NULL);
         return dataRecord;
     }

     virtual boost::shared_ptr<T> clone(boost::shared_ptr<T> value, bool useConversion)
     {
         if (useConversion)
         {
            boost::shared_ptr<AgObject> fieldValue = convertToTable(value);
            return convertToBean(fieldValue, NULL);
         }
         else
         {
            return NULL;
         }
     }

     virtual boost::shared_ptr<AgObject> convertToTable(boost::shared_ptr<T> value)
     {
          return convertToTable(value, NULL);
     }

protected:
     static boost::shared_ptr<AgObject> simpleToTable(boost::shared_ptr<AgObject> value, boost::shared_ptr<TableFormat> format)
     {
         return DataTableConversion::beanToRecord(value, format, tru, false, FIELDS_TO_SKIP).wrap();
     }
};

template<class T> const std::string AbstractFormatConverter<T>::VF_IS_NULL = "isNull";
template<class T> bool AbstractFormatConverter<T>::bInit_FIELDS_TO_SKIP = false;
template<class T> std::list<std::string> AbstractFormatConverter<T>::FIELDS_TO_SKIP;
