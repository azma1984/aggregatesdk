#ifndef FIELDVALIDATOR_H
#define FIELDVALIDATOR_H

#include "util/Cloneable.h"
#include "util/Interface.h"

#include <string>

template <class T>
class FieldValidator : public Cloneable, public Interface
{
  virtual bool shouldEncode() = 0;
  virtual char getType() = 0;
  virtual std::string encode() = 0;
  virtual T validate(T value) = 0;// throws ValidationException;
};

#endif // FIELDVALIDATOR_H
