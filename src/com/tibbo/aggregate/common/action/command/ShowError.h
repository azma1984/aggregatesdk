#pragma once

#include "action/GenericActionCommand.h"
#include "util/Pointers.h"

class ShowError : public GenericActionCommand
{
private:
    static const std::string CF_LEVEL_;
    static const std::string CF_MESSAGE_;
    static const std::string CF_EXCEPTION_;
    static TableFormatPtr CFT_SHOW_ERROR_;
   // ::java::lang::Throwable* exception; //todo
    int level;
    const std::string & message;

public:
    DataTablePtr constructParameters();

    int getLevel();
    void setLevel(int level);
    const std::string & getMessage();
    void setMessage(const std::string & message);
   // ::java::lang::Throwable* getException();//todo
  //  void setException(::java::lang::Throwable* exception); todo

    ShowError();
    //ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception); todo

    static const std::string& CF_LEVEL();
    static const std::string& CF_MESSAGE();
    static const std::string& CF_EXCEPTION();
    static TableFormatPtr CFT_SHOW_ERROR();
};
