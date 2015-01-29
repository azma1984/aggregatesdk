#include "datatable/validator/LimitsValidator.h"

#include "datatable/ValidationException.h"
#include "util/StringUtils.h"
#include "data/Data.h"

const char LimitsValidator::MIN_MAX_SEPARATOR = ' ';


LimitsValidator::LimitsValidator(boost::shared_ptr<FieldFormat> fieldFormat, const std::string& source)
{
	/*
	std::list<std::string> minMax = StringUtils::split(source, MIN_MAX_SEPARATOR);

    if (fieldFormat->getType() == FieldFormat::DATA_FIELD || fieldFormat->getType() == FieldFormat::STRING_FIELD) {
        if (minMax.size() > 1) {
            min = minMax.get(0);
            max = minMax.get(1);
        }else {
            max = minMax.get(0);
        }
    }else {
        if (minMax.size() > 1) {
            min = (Comparable) fieldFormat->valueFromString(minMax.get(0));
            max = (Comparable) fieldFormat->valueFromString(minMax.get(1));
        }else {
            max = (Comparable) fieldFormat->valueFromString(minMax.get(0));
        }
    }*/
}

LimitsValidator::LimitsValidator(boost::shared_ptr<Comparable> min, boost::shared_ptr<Comparable> max)
{
    //TODO: нужно ли генерироват исключение?
    //if (min != 0 && max != 0 && !min->equals(max))
         //Log.DATATABLE.error("'min' and 'max' Limits Validator parameters should be the same type", new Throwable());

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

//TODO: Comparable
boost::shared_ptr<Comparable> LimitsValidator::getMin()
{
    return min;
}

boost::shared_ptr<Comparable> LimitsValidator::getMax()
{
    return max;
}

std::string LimitsValidator::encode()
{
    std::stringstream ss;
    if (min != 0) {
        ss << min->toString();
        if (max != 0)
            ss << MIN_MAX_SEPARATOR <<max->toString();
    }else {
        ss << (max != 0 ? max->toString() : "");
    }
              return ss.str();
//    return min != 0 ? min.toString() + (max != 0 ? MIN_MAX_SEPARATOR + max.toString() : "") : (max != 0 ? max.toString() : "");
}

//TODO: ValidationException
void* LimitsValidator::validate(void* value) 
{
 //   if (value == 0)
 //       return value;

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

//TODO: ValidationException
void LimitsValidator::compare(boost::shared_ptr<Comparable> cv, const std::string& smallMessage, const std::string& bigMessage) /* throws(ValidationException) */
{
    if (min != 0) {
        if (cv->compareTo(min) < 0) {
//            throw new ValidationException(MessageFormat.format(smallMessage != 0 ? smallMessage : Cres::get()->getString("dtValueTooSmall"), cv, min));
        }
    }

    if (cv->compareTo(max) > 0) {
//        throw new ValidationException(MessageFormat.format(bigMessage != 0 ? bigMessage : Cres::get()->getString("dtValueTooBig"), cv, max));
    }
}
/*
int LimitsValidator::hashCode()
{
    final int prime = 31;
        int result = 1;
        result = prime * result + ((max == 0) ? 0 : max.hashCode());
        result = prime * result + ((min == 0) ? 0 : min.hashCode());
        return result;
}
*/

bool LimitsValidator::equals(void* obj)
{
    if (this == obj) {
        return true;
    }

   // if (!AbstractFieldValidator::equals(obj)) {
  //      return false;
 //   }

    //TODO:
//    if (getClass() != obj.getClass()) {
//        return false;
//    }

    LimitsValidator* other = (LimitsValidator*)(obj);
    if (max == 0) {
        if (other->max != 0) {
            return false;
        }
    }else if (!max->equals(other->max)) {
        return false;
    }

    if (min == 0) {
        if (other->min != 0) {
            return false;
        }
    }else if (!min->equals(other->min)) {
        return false;
    }

    return true;
}
