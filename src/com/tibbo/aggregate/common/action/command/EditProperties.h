#ifndef EditPropertiesH
#define EditPropertiesH

#include "action/GenericActionCommand.h"

#include "Cres.h"
#include "action/ActionUtils.h"
#include "context/Context.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/DataTableBindingProvider.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "util/DashboardProperties.h"
//#include "util/WindowLocation.h"


class EditProperties
    : public GenericActionCommand
{
private:
	const std::string & context;
    const std::string & propertiesGroup;
	std::list<std::string>  properties;
	std::list<std::string>  slaves;
    bool readOnly;
    bool dynamic;
    bool useDockableFrame;
    bool singleWindowMode;
    bool async;
   //	WindowLocationPtr location;  //todo
   //	DashboardPropertiesPtr dashboard; //todo
	DataTablePtr createSlavesTable(std::list<std::string>  slaves);

public:
    static const std::string CF_READ_ONLY;
	static const std::string CF_DYNAMIC;
	static const std::string CF_ASYNC;
	static const std::string CF_USE_DOCKABLE_FRAME;
	static const std::string CF_SINGLE_WINDOW_MODE;
	static const std::string CF_CONTEXT;
	static const std::string CF_SLAVES;
	static const std::string CF_LOCATION;
	static const std::string CF_DASHBOARD;
	static const std::string CF_PROPERTIES;
	static const std::string CF_PROPERTIES_GROUP;
    static const std::string RF_EDIT_PROPERTIES_RESULT;
	static const std::string RF_EDIT_PROPERTIES_CHANGED_PROPERTIES;
	static const std::string FIELD_PROPERTIES_PROPERTY;
	static const std::string CF_SLAVES_CONTEXT;
	static TableFormatPtr CFT_SLAVES;
	static TableFormatPtr FT_PROPERTIES;
	static TableFormatPtr CFT_EDIT_PROPERTIES;
	static TableFormatPtr RFT_EDIT_PROPERTIES;

	DataTablePtr constructParameters();

	static std::list<std::string>  getSlaves(GenericActionCommandPtr cmd, ContextPtr base, CallerControllerPtr caller);
	std::string  getContext();
    void setContext(const std::string & contextName);
	std::string getPropertiesGroup();
    void setPropertiesGroup(const std::string & propertiesGroup);
	std::list<std::string>   getProperties();
    void setProperties(std::list<std::string>   properties);
    std::list<std::string>   getSlaves();
	void setSlaves(std::list<std::string> slaves);
    bool isReadOnly();
    void setReadOnly(bool readOnly);
    bool isDynamic();
    void setDynamic(bool dynamic);
    bool isUseDockableFrame();
    void setUseDockableFrame(bool useDockableFrame);
    bool isSingleWindowMode();
    void setSingleWindowMode(bool singleWindowMode);
    bool isAsync();
    void setAsync(bool async);
	//WindowLocationPtr getLocation(); //todo
  //	void setLocation(WindowLocationPtr location); //todo
	//DashboardPropertiesPtr getDashboard(); //todo
	//void setDashboard(DashboardPropertiesPtr dashboard);//todo


	EditProperties();
	EditProperties(const std::string & title, const std::string & contextName, const std::string & propertiesGroup);
	EditProperties(const std::string & title, const std::string & contextName, std::list<std::string>   properties);
	EditProperties(const std::string & title, DataTablePtr parameters);

};

#endif
