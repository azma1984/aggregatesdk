#ifndef _DASHBOARD_PROPERTIES_H_
#define _DASHBOARD_PROPERTIES_H_

#include "datatable/AggreGateBean.h"
#include "datatable/DataRecord.h"
#include "datatable/TableFormat.h"

#include <string>

class DashboardProperties : public AggreGateBean
{
public:
	static std::string FIELD_NAME;
	static std::string FIELD_DESCRIPTION;
	static std::string FIELD_LAYOUT;
	static std::string FIELD_COLUMNS;
	static std::string FIELD_CLOSABLE;
	static std::string FIELD_CLEANUP;
  
	static int LAYOUT_DOCKABLE;
	static int LAYOUT_SCROLLABLE;

	static TableFormat FORMAT ;

	DashboardProperties();
    DashboardProperties(DataRecord& data);
    DashboardProperties(std::string &name, std::string &description);
    DashboardProperties(std::string &name, std::string &description, int layout);
  
    std::string getName();
    void setName(std::string name);
    std::string getDescription();
    void setDescription(std::string description);
    int getLayout();
    void setLayout(int layout);
    int getColumns();
    void setColumns(int columns);
    void setClosable(bool closable);
    bool isCleanup();
    void setCleanup(bool cleanup);
	bool isClosable();

	operator std::string() const;	  
private:
	std::string name;
	std::string description;
	int layout;
	int columns;
	bool closable;
	bool cleanup;    
};

#endif
