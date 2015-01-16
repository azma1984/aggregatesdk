#include "server/CommonServerFormats.h"


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

CommonServerFormats::~CommonServerFormats()
{
 delete FIFT_LOGIN;
 delete FOFT_LOGIN;
  
 delete FIFT_GET_FORMAT;
 delete FOFT_GET_FORMAT;
}

CommonServerFormats::TableFormat & getFIFT_LOGIN()
   { 
    return *FIFT_LOGIN; 
   }
   
CommonServerFormats::TableFormat & getFOFT_LOGIN()
   { 
    return *FOFT_LOGIN; 
   }
   
CommonServerFormats::TableFormat & getFIFT_GET_FORMAT()
   { 
    return *FIFT_GET_FORMAT; 
   }  
   
CommonServerFormats::TableFormat & getFOFT_GET_FORMAT()
   { 
    return *FOFT_GET_FORMAT; 
   }


