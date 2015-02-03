#include "datatable/field/DataFieldFormat.h"
#include "data/Data.h"
#include "util/StringUtils.h"
#include "AggreGateException.h"
#include "datatable/DataTableUtils.h"
#include "util/SString.h"
#include "util/simpleobject/AgString.h"
#include <sstream>
#include "datatable/TableFormat.h"
#include "datatable/DataTable.h"
#include "datatable/DataRecord.h"

const std::string DataFieldFormat::EDITOR_TEXT = "dtext";
const std::string DataFieldFormat::EDITOR_IMAGE = "image";
const std::string DataFieldFormat::EDITOR_SOUND = "sound";
const std::string DataFieldFormat::EDITOR_HEX = "hex";
const std::string DataFieldFormat::EDITOR_REPORT = "report";

const std::string DataFieldFormat::EXTENSIONS_DESCR_FIELD = "extensionsDescr";
const std::string DataFieldFormat::MODE_FIELD = "mode";
const std::string DataFieldFormat::EXTENSIONS_FIELD = "extensions";
const std::string DataFieldFormat::EXTENSION_FIELD = "extension";

const std::string DataFieldFormat::FOLDER_FIELD = "folder";

DataFieldFormat::DataFieldFormat(const std::string &name) : FieldFormat(name)
{
    setTransferEncode(true);
}

char DataFieldFormat::getType()
{
    return FieldFormat::DATA_FIELD;
}

const type_info &DataFieldFormat::getFieldClass()
{
    return typeid(Data);
}

const type_info &DataFieldFormat::getFieldWrappedClass()
{
    return typeid(Data);
}

AgObjectPtr DataFieldFormat::getNotNullDefault()
{
    return AgObjectPtr(new Data());
}

AgObjectPtr DataFieldFormat::valueFromString(const std::string &value, ClassicEncodingSettingsPtr settings, bool validate)
{
    //todo StringUtils.ASCII_CHARSET
    try
    {
        Data *data = new Data();
        std::vector<std::string> parts = StringUtils::split(value, SEPARATOR, 5);
        // parts.get(0) will return transcoder version, currently ignored

        if (parts[1] != std::string(DataTableUtils::DATA_TABLE_NULL))
        {
            SString ss(parts[1]);
            data->setId(ss.toLong());
        }
        if (parts[2] != std::string(DataTableUtils::DATA_TABLE_NULL))
        {
            data->setName(parts[2]);
        }

        SString ss3(parts[3]);
        int previewLen = ss3.toInteger();
        if (previewLen != -1)
        {
            data->setPreview(parts[5].substr(0, previewLen));
        }

        SString ss4(parts[4]);
        int dataLen = ss4.toInteger();

        if (dataLen != -1)
        {
            std::string str5 = parts[5].substr(previewLen <= 0 ? 0 : previewLen);
            std::vector<char> dv(str5.begin(), str5.end());
            data->setData(dv);
        }

        return AgObjectPtr(data);
    }
    catch(...)
    {
        throw AggreGateException("Invalid data block, DataFieldFormat::valueFromString");
    }
}

std::string DataFieldFormat::valueToString(AgObjectPtr value, ClassicEncodingSettingsPtr settings)
{
    //todo StringUtils.ASCII_CHARSET
    if (value.get() == NULL)
        return "";
    Data *data = dynamic_cast<Data *> (value.get());
    if (!data)
    {
        return "";
    }

    std::stringstream buf;
    buf << TRANSCODER_VERSION;
    buf << SEPARATOR;

    if (data->getId() != 0)
        buf << data->getId();
    else
        buf << std::string(DataTableUtils::DATA_TABLE_NULL);

    buf << SEPARATOR;

    if (data->getName().length() != 0)
        buf << data->getName();
    else
        buf << std::string(DataTableUtils::DATA_TABLE_NULL);

    buf << SEPARATOR;

    std::string previewStr = data->getPreview();
    if (previewStr.length() != 0)
    {
        buf << previewStr.length();
    }
    else
    {
        buf << -1;
    }

    std::string dataStr(data->getData().begin(), data->getData().end());
    if (dataStr.length() != 0)
    {
        buf << dataStr.length();
    }
    else
    {
        buf << -1;
    }

    buf << SEPARATOR;

    if (previewStr.length() != NULL)
    {
        buf << previewStr;
    }

    if (dataStr.length() != NULL)
    {
        buf << dataStr;
    }

    return buf.str();
}

