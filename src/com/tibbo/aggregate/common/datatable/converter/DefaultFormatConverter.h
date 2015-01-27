
#ifndef DefaultFormatConverterH
#define DefaultFormatConverterH

//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/DataTableConversion.h"
//#include "datatable/DataTableException.h"
#include "datatable/TableFormat.h"
#include "AgClass.h"
#include "datatable/converter/AbstractFormatConverter.h"



class DefaultFormatConverter//: public AbstractFormatConverter
{

public:
//    typedef AbstractFormatConverter super;

//private:
//    ::std::set  constructorArguments;
//protected:
//    void ctor(::java::lang::Class* valueClass, TableFormat* format);

//public:
//    void* convertToBean(void* value, void* originalValue);
//    void* convertToTable(void* value, TableFormat* format);
//    FieldFormat* createFieldFormat(const std::string & name);
//    void addConstructorField(const std::string & field);
//    void* instantiate(DataRecord* source) /* throws(InstantiationException) */;

//    // Generated
    DefaultFormatConverter(AgClass* valueClass, boost::shared_ptr<TableFormat> format);
//protected:
//    DefaultFormatConverter(const ::default_init_tag&);


//public:
    

//private:
//    void init();

//public:
//    void* convertToTable(void* value);

//private:
//    ::java::lang::Class* getClass0();
};
#endif 
