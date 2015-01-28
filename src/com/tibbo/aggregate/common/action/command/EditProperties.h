#ifndef EditPropertiesH
#define EditPropertiesH

#include "action/GenericActionCommand.h"



class EditProperties
    : public GenericActionCommand
{
private:
    static const std::string CF_READ_ONLY_;
    static const std::string CF_DYNAMIC_;
    static const std::string CF_ASYNC_;
    static const std::string CF_USE_DOCKABLE_FRAME_;
    static const std::string CF_SINGLE_WINDOW_MODE_;
    static const std::string CF_CONTEXT_;
    static const std::string CF_SLAVES_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_PROPERTIES_;
    static const std::string CF_PROPERTIES_GROUP_;
    static const std::string RF_EDIT_PROPERTIES_RESULT_;
    static const std::string RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_;
    static const std::string FIELD_PROPERTIES_PROPERTY_;
    static const std::string CF_SLAVES_CONTEXT_;
    static TableFormatPtr CFT_SLAVES_;
    static TableFormatPtr FT_PROPERTIES_;
    static TableFormatPtr CFT_EDIT_PROPERTIES_;
    static TableFormatPtr RFT_EDIT_PROPERTIES_;
    const std::string & context;
    const std::string & propertiesGroup;
    std::list  properties;
    std::list  slaves;
    bool readOnly;
    bool dynamic;
    bool useDockableFrame;
    bool singleWindowMode;
    bool async;
	WindowLocationPtr location;
	DashboardPropertiesPtr dashboard;
protected:
    void ctor();
    void ctor(const std::string & title, const std::string & contextName, const std::string & propertiesGroup);
    void ctor(const std::string & title, const std::string & contextName, std::list  properties);
    void ctor(const std::string & title, DataTablePtr parameters);

public:
    DataTablePtr constructParameters();

private:
    DataTablePtr createSlavesTable(std::list  slaves);

public:
    static std::list  getSlaves(GenericActionCommandPtr cmd, ContextPtr base, CallerControllerPtr caller);
    const std::string & getContext();
    void setContext(const std::string & contextName);
    const std::string & getPropertiesGroup();
    void setPropertiesGroup(const std::string & propertiesGroup);
    std::list  getProperties();
    void setProperties(std::list  properties);
    std::list  getSlaves();
    void setSlaves(std::list  slaves);
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
	WindowLocationPtr getLocation();
	void setLocation(WindowLocationPtr location);
	DashboardPropertiesPtr getDashboard();
	void setDashboard(DashboardPropertiesPtr dashboard);

    EditProperties();
    EditProperties(const std::string & title, const std::string & contextName, const std::string & propertiesGroup);
    EditProperties(const std::string & title, const std::string & contextName, std::list  properties);
    EditProperties(const std::string & title, DataTablePtr parameters);

    static const std::string& CF_READ_ONLY();
    static const std::string& CF_DYNAMIC();
    static const std::string& CF_ASYNC();
    static const std::string& CF_USE_DOCKABLE_FRAME();
    static const std::string& CF_SINGLE_WINDOW_MODE();
    static const std::string& CF_CONTEXT();
    static const std::string& CF_SLAVES();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_PROPERTIES();
    static const std::string& CF_PROPERTIES_GROUP();
    static const std::string& RF_EDIT_PROPERTIES_RESULT();
    static const std::string& RF_EDIT_PROPERTIES_CHANGED_PROPERTIES();
    static const std::string& FIELD_PROPERTIES_PROPERTY();
    static const std::string& CF_SLAVES_CONTEXT();
    static TableFormatPtr& CFT_SLAVES();
    static TableFormatPtr& FT_PROPERTIES();
    static TableFormatPtr& CFT_EDIT_PROPERTIES();
	static TableFormatPtr& RFT_EDIT_PROPERTIES();
};

#endif
