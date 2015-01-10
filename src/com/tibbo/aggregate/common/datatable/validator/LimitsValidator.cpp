#include "datatable/validator/LimitsValidator.h"

#include "util/StringUtils.h"

const char LimitsValidator::MIN_MAX_SEPARATOR = ' ';


// Generated
LimitsValidator::LimitsValidator(boost::shared_ptr<FieldFormat> fieldFormat, const std::string& source)
{
    std::list<std::string> minMax = StringUtils::split(source, MIN_MAX_SEPARATOR);

    if (fieldFormat->getType() == FieldFormat::DATA_FIELD || fieldFormat->getType() == FieldFormat::STRING_FIELD) {
        if (minMax.size() > 1) {
            min = new Integer(minMax.get(0));
            max = new Integer(minMax.get(1));
        }else {
            max = new Integer(minMax.get(0));
        }
    }else {
        if (minMax.size() > 1) {
            min = (Comparable) fieldFormat->valueFromString(minMax.get(0));
            max = (Comparable) fieldFormat->valueFromString(minMax.get(1));
        }else {
            max = (Comparable) fieldFormat->valueFromString(minMax.get(0));
        }
    }
}

LimitsValidator::LimitsValidator(boost::shared_ptr<Comparable> min, boost::shared_ptr<Comparable> max)
{

}

bool LimitsValidator::shouldEncode()
{

}

char LimitsValidator::getType()
{

}

//TODO: Comparable
Comparable* LimitsValidator::getMin()
{

}

Comparable* LimitsValidator::getMax()
{

}

std::string LimitsValidator::encode()
{

}

void* LimitsValidator::validate(void* value) /* throws(ValidationException) */
{

}

void LimitsValidator::compare(boost::shared_ptr<Comparable> cv, const std::string& smallMessage, const std::string& bigMessage) /* throws(ValidationException) */
{

}

int LimitsValidator::hashCode()
{

}

bool LimitsValidator::equals(void* obj)
{

}
