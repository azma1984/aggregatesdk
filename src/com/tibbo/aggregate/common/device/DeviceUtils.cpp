#include "device/DeviceUtils.h"
//#include "datatable/validator/ValidatorHelper.h"

 const std::string DeviceUtils::FIELD_DEVICE_DRIVER = "driver";
 const std::string DeviceUtils::FIELD_DEVICE_DESCRIPTION = "description";
 const std::string DeviceUtils::FIELD_DEVICE_NAME = "name";


DeviceUtils::DeviceUtils()
{

 NAME_FIELD = FieldFormat::create("<" + DeviceUtils::FIELD_DEVICE_NAME + "><S><D=" + Cres::get()->getString("devDeviceName") + "><H=" + Cres::get()->getString("devDeviceNameHelp") + ">");
//todo: IdValidator - abstract class
//  NAME_FIELD->getValidators().push_back(new IdValidator());
// ValidatorHelper &v = ValidatorHelper::getInstance();
// NAME_FIELD->getValidators().push_back(v.getNAME_LENGTH_VALIDATOR());
// NAME_FIELD->getValidators().push_back(v.getNAME_SYNTAX_VALIDATOR());


 DESCRIPTION_FIELD = FieldFormat::create("<"+DeviceUtils::FIELD_DEVICE_DESCRIPTION+"><S><D="+Cres::get()->getString("devDeviceDesc")+"><H="+Cres::get()->getString("devDeviceDescHelp")+">");
 
}


DeviceUtils::~DeviceUtils()
{  
	//todo - Delete NAME_FIELD and DESCRIPTION_FIELD

}



 FieldFormat& DeviceUtils::getNAME_FIELD()
 {
  
  return *NAME_FIELD;

 }

 FieldFormat& DeviceUtils::getDESCRIPTION_FIELD()
 {
  return *DESCRIPTION_FIELD;
 }
