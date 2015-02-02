#include "datatable/validator/IdValidator.h"
#include "datatable/FieldFormat.h"
#include "util/simpleobject/AgString.h"
#include "util/Util.h"

IdValidator::IdValidator()
{
}

bool IdValidator::shouldEncode()
{
    return true;
}

std::string IdValidator::encode()
{
    return "";
}

char IdValidator::getType()
{
    return FieldFormat::VALIDATOR_ID;
}

AgObjectPtr IdValidator::validate(AgObjectPtr value)
{
    AgString *str;

    if (value.get() != NULL && (str = dynamic_cast<AgString *>(value.get())))
    {
        std::string retStr = Util::descriptionToName(str->value);
        AgObjectPtr agStr = AgObjectPtr(new AgString(retStr));
        return agStr;
    }

    return value;
}


