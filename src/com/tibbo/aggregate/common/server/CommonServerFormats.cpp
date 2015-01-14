#include "server/CommonServerFormats.h"


boost::shared_ptr<TableFormat> CommonServerFormats::FIFT_LOGIN()
{
    if (!FIFT_LOGIN) {
        FIFT_LOGIN = new TableFormat(1, 1);
        FIFT_LOGIN->addField("<"+RootContextConstants::FIF_LOGIN_USERNAME+"><S>");
        FIFT_LOGIN->addField("<" + RootContextConstants::FIF_LOGIN_PASSWORD + "><S>");
    }

    return FIFT_LOGIN;
}

boost::shared_ptr<TableFormat> CommonServerFormats::FOFT_LOGIN()
{
    if (!FOFT_LOGIN) {
        FOFT_LOGIN = new TableFormat(1,1);
        FOFT_LOGIN->addField("<" + RootContextConstants::FIF_LOGIN_USERNAME + "><S>");
    }

    return FOFT_LOGIN;
}

boost::shared_ptr<TableFormat> CommonServerFormats::FIFT_GET_FORMAT()
{
    if (!FIFT_GET_FORMAT )
        FIFT_GET_FORMAT = new TableFormat(1,1, "<" + UtilitiesContextConstants::FIF_GET_FORMAT_ID + "><I>");

    return FIFT_GET_FORMAT;
}

boost::shared_ptr<TableFormat> CommonServerFormats::FOFT_GET_FORMAT()
{
    if (!FOFT_GET_FORMAT)
        FOFT_GET_FORMAT = new TableFormat(1,1, "<" + UtilitiesContextConstants::FOF_GET_FORMAT_DATA + "><S>");

    return FOFT_GET_FORMAT;
}




