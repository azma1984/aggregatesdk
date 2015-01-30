#pragma once
#ifndef ShowErrorH
#define ShowErrorH

#include "action/GenericActionCommand.h"
 #include "action/ActionUtils.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "action/GenericActionCommand.h"
#include "util/Pointers.h"


class ShowError : public GenericActionCommand
{
private:

	int level;
	std::string message;
	void Init();

public:
	static const std::string CF_LEVEL;
	static const std::string CF_MESSAGE;
	static const std::string CF_EXCEPTION;
	static TableFormatPtr CFT_SHOW_ERROR;
   // ::java::lang::Throwable* exception; //todo

    DataTablePtr constructParameters();

    int getLevel();
    void setLevel(int level);
	std::string getMessage();
    void setMessage(const std::string & message);
   // ::java::lang::Throwable* getException();//todo
  //  void setException(::java::lang::Throwable* exception); todo

    ShowError();
    //ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception); todo

};

#endif
