#include "device/DeviceUtils.h"

//
//
//
//DeviceUtils::DeviceUtils()
//{
// FIELD_DEVICE_DRIVER = "driver";
// FIELD_DEVICE_DESCRIPTION = "description";
// FIELD_DEVICE_NAME = "name";
//
//	//TODO: getValidators in FieldFormat
// NAME_FIELD = FieldFormat.create("<" + DeviceUtils::FIELD_DEVICE_NAME + "><S><D=" + Cres::get()->getString("devDeviceName") + "><H=" + Cres::get()->getString("devDeviceNameHelp") + ">");
// NAME_FIELD->getValidators()->add(new IdValidator());
// NAME_FIELD->getValidators()->add(ValidatorHelper::NAME_LENGTH_VALIDATOR);
// NAME_FIELD->getValidators()->add(ValidatorHelper::NAME_SYNTAX_VALIDATOR);
//
//
// DESCRIPTION_FIELD = FieldFormat.create("<"+DeviceUtils::FIELD_DEVICE_DESCRIPTION+"><S><D="+Cres::get()->getString("devDeviceDesc")+"><H="+Cres::get()->getString("devDeviceDescHelp")+">");
// 
//}
//
//
//DeviceUtils::~DeviceUtils()
//{  
//	//todo - Delete NAME_FIELD and DESCRIPTION_FIELD
//
//}
//
//
//
// boost::shared_ptr<FieldFormat>& DeviceUtils::getNAME_FIELD()
// {
//  
//  return *NAME_FIELD;
//
// }
//
// boost::shared_ptr<FieldFormat>& DeviceUtils::getDESCRIPTION_FIELD();
// {
//  return *DESCRIPTION_FIELD;
// }
