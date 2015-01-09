#ifndef BrowseH
#define BrowseH


#include "action/GenericActionCommand.h"


class Browse : public GenericActionCommand
{

private:
	URI url;

protected:
    DataTable* constructParameters();  // todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	static std::string CF_BROWSE_URI;
   //TableFormat* CFT_BROWSE; todo it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

	URI getUrl();
	void setUrl(URI url);

    Browse();
	Browse(URI url);
	void init();
};

#endif  //BrowseH
