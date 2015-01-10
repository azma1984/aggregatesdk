#ifndef _AbstractRecordValidator_H_
#define _AbstractRecordValidator_H_

#include "datatable/validator/RecordValidator.h"
#include "util/Util.h"


class AbstractRecordValidator : public RecordValidator
{
public:
    //TODO: пересмотреть сравнение
    bool equals(AbstractRecordValidator* obj) {
        if (obj == null) {
          return false;
        }
        /*
        if (! dynamic_cast<RecordValidator*>(obj)) {
            return false;
        }
        */

        return Util::equals(getType(), ((RecordValidator) obj).getType());
    }

    //TODO: исключение
    AbstractRecordValidator* clone() {
        return RecordValidator::clone();
//        try
//        {
//          return RecordValidator::clone();
//        }
//        catch (CloneNotSupportedException ex)
//        {
//          throw new IllegalStateException(ex);
//        }
    }
};
