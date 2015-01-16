#ifndef CommonServerFormatsH
#define CommonServerFormatsH


#include "datatable/TableFormat.h"
#include "server/RootContextConstants.h"
#include "server/UtilitiesContextConstants.h"

//Singleton
class CommonServerFormats
{
  private:
   CommonServerFormats();
   ~CommonServerFormats();
   
   CommonServerFormats(CommonServerFormats const&);
   void operator=(CommonServerFormats const&);
   TableFormat* FIFT_LOGIN;
   TableFormat* FOFT_LOGIN;
   TableFormat* FIFT_GET_FORMAT;
   TableFormat* FOFT_GET_FORMAT;
public:
  
   static CommonServerFormats& getInstance()
    {
     static CommonServerFormats instance;
     return instance;
    }
 
   TableFormat& getFIFT_LOGIN();
   TableFormat& getFOFT_LOGIN();
   TableFormat& getFIFT_GET_FORMAT();
   TableFormat& getFOFT_GET_FORMAT();
 
};

#endif