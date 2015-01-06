// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/Browse.java

#include "Browse.h"

#include "ActionUtils.h"



std::string Browse::CF_BROWSE_URI="uri";
/*
Browse::Browse()
{
 init();
  GenericActionCommand(ActionUtils::CMD_BROWSE, CFT_BROWSE, 0);
}
*/
/*
Browse::Browse(URI url)
{
  init()
  GenericActionCommand(ActionUtils::CMD_BROWSE(),0);
  this->url = url;
}
 */

/*
DataTable* Browse::constructParameters()
{
	return new DataTable(CFT_BROWSE, new voidArray({url)->toString())}));
}
 */

URI Browse::getUrl()
{
    return url;
}

void Browse::setUrl(URI url)
{
    this->url = url;
}



 /*
void Browse::init()
{
 CFT_BROWSE = FieldFormat::create("<" + CF_BROWSE_URI + "><S>")->wrap();

}
  */

