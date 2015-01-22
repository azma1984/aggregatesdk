#ifndef _DeviceUtils_H_
#define _DeviceUtils_H_

#include "datatable/FieldFormat.h"
#include "datatable/validator/IdValidator.h"
#include "datatable/validator/ValidatorHelper.h"
#include <string>
#include "cres.h"

//Singleton
class DeviceUtils
{
  private:
    DeviceUtils();
    ~DeviceUtils();
   DeviceUtils(DeviceUtils const&);
   void operator=(DeviceUtils const&);
 
   boost::shared_ptr<FieldFormat> NAME_FIELD;
   boost::shared_ptr<FieldFormat> DESCRIPTION_FIELD;
 public:
   static const std::string FIELD_DEVICE_DRIVER;
   static const std::string FIELD_DEVICE_DESCRIPTION;
   static const std::string FIELD_DEVICE_NAME;


   static DeviceUtils& getInstance()
    {
     static DeviceUtils instance;
     return instance;
    }
 
   FieldFormat &getNAME_FIELD();
   FieldFormat &getDESCRIPTION_FIELD();


};

#endif