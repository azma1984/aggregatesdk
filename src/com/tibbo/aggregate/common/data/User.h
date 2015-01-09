#ifndef _User_H_
#define _User_H_

#include <string>

class User
{
private:
    long id;
    std::string name;
    std::string password;
    std::string firstname;
    std::string lastname;
    std::string email;
    std::string company;
    std::string department;
    std::string comments;
    std::string timezone;
    std::string phone;
    std::string fax;
    std::string address1;
    std::string address2;
    std::string city;
    std::string region;
    std::string zip;
    int country;
    std::string locale;
    std::string datepattern;
    std::string timepattern;
    int weekStart;
protected:
    void ctor();

public:
    std::string getAddress1();
    std::string getAddress2();
    std::string getCity();
    std::string getComments();
    std::string getCompany();
    int getCountry();
    std::string getDepartment();
    std::string getEmail();
    std::string getFax();
    std::string getFirstname();
    std::string getLastname();
    std::string getFullName();
    std::string getPassword();
    std::string getPhone();
    std::string getRegion();
    std::string getTimezone();
    std::string getName();
    std::string getZip();
    long getId();
    std::string getLocale();
    std::string getDatepattern();
    std::string getTimepattern();
    void setZip(const std::string& zip);
    void setName(const std::string& username);
    void setTimezone(const std::string& timezone);
    void setRegion(const std::string& region);
    void setPhone(const std::string& phone);
    void setPassword(const std::string& password);
    void setLastname(const std::string& lastname);
    void setFirstname(const std::string& firstname);
    void setFax(const std::string& fax);
    void setEmail(const std::string& email);
    void setDepartment(const std::string& department);
    void setCountry(int country);
    void setCompany(const std::string& company);
    void setComments(const std::string& comments);
    void setCity(const std::string& city);
    void setAddress2(const std::string& address2);
    void setAddress1(const std::string& address1);
    void setId(::java::lang::Long* id);
    void setLocale(const std::string& locale);
    void setDatepattern(const std::string& datepattern);
    void setTimepattern(const std::string& timepattern);
    int getWeekStart();
    void setWeekStart(int weekStart);
    std::string toString();
    std::string createDescription(const std::string& firstname, const std::string& lastname, const std::string& username, bool showUsername);

    User();
};
