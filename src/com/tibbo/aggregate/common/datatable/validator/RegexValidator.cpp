#include "datatable/validator/RegexValidator.h"
#include "datatable/FieldFormat.h"
#include <regex>
#include <boost/functional/hash.hpp>
#include "datatable/ValidationException.h"

const std::string RegexValidator::SEPARATOR = "^^";
const std::string RegexValidator::SEPARATOR_REGEX = "\\^\\^";

RegexValidator::RegexValidator(const std::string& source)
{
    std::size_t found = source.find(SEPARATOR_REGEX);
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
    return regex + (message.length() != 0 ? SEPARATOR + message : "");
}

char RegexValidator::getType()
{
    return FieldFormat::VALIDATOR_REGEX;
}

AgObjectPtr RegexValidator::validate(AgObjectPtr value)
{
    if (!std::regex_match(value->toString(), std::regex(regex)))
    {
        throw ValidationException("dtValueDoesNotMatchPattern,  RegexValidator::validate");
    }
    return value;
}

int RegexValidator::hashCode()
{
    static int prime = 31;
    int result = 1;
    boost::hash<std::string> string_hash;
    result = prime * result + ((message.length() == NULL) ? 0 : string_hash(message));
    result = prime * result + ((regex.length() == NULL) ? 0 : string_hash(regex));
    return result;
}

bool RegexValidator::equals(AgObject* obj)
{
    if (this == obj)
    {
        return true;
    }

    if (!AbstractFieldValidator::equals(obj))
    {
        return false;
    }

    RegexValidator *other = dynamic_cast<RegexValidator*>(obj);
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


