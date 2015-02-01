#pragma once

#include "util/Cloneable.h"
#include "util/Interface.h"
#include "util/AgObject.h"
#include "util/Pointers.h"

#include <string>

class FieldValidator : public Cloneable, public Interface, public AgObject
{
  virtual bool shouldEncode() = 0;
  virtual char getType() = 0;
  virtual std::string encode() = 0;
  virtual AgObjectPtr validate(AgObjectPtr value) = 0;
};

