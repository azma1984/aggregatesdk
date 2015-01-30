#ifndef BrowseH
#define BrowseH

#include "action/GenericActionCommand.h"
#include "util/net.h"
#include "util/pointers.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"


class Browse : public GenericActionCommand
{
 private:
//	URI_Ptr url_;
    static TableFormatPtr CFT_BROWSE_;

 protected:
    DataTable* constructParameters();  //it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

 public:
	static std::string CF_BROWSE_URI;	

//	URI_Ptr getUrl();
//	void setUrl(URI_Ptr url);

    Browse();
//	Browse(URI_Ptr url);
    static TableFormatPtr CFT_BROWSE();
};

#endif  //BrowseH
