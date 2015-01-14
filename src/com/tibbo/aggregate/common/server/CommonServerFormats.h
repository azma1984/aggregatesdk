#pragma once

#include "datatable/TableFormat.h"
#include <boost/shared_ptr.hpp>


class CommonServerFormats
{
private:
    static boost::shared_ptr<TableFormat> FIFT_LOGIN;
    static boost::shared_ptr<TableFormat> FOFT_LOGIN;
    static boost::shared_ptr<TableFormat> FIFT_GET_FORMAT;
    static boost::shared_ptr<TableFormat> FOFT_GET_FORMAT;

public:
    static boost::shared_ptr<TableFormat> FIFT_LOGIN();
    static boost::shared_ptr<TableFormat> FOFT_LOGIN();
    static boost::shared_ptr<TableFormat> FIFT_GET_FORMAT();
    static boost::shared_ptr<TableFormat> FOFT_GET_FORMAT();
};
