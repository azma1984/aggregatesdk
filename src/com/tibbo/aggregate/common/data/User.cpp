#include "data/User.h"
#include "util/DateUtils.h"

std::string User::FIELD_NAME = "name";
std::string User::FIELD_FIRSTNAME = "firstname";
std::string User::FIELD_LASTNAME = "lastname";
std::string User::FIELD_PASSWORD = "password";
std::string User::FIELD_COUNTRY = "country";
std::string User::FIELD_REGION = "region";
std::string User::FIELD_ZIP = "zip";
std::string User::FIELD_CITY = "city";
std::string User::FIELD_ADDRESS1 = "address1";
std::string User::FIELD_ADDRESS2 = "address2";
std::string User::FIELD_COMMENTS = "comments";
std::string User::FIELD_COMPANY = "company";
std::string User::FIELD_DEPARTMENT = "department";
std::string User::FIELD_EMAIL = "email";
std::string User::FIELD_PHONE = "phone";
std::string User::FIELD_FAX = "fax";
std::string User::FIELD_TIMEZONE = "timezone";
std::string User::FIELD_LOCALE = "locale";
std::string User::FIELD_DATEPATTERN = "datepattern";
std::string User::FIELD_TIMEPATTERN = "timepattern";
std::string User::FIELD_WEEK_START = "weekStart";

std::string User::DEFAULT_ADMIN_USERNAME = "admin";
std::string User::DEFAULT_ADMIN_PASSWORD = "admin";

std::string User::DEFAULT_LOCALE = "en";


User::User()
{
    locale = DEFAULT_LOCALE;
    datepattern = DateUtils::DEFAULT_DATE_PATTERN;
    timepattern = DateUtils::DEFAULT_TIME_PATTERN;
    weekStart = 0;//Calendar::MONDAY;
}

std::string User::getAddress1()
{
return address1;
}

std::string User::getAddress2()
{
return address2;
}

std::string User::getCity()
{
return city;
}

std::string User::getComments()
{
return comments;
}

std::string User::getCompany()
{
return company;
}

int User::getCountry()
{
return country;
}

std::string User::getDepartment()
{
return department;
}

std::string User::getEmail()
{
return email;
}

std::string User::getFax()
{
return fax;
}

std::string User::getFirstname()
{
return firstname;
}

std::string User::getLastname()
{
return lastname;
}

std::string User::getFullName()
{
    return std::string(firstname).append( (lastname.length() ? " " + lastname : "") );
}

std::string User::getPassword()
{
return password;
}

std::string User::getPhone()
{
return phone;
}

std::string User::getRegion()
{
return region;
}

std::string User::getTimezone()
{
return timezone;
}

std::string User::getName()
{
return name;
}

std::string User::getZip()
{
return zip;
}

long User::getId()
{
return id;
}

std::string User::getLocale()
{
return locale;
}

std::string User::getDatepattern()
{
return datepattern;
}

std::string User::getTimepattern()
{
return timepattern;
}

void User::setZip(const std::string& zip)
{
this->zip = zip;
}

void User::setName(const std::string& username)
{
this->name = username;
}

void User::setTimezone(const std::string& timezone)
{
this->timezone = timezone;
}

void User::setRegion(const std::string& region)
{
this->region = region;
}

void User::setPhone(const std::string& phone)
{
this->phone = phone;
}

void User::setPassword(const std::string& password)
{
this->password = password;
}

void User::setLastname(const std::string& lastname)
{
this->lastname = lastname;
}

void User::setFirstname(const std::string& firstname)
{
this->firstname = firstname;
}

void User::setFax(const std::string& fax)
{
this->fax = fax;
}

void User::setEmail(const std::string& email)
{
this->email = email;
}

void User::setDepartment(const std::string& department)
{
this->department = department;
}

void User::setCountry(int country)
{
this->country = country;
}

void User::setCompany(const std::string& company)
{
this->company = company;
}

void User::setComments(const std::string& comments)
{
this->comments = comments;
}

void User::setCity(const std::string& city)
{
this->city = city;
}

void User::setAddress2(const std::string& address2)
{
this->address2 = address2;
}

void User::setAddress1(const std::string& address1)
{
this->address1 = address1;
}

void User::setId(long id)
{
    this->id = id;
}

void User::setLocale(const std::string& locale)
{
    this->locale = locale;
}

void User::setDatepattern(const std::string& datepattern)
{
    this->datepattern = datepattern;
}

void User::setTimepattern(const std::string& timepattern)
{
    this->timepattern = timepattern;
}

int User::getWeekStart()
{
    return weekStart;
}

void User::setWeekStart(int weekStart)
{
    this->weekStart = weekStart;
}

std::string User::toString()
{
    return createDescription(firstname, lastname, name, true);
}

std::string User::createDescription(const std::string& firstname, const std::string& lastname, const std::string& username, bool showUsername)
{
    bool hasFirst = firstname.length() > 0;
    bool hasLast = lastname.length() > 0;

    std::string desc = username;

    if (hasFirst || hasLast) {
        if (showUsername) {
            desc += " (";
        }else {
            desc = "";
        }

        desc += hasFirst ? firstname : "";
        desc += hasLast ? (hasFirst ? " " : "") + lastname : "";

        if (showUsername) {
            desc += ")";
        }
    }

    return desc;
}

