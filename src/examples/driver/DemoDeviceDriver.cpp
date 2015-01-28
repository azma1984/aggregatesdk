#include "driver/DemoDeviceDriver.h"


DemoDeviceDriver::DemoDeviceDriver()
{
// demoSettingValue = "Demo Setting Value"; 
// AbstractDeviceDriver("Demo", 0);
}


//void setupDeviceContext(DeviceContextPtr deviceContext) 
//{
//    super::setupDeviceContext(deviceContext);
//    deviceContext)->setDefaultSynchronizationPeriod(int(30) * TimeHelper::SECOND_IN_MS);
//    deviceContext)->setDeviceType(u"demo"_j);
//}
//
VariableDefinitionPtr DemoDeviceDriver::readVariableDefinitions() 
{
 ////Creating String field format
 // boost::shared_ptr<FieldFormat<bool>> ff = FieldFormat<bool>::create("demoSettingField", FieldFormat<bool>::STRING_FIELD);
 ////Creating single-cell (scalar) setting
 // TableFormatPtrformat = new TableFormat(1, 1,ff);
	//
 ////Creating variable (setting) definition. Note that variable group should not be changed.
 // VariableDefinitionPtrvd = new VariableDefinition("demoSetting", format, true, true,"Demo Setting", ContextUtils::GROUP_REMOTE);
 //
 // return vd;

  //todo - function stub
	return 0;
}

FunctionDefinitionPtr  DemoDeviceDriver::readFunctionDefinitions() 
{
	//// Creating function input format (scalar, integer)
 //   boost::shared_ptr<FieldFormat<bool>> iff = FieldFormat<bool>::create("demoOperationInputField", FieldFormat<bool>::INTEGER_FIELD);
 //   TableFormatPtrinputFormat = new TableFormat(1, 1, iff);
	//    // Creating function output format (scalar, string)
 //   boost::shared_ptr<FieldFormat<bool>>  off = FieldFormat<bool>::create("demoOperationOutputField", FieldFormat<bool>::STRING_FIELD);
 //   TableFormatPtroutputFormat = new TableFormat(1, 1, off);
	// // Creating function (operation) definition. Note that function group should not be changed.
 //   FunctionDefinitionPtrfd = new FunctionDefinition("demoOperation", inputFormat, outputFormat, "Demo Operation", ContextUtils::GROUP_DEFAULT);
 //   return fd;

	//todo - function stub
	return 0;
}

EventDefinitionPtr  DemoDeviceDriver::readEventDefinitions() 
{
	// Creating EventDataPtr format (scalar, string)
 //   boost::shared_ptr<FieldFormat<bool>> ff = FieldFormat<bool>::create("demoEventField", FieldFormat<bool>::STRING_FIELD);
 //   TableFormatPtrformat = new TableFormat(1,1, ff);
	    // Creating event definition
//    EventDefinitionPtred = new EventDefinition("demoEvent", format, "Demo Event", ContextUtils::GROUP_DEFAULT);
 //   return ed;

	//todo - function stub
	return 0;
}
//
DataTablePtr DemoDeviceDriver::readVariableValue(VariableDefinitionPtr vd) 
{
	  // React, if our demo setting is being read
 //   if(vd->getName()->equals("demoSetting")) 
//	{  
	// This code will fill the only cell (1st record, 1st field) of demo setting Data Table with demoSettingValue
 //     return new DataTable(vd->getFormat(), "demoSettingValue");
  //  }
	    // Should never happen
 //   std::cout <<"Unknown demo device setting: "+vd->getName();

		//todo stub
return 0;
}

void DemoDeviceDriver::writeVariableValue(VariableDefinitionPtr vd, DataTablePtr value, DataTablePtr deviceValue) 
{
//    if(vd)->getName())->equals(u"demoSetting"_j))) {
//        demoSettingValue = value)->rec())->getString(u"demoSettingField"_j);
//        return;
//    }
//    std::cout <<"Unknown demo device setting: "_j)->append(vd)->getName())->toString());
}

DataTablePtr DemoDeviceDriver::executeFunction(FunctionDefinitionPtr fd, DataTablePtr parameters) 
{
//    if(fd)->getName())->equals(u"demoOperation"_j))) {
//        int inputParameter = (parameters)->rec())->getInt(u"demoOperationInputField"_j)))->intValue();
//        return new DataTable(fd)->getOutputFormat(), new voidArray({std::stringBuilder().append(u"Value of input parameter multiplied by two: "_j)->append(inputParameter * int(2))->toString())}));
//    }
//    std::cout <<"Unknown demo device operation: "_j)->append(fd)->getName())->toString());
	//todo stub
	return 0;
}

void DemoDeviceDriver::finishSynchronization() 
{
//    getDeviceContext())->fireEvent(u"demoEvent"_j, new voidArray({std::stringBuilder().append(u"Demo EventDataPtr: "_j)->append(::java::lang::Math::random())->toString())}));
}