std::string DataFieldFormat::encodeTextEditorOptions(const std::string &mode)
{
    return encodeTextEditorOptions(mode, "", "", std::list<std::string>());
}

std::string DataFieldFormat::encodeTextEditorOptions(const std::string &extensionsDescription, const std::string &folder, std::list<std::string> extensions)
{
    return encodeTextEditorOptions("", extensionsDescription, folder, extensions);
}

std::string DataFieldFormat::encodeTextEditorOptions(const std::string &mode, const std::string &extensionsDescription, const std::string &folder, std::list<std::string> extensions)
{
    // init variables
    if (EXTENSIONS_FORMAT.get() == NULL)
    {
        EXTENSIONS_FORMAT = TableFormatPtr(new TableFormat());
        DATA_EDITOR_OPTIONS_FORMAT = TableFormatPtr(new TableFormat(1, 1));

        FieldFormatPtr modeF = FieldFormat::create(MODE_FIELD, FieldFormat::STRING_FIELD);
        modeF->setNullable(true);

        FieldFormatPtr edF = FieldFormat::create(EXTENSIONS_DESCR_FIELD, FieldFormat::STRING_FIELD);
        edF->setNullable(true);

        // Default value for 'extensions' field
        FieldFormatPtr extF = FieldFormat::create(EXTENSION_FIELD, FieldFormat::STRING_FIELD);
        EXTENSIONS_FORMAT->addField(extF);
        DataTable *dt = new DataTable(EXTENSIONS_FORMAT);
        AgObjectPtr dtobject = AgObjectPtr(dt);

        FieldFormatPtr extsF = FieldFormat::create(EXTENSIONS_FIELD, FieldFormat::DATATABLE_FIELD);
        extsF->setDefault(dtobject);
        extsF->setNullable(true);

        FieldFormatPtr folderF = FieldFormat::create(FOLDER_FIELD, FieldFormat::STRING_FIELD);
        folderF->setNullable(true);

        DATA_EDITOR_OPTIONS_FORMAT->addField(modeF);
        DATA_EDITOR_OPTIONS_FORMAT->addField(edF);
        DATA_EDITOR_OPTIONS_FORMAT->addField(extsF);
        DATA_EDITOR_OPTIONS_FORMAT->addField(folderF);
    }

    DataTablePtr esdt = NULL;
    if (extensions.size() != 0)
    {
        esdt = DataTablePtr(new DataTable(EXTENSIONS_FORMAT));
        for (std::list<std::string>::iterator it = extensions.begin(); it != extensions.end(); ++it)
        {
            DataRecordPtr dr = esdt->addRecord();
            dr->setValue(EXTENSION_FIELD, AgObjectPtr(new AgString(*it)));
        }
    }
    DataTablePtr eodt = DataTablePtr(new DataTable(DATA_EDITOR_OPTIONS_FORMAT));
    DataRecordPtr dr = eodt->addRecord();

    dr->setValue(MODE_FIELD, AgObjectPtr(new AgString(mode)));
    dr->setValue(FOLDER_FIELD, AgObjectPtr(new AgString(folder)));
    dr->setValue(EXTENSIONS_DESCR_FIELD, AgObjectPtr(new AgString(extensionsDescription)));
    dr->setValue(EXTENSIONS_FIELD, esdt);

    return eodt->encode();
}

std::list<std::string> DataFieldFormat::getSuitableEditors()
{
    std::list<std::string> list;
    list.push_back(EDITOR_LIST);
    list.push_back(EDITOR_TEXT);
    list.push_back(EDITOR_IMAGE);
    list.push_back(EDITOR_SOUND);
    list.push_back(EDITOR_HEX);
    list.push_back(EDITOR_REPORT);
    return list;
}
