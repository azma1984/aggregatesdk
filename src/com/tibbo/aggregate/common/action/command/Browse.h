#ifndef BrowseH
#define BrowseH

#include "action/GenericActionCommand.h"
#include "util/net.h"
#include "util/pointers.h"


class Browse : public GenericActionCommand
{
 private:
	URI *url;

private:
//	URI url;

protected:
    DataTablePtr constructParameters();  // todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	static std::string CF_BROWSE_URI;
   //TableFormatPtr CFT_BROWSE; todo it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

//	URI getUrl();
//	void setUrl(URI url);

    Browse();
//	Browse(URI url);
	void init();

};

#endif  //BrowseH
