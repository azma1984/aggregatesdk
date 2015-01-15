#ifndef _EDIT_CODE_H_
#define _EDIT_CODE_H_

#include "action/GenericActionCommand.h"
#include <string>


class EditCode : public GenericActionCommand
{
private:
    static const std::string CF_CODE_;
    static const std::string CF_MODE_;
    static const std::string RF_RESULT_;
    static const std::string RF_CODE_;
    static TableFormat* CFT_EDIT_CODE_;
    static TableFormat* RFT_EDIT_CODE_;
    std::string code;
    std::string mode;
protected:
    void ctor();
    void ctor(const std::string& title, const std::string& code, const std::string& mode);
    void ctor(const std::string& title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

public:
    std::string getCode();
    void setCode(const std::string& code);
    std::string getMode();
    void setMode(const std::string& mode);

    // Generated
    EditCode();
    EditCode(const std::string & title, const std::string & code, const std::string & mode);
    EditCode(const std::string & title, DataTable* parameters);
protected:
    EditCode(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_CODE();
    static const std::string& CF_MODE();
    static const std::string& RF_RESULT();
    static const std::string& RF_CODE();
    static TableFormat*& CFT_EDIT_CODE();
    static TableFormat*& RFT_EDIT_CODE();

private:
    ::java::lang::Class* getClass0();
};
#endif  //_EDIT_CODE_H_
