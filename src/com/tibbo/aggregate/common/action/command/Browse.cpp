#include "Browse.h"
#include "action/ActionUtils.h"
#include "datatable/FieldFormat.h"

std::string Browse::CF_BROWSE_URI = "uri";

Browse::Browse()
    : GenericActionCommand(ActionUtils::CMD_BROWSE, CFT_BROWSE(), 0)
{

}

//Browse::Browse(URI_Ptr url)
//    : GenericActionCommand(ActionUtils::CMD_BROWSE(), "")
//{
//    this->url_ = url;
//}

DataTable* Browse::constructParameters()
{
    std::list<AgObjectPtr> url;
    return new DataTable(CFT_BROWSE(), url);
}

URI_Ptr Browse::getUrl()
{
    return url_;
}

void Browse::setUrl(URI_Ptr url)
{
    this->url_ = url;
}

TableFormatPtr Browse::CFT_BROWSE()
{
    if (!CFT_BROWSE_) {
        CFT_BROWSE_ = FieldFormat::create( std::string("<").append(CF_BROWSE_URI).append("><S>"))->wrap();
    }

    return CFT_BROWSE_;
}

