#ifndef BrowseH
#define BrowseH

#include "action/GenericActionCommand.h"
#include "util/net.h"
#include "util/pointers.h"


class Browse : public GenericActionCommand
{
 private:
	URI_Ptr url;

 protected:
	DataTablePtr constructParameters();  //it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

 public:
	static std::string CF_BROWSE_URI;
	TableFormatPtr CFT_BROWSE; // it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

	URI_Ptr getUrl();
	void setUrl(URI_Ptr url);

    Browse();
	Browse(URI_Ptr url);
	void init();

};

#endif  //BrowseH
