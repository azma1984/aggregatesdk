#include "datatable/validator/LimitsValidator.h"
#include <list>
#include <sstream>
#include "util/StringUtils.h"
#include "datatable/FieldFormat.h"
#include "util/simpleobject/AgInteger.h"
#include "AggreGateException.h"
#include "data/Data.h"
#include "datatable/ValidationException.h"

LimitsValidator::LimitsValidator(FieldFormatPtr fieldFormat, const std::string &source)
{
    std::vector<std::string> minMax = StringUtils::split(source, MIN_MAX_SEPARATOR);

    if (fieldFormat->getType() == FieldFormat::DATA_FIELD || fieldFormat->getType() == FieldFormat::STRING_FIELD)
    {
        if (minMax.size() > 1)
        {

            min = ComparablePtr(new AgInteger(atoi(minMax[0].c_str())));
            max = ComparablePtr(new AgInteger(atoi(minMax[1].c_str())));
        }
        else
        {
            max = ComparablePtr(new AgInteger(atoi(minMax[0].c_str())));
        }
    }
    else
    {
        if (minMax.size() > 1)
        {
            Comparable *c1 = dynamic_cast<Comparable *>(fieldFormat->valueFromString(minMax[0]));
            Comparable *c2 = dynamic_cast<Comparable *>(fieldFormat->valueFromString(minMax[1]));
            if (c1 == NULL || c2 == NULL)
            {
                throw AggreGateException("Fatal error in LimitsValidator::LimitsValidator(FieldFormatPtr fieldFormat, const std::string &source)");
            }

            min = ComparablePtr(c1);
            max = ComparablePtr(c2);
        }
        else
        {
            Comparable *c1 = dynamic_cast<Comparable *>(fieldFormat->valueFromString(minMax[0]));
            if (c1 == NULL)
            {
                throw AggreGateException("Fatal error in LimitsValidator::LimitsValidator(FieldFormatPtr fieldFormat, const std::string &source)");
            }

            max = ComparablePtr(c1);
        }
    }
}

LimitsValidator::LimitsValidator(ComparablePtr min, ComparablePtr max)
{
    if (min.get() != NULL && max.get() != NULL && typeid(*min.get()) != typeid(*max.get()))
    {
        throw AggreGateException("min and max Limits Validator parameters should be the same type, LimitsValidator::LimitsValidator()");
    }

    this->min = min;
    this->max = max;
}

bool LimitsValidator::shouldEncode()
{
    return true;
}

char LimitsValidator::getType()
{
    return FieldFormat::VALIDATOR_LIMITS;
}

ComparablePtr LimitsValidator::getMin()
{
    return min;
}

ComparablePtr LimitsValidator::getMax()
{
    return max;
}

std::string LimitsValidator::encode()
{
    std::stringstream ss;
    AgObject *objMin = dynamic_cast<AgObject *>(min.get());
    AgObject *objMax = dynamic_cast<AgObject *>(max.get());
    if (objMin == NULL || objMax == NULL)
    {
        throw AggreGateException("LimitsValidator::encode(), error cast to AgObject");
    }

    if (min.get() != 0)
    {

        ss << objMin->toString();
        if (max.get() != 0)
            ss << MIN_MAX_SEPARATOR << objMax->toString();
    }
    else {
        ss << (max.get() != 0 ? objMax->toString() : "");
    }
    return ss.str();
}

AgObjectPtr LimitsValidator::validate(AgObjectPtr value)
{
    if (value.get() == 0)
        return value;

    Data *data = dynamic_cast<Data *>(value.get());
    if (data)
    {
        /*if (data.getData() != null)
        {
             Comparable size = data.getData().length;
                compare(size, null, null);
              }*/
    }

 //   if ((Data*)(value) != 0) 
	//{
 //       Data* data = (Data*)(value);

 //      // if (data->getData() != 0) 
	////	{
 //     //      Comparable *size = data->getData().size();
 //     //      compare(size, 0, 0);
 //     //  }
 //   }
	//else 
	//if ((const std::string &)(value) != 0) 
	//{
 //   // const std::string & string = (const std::string &)(value);
 //    // compare(string.length(), Cres::get()->getString("dtValueTooShort"), Cres::get()->getString("dtValueTooLong"));
 //   }
	//else {
 //       if (!(Comparable*)(value) != 0) {
 //           throw new ValidationException("Value not comparable: " + value);
 //       }

 //       Comparable* cv = (Comparable*)(value);
 //       compare(cv, 0, 0);
 //   }

    return value;
}


void LimitsValidator::compare(Comparable *cv, const std::string& smallMessage, const std::string& bigMessage)
{
    if (min.get() != 0)
    {
        if (cv->compareTo(min.get()) < 0)
        {
            throw ValidationException("dtValueTooSmall");
            //todo
            //throw ValidationException(MessageFormat.format(smallMessage != 0 ? smallMessage : Cres::get()->getString("dtValueTooSmall"), cv, min));
        }
    }

    if (cv->compareTo(max.get()) > 0)
    {
        throw ValidationException("dtValueTooBig");
        //todo
        //throw new ValidationException(MessageFormat.format(bigMessage != 0 ? bigMessage : Cres::get()->getString("dtValueTooBig"), cv, max));
    }
}

int LimitsValidator::hashCode()
{
    int prime = 31;
    int result = 1;
    AgObject *objMin = dynamic_cast<AgObject *>(min.get());
    AgObject *objMax = dynamic_cast<AgObject *>(max.get());
    if (objMin == NULL || objMax == NULL)
    {
        throw AggreGateException("LimitsValidator::hashCode(), error cast to AgObject");
    }
    result = prime * result + ((max.get() == NULL) ? 0 : objMax->hashCode());
    result = prime * result + ((min.get() == NULL) ? 0 : objMin->hashCode());
    return result;
}


bool LimitsValidator::equals(AgObject* obj)
{
    if (this == obj)
    {
        return true;
    }

    if (!AbstractFieldValidator::equals(obj))
    {
        return false;
    }

    LimitsValidator *other = dynamic_cast<LimitsValidator*>(obj);
    AgObject *objMin = dynamic_cast<AgObject *>(min.get());
    AgObject *objMax = dynamic_cast<AgObject *>(max.get());
    AgObject *objMinOther = dynamic_cast<AgObject *>(other->min.get());
    AgObject *objMaxOther = dynamic_cast<AgObject *>(other->max.get());

    if (max.get() == NULL)
    {
        if (other->max.get() != NULL)
        {
            return false;
        }
    }
    else if (!objMax->equals(objMaxOther))
    {
        return false;
    }

    if (min.get() == 0)
    {
        if (other->min.get() != 0)
        {
            return false;
        }
    }
    else if (!objMin->equals(objMinOther))
    {
        return false;
    }

    return true;
}


