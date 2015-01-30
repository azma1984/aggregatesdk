#ifndef SelectEntitiesH
#define SelectEntitiesH

#include "action/GenericActionCommand.h"

#include "action/ActionUtils.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/FieldFormat.h"
//#include "datatable/TableFormat.h"

class SelectEntities : public GenericActionCommand
{
 private:
	std::list<std::string> contextTypes;
	const std::string rootContext;
	const std::string defaultContext;
	const std::string expandedContext;
    bool showChildren;
    bool allowMasks;
    bool showVars;
    bool showFuncs;
    bool showEvents;
    bool showFields;
    bool singleSelection;

 public:
    static const std::string CF_TYPES;
	static const std::string CF_ROOT;
	static const std::string CF_DEFAULT;
	static const std::string CF_EXPANDED;
	static const std::string CF_SHOW_CHILDREN;
	static const std::string CF_ALLOW_MASKS;
	static const std::string CF_SHOW_VARS;
	static const std::string CF_SHOW_FUNCS;
	static const std::string CF_SHOW_EVENTS;
	static const std::string CF_SHOW_FIELDS;
	static const std::string CF_SINGLE_SELECTION;
	static const std::string CF_TYPES_TYPE;
	static const std::string RF_REFERENCE;
	static TableFormatPtr CFT_SELECT_ENTITIES;
	static TableFormatPtr CFT_SELECT_ENTITIES_TYPES;
	static TableFormatPtr RFT_SELECT_ENTITIES;

	DataTablePtr constructParameters();

	std::list<std::string> getContextTypes();
	void setContextTypes(std::list<std::string> contextTypes);
    const std::string & getRootContext();
    void setRootContext(const std::string & rootContext);
    const std::string & getDefaultContext();
    void setDefaultContext(const std::string & defaultContext);
    const std::string & getExpandedContext();
    void setExpandedContext(const std::string & expandedContext);
    bool isShowChildren();
    void setShowChildren(bool showChildren);
    bool isAllowMasks();
    void setAllowMasks(bool allowMasks);
    bool isShowVars();
    void setShowVars(bool showVars);
    bool isShowFuncs();
    void setShowFuncs(bool showFuncs);
    bool isShowEvents();
    void setShowEvents(bool showEvents);
    bool isShowFields();
    void setShowFields(bool showFields);
    bool isSingleSelection();
    void setSingleSelection(bool singleSelection);

    SelectEntities();
    SelectEntities(const std::string & title, std::list<std::string> contextTypes, const std::string & rootContext, const std::string & defaultContext, const std::string & expandedContext, bool showChildren, bool allowMasks, bool showVars, bool showFuncs, bool showEvents, bool showFields, bool singleSelection);

};
#endif  //SelectEntitiesH
