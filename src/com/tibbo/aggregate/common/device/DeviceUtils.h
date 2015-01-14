#pragma once

#include "datatable/FieldFormat.h"
#include <string>

class DeviceUtils
{
private:    
    static boost::shared_ptr<FieldFormat> NAME_FIELD_;
    static boost::shared_ptr<FieldFormat> DESCRIPTION_FIELD_;

public:
    static const std::string FIELD_DEVICE_DRIVER;
    static const std::string FIELD_DEVICE_DESCRIPTION;
    static const std::string FIELD_DEVICE_NAME;
    static boost::shared_ptr<FieldFormat> NAME_FIELD();
    static boost::shared_ptr<FieldFormat> DESCRIPTION_FIELD();
};
