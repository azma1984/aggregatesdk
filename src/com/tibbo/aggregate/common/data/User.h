// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/User.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::data::User
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_NAME_;
    static const std::string FIELD_FIRSTNAME_;
    static const std::string FIELD_LASTNAME_;
    static const std::string FIELD_PASSWORD_;
    static const std::string FIELD_COUNTRY_;
    static const std::string FIELD_REGION_;
    static const std::string FIELD_ZIP_;
    static const std::string FIELD_CITY_;
    static const std::string FIELD_ADDRESS1_;
    static const std::string FIELD_ADDRESS2_;
    static const std::string FIELD_COMMENTS_;
    static const std::string FIELD_COMPANY_;
    static const std::string FIELD_DEPARTMENT_;
    static const std::string FIELD_EMAIL_;
    static const std::string FIELD_PHONE_;
    static const std::string FIELD_FAX_;
    static const std::string FIELD_TIMEZONE_;
    static const std::string FIELD_LOCALE_;
    static const std::string FIELD_DATEPATTERN_;
    static const std::string FIELD_TIMEPATTERN_;
    static const std::string FIELD_WEEK_START_;
    static const std::string DEFAULT_ADMIN_USERNAME_;
    static const std::string DEFAULT_ADMIN_PASSWORD_;
    static const std::string DEFAULT_LOCALE_;
    ::java::lang::Long* id;
    std::string* name;
    std::string* password;
    std::string* firstname;
    std::string* lastname;
    std::string* email;
    std::string* company;
    std::string* department;
    std::string* comments;
    std::string* timezone;
    std::string* phone;
    std::string* fax;
    std::string* address1;
    std::string* address2;
    std::string* city;
    std::string* region;
    std::string* zip;
    int country;
    std::string* locale;
    std::string* datepattern;
    std::string* timepattern;
    int weekStart;
protected:
    void ctor();

public:
    std::string* getAddress1();
    std::string* getAddress2();
    std::string* getCity();
    std::string* getComments();
    std::string* getCompany();
    int getCountry();
    std::string* getDepartment();
    std::string* getEmail();
    std::string* getFax();
    std::string* getFirstname();
    std::string* getLastname();
    std::string* getFullName();
    std::string* getPassword();
    std::string* getPhone();
    std::string* getRegion();
    std::string* getTimezone();
    std::string* getName();
    std::string* getZip();
    ::java::lang::Long* getId();
    std::string* getLocale();
    std::string* getDatepattern();
    std::string* getTimepattern();
    void setZip(std::string* zip);
    void setName(std::string* username);
    void setTimezone(std::string* timezone);
    void setRegion(std::string* region);
    void setPhone(std::string* phone);
    void setPassword(std::string* password);
    void setLastname(std::string* lastname);
    void setFirstname(std::string* firstname);
    void setFax(std::string* fax);
    void setEmail(std::string* email);
    void setDepartment(std::string* department);
    void setCountry(int country);
    void setCompany(std::string* company);
    void setComments(std::string* comments);
    void setCity(std::string* city);
    void setAddress2(std::string* address2);
    void setAddress1(std::string* address1);
    void setId(::java::lang::Long* id);
    void setLocale(std::string* locale);
    void setDatepattern(std::string* datepattern);
    void setTimepattern(std::string* timepattern);
    int getWeekStart();
    void setWeekStart(int weekStart);
    std::string* toString();
    static const std::string createDescription(std::string* firstname, std::string* lastname, std::string* username, bool showUsername);

    // Generated
    User();
protected:
    User(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_NAME();
    static const std::string& FIELD_FIRSTNAME();
    static const std::string& FIELD_LASTNAME();
    static const std::string& FIELD_PASSWORD();
    static const std::string& FIELD_COUNTRY();
    static const std::string& FIELD_REGION();
    static const std::string& FIELD_ZIP();
    static const std::string& FIELD_CITY();
    static const std::string& FIELD_ADDRESS1();
    static const std::string& FIELD_ADDRESS2();
    static const std::string& FIELD_COMMENTS();
    static const std::string& FIELD_COMPANY();
    static const std::string& FIELD_DEPARTMENT();
    static const std::string& FIELD_EMAIL();
    static const std::string& FIELD_PHONE();
    static const std::string& FIELD_FAX();
    static const std::string& FIELD_TIMEZONE();
    static const std::string& FIELD_LOCALE();
    static const std::string& FIELD_DATEPATTERN();
    static const std::string& FIELD_TIMEPATTERN();
    static const std::string& FIELD_WEEK_START();
    static const std::string& DEFAULT_ADMIN_USERNAME();
    static const std::string& DEFAULT_ADMIN_PASSWORD();
    static const std::string& DEFAULT_LOCALE();

private:
    ::java::lang::Class* getClass0();
};
