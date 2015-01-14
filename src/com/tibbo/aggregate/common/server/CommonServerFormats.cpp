// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/server/CommonServerFormats.java

#include "server/CommonServerFormats.h"


TableFormat* CommonServerFormats::FIFT_LOGIN;
TableFormat* CommonServerFormats::FOFT_LOGIN;
TableFormat* CommonServerFormats::FIFT_GET_FORMAT;
TableFormat* CommonServerFormats::FOFT_GET_FORMAT;

CommonServerFormats::CommonServerFormats()
{
 FIFT_LOGIN = new TableFormat(1,1);
  
 FIFT_LOGIN->addField("<"+RootContextConstants::FIF_LOGIN_USERNAME+"><S>");

 FIFT_LOGIN->addField("<" + RootContextConstants::FIF_LOGIN_PASSWORD + "><S>");
  
 FOFT_LOGIN = new TableFormat(1,1);
  
 FOFT_LOGIN->addField("<" + RootContextConstants::FIF_LOGIN_USERNAME + "><S>");

 FIFT_GET_FORMAT = new TableFormat(1,1, "<" + UtilitiesContextConstants::FIF_GET_FORMAT_ID + "><I>");
 FOFT_GET_FORMAT = new TableFormat(1,1, "<" + UtilitiesContextConstants::FOF_GET_FORMAT_DATA + "><S>");
}




