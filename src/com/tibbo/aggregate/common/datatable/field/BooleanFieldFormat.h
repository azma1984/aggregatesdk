#ifndef _BooleanFieldFormat_H_
#define _BooleanFieldFormat_H_

#include "../FieldFormat.h"
#include "../encoding/ClassicEncodingSettings.h"
#include "util/SString.h"

class BooleanFieldFormat : public FieldFormat
{

public:
    BooleanFieldFormat(const std::string &name) : FieldFormat(name)
    {

    }

    char getType()
    {
        return FieldFormat::BOOLEAN_FIELD;
    }

    bool getNotNullDefault()
    {
        return false;
    }

    //todo
    /*Object convertValue(Object value) throws ValidationException
    {
      if (value != null && !(value instanceof Boolean))
      {
        value = Util.convertToBoolean(value, true, false);
      }

      return value;
    }*/


    bool valueFromString(const std::string &value, boost::shared_ptr<ClassicEncodingSettings> settings, bool validate)
    {
        SString v(value);

        if (v == "1" || v.toUpperCase() == "TRUE")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    std::string valueToString(bool value, boost::shared_ptr<ClassicEncodingSettings> settings)
    {
        return value ? "1" : "0";
    }


};

#endif
