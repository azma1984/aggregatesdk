#include "datatable/field/DataTableFieldFormat.h"

#include "datatable/DataTable.h"
#include "datatable/DataTableReplication.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "datatable/validator/AbstractFieldValidator.h"

class DataTableFieldFormatValidator : public AbstractFieldValidator
{
    virtual DataTablePtr validate(DataTablePtr value)
    {

    }
};

DataTableFieldFormat::DataTableFieldFormat(const std::string & name)
    : FieldFormat(name)
{
    setTransferEncode(true);
    addValidator(new DataTableFieldFormat_DataTableFieldFormat_1(this));
}

char DataTableFieldFormat::getType()
{
    return FieldFormat::DATATABLE_FIELD;
}

//java::lang::Class* Datefield::DataTableFieldFormat::getFieldClass()
//{
//    return DataTable::class_();
//}

//java::lang::Class* Datefield::DataTableFieldFormat::getFieldWrappedClass()
//{
//    return DataTable::class_();
//}

DataTable* DataTableFieldFormat::getNotNullDefault()
{
    return new DataTable();
}

DataTable* Datefield::DataTableFieldFormat::valueFromString(const std::string & value, ClassicEncodingSettingsPtr settings, bool validate)
{
    try {
        DataTablePtr defaultValue = DataTable( new getDefaultValue());
        ::java::lang::Boolean* tempEncodeFieldNames;
        TableFormat* oldFormat;
        if(settings != 0) {
            oldFormat = settings)->getFormat();
            if(defaultValue != 0) {
                settings)->setFormat(defaultValue)->getFormat());
            }
            tempEncodeFieldNames = ::java::lang::Boolean::valueOf(settings)->isEncodeFieldNames());
        } else {
            settings = new encoding::ClassicEncodingSettings(false);
            tempEncodeFieldNames = ::java::lang::Boolean::valueOf(false);
        }
        {
            auto finally0 = finally([&] {
                if(settings != 0) {
                    settings)->setFormat(oldFormat);
                    if((tempEncodeFieldNames))->booleanValue()) {
                        settings)->setEncodeFieldNames((tempEncodeFieldNames))->booleanValue());
                    }
                }
            });
            {
                auto res = value != 0 ? new DataTable(value, settings, validate) : static_cast< DataTable* >(0);
                if(defaultValue != 0 && defaultValue)->getFieldCount() > 0 && !res)->getFormat())->extend(defaultValue)->getFormat())) {
                    auto newRes = java_cast< DataTable* >(getDefaultValue()))->clone();
                    DataTableReplication::copy(res, newRes, true, true, true);
                    res = newRes;
                }
                if(res != 0 && validate) {
                    res)->validate();
                }
                return res;
            }
        }

    } catch (::java::lang::Exception* ex) {
        std::cout <<"Error constructing value of field '"_j)->append(toString())
            ->append(u"': "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

std::string DataTableFieldFormat::encodeEditorOptions(bool showTableData)
{    
    return showTableData ? "1" : "0";
}



//java::lang::Class* Datefield::DataTableFieldFormat::class_()
//{
//    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.field.DataTableFieldFormat", 63);
//    return c;
//}


//java::lang::Class* Datefield::DataTableFieldFormat::getClass0()
//{
//    return class_();
//}

