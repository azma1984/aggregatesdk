#include "datatable/validator/RegexValidator.h"

const std::string RegexValidator::SEPARATOR_ = "^^";
const std::string RegexValidator::SEPARATOR_REGEX_ = "\\^\\^";

RegexValidator::RegexValidator(const std::string& source)
{
    std::size_t found = source.find(SEPARATOR_REGEX_);
    if (found != std::string::npos) {
        this->regex = source.substr(0, found);
        this->message = source.substr( found, source.length() - found);
    }else {
        this->regex = source;
    }
}

RegexValidator::RegexValidator(const std::string& regex, const std::string& message)
{
    this->regex = regex;
    this->message = message;
}

bool RegexValidator::shouldEncode()
{
    return true;
}

std::string RegexValidator::encode()
{
//    return std::string(regex).append( (message.empty() != 0 ? std::string(SEPARATOR).append(message) : "") );
	//todo- function stub
	return "";
}

char RegexValidator::getType()
{
   // return FieldFormat::VALIDATOR_REGEX;
	//todo- function stub
	return 0;
}

//TODO:
void* RegexValidator::validate(void* value) /* throws(ValidationException) */
{
//    try
//    {
//      if (value != null && !value.toString().matches(regex))
//      {
//        throw new ValidationException(message != null ? message : MessageFormat.format(Cres::get()->getString("dtValueDoesNotMatchPattern"), value, regex));
//      }
//    }
//    catch (PatternSyntaxException ex)
//    {
//      throw new ValidationException(ex.getMessage(), ex);
//    }

    return value;
}

bool RegexValidator::equals(void* obj)
{
    if (this == obj) {
        return true;
    }

//    if (!AbstractFieldValidator::equals(obj)) {
   //     return false;
  //  }

//    if (getClass() != obj.getClass()) {
//      return false;
//    }

    RegexValidator* other = (RegexValidator*)(obj);
    if (!other)
        return false;

    if (message != other->message) {
        return false;
    }

    if (regex != other->regex) {
        return false;
    }

    return true;
}

//TODO: need?
//int RegexValidator::hashCode()
//{
//    final int prime = 31;
//    int result = 1;
//    result = prime * result + ((message == null) ? 0 : message.hashCode());
//    result = prime * result + ((regex == null) ? 0 : regex.hashCode());
//    return result;
//}

