#ifndef WindowLocationH
#define WindowLocationH

#include "datatable/AggreGateBean.h"

#include "Cres.h"
#include "datatable/DataTableBindingProvider.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
//#include "datatable/validator/ValidatorHelper.h"
//#include "expression/DefaultReferenceResolver.h"


class WindowLocation : public AggreGateBean
{

private:

	int state;
	int side;
	int index;
	int  width;
	int  height;
	bool resizable;
	bool closable;
	bool movable;
	bool floatable;
	bool maximizable;
	bool autohidable;
	const std::string & key;
public:

	static const std::string FIELD_STATE;
	static const std::string FIELD_SIDE;
	static const std::string FIELD_INDEX;
	static const std::string FIELD_WIDTH;
	static const std::string FIELD_HEIGHT;
	static const std::string FIELD_RESIZABLE;
	static const std::string FIELD_CLOSABLE;
	static const std::string FIELD_MOVABLE;
	static const std::string FIELD_FLOATABLE;
	static const std::string FIELD_MAXIMIZABLE;
	static const std::string FIELD_AUTOHIDABLE;
	static const std::string FIELD_KEY;

	static TableFormatPtr FORMAT;

	static const int STATE_DOCKED=0;
	static const int STATE_FLOATING = 1;
	static const int STATE_SIDE_BAR = 2;
	static const int SIDE_TOP=0;
	static const int SIDE_LEFT = 1;
	static const int SIDE_BOTTOM = 2;
	static const int SIDE_RIGHT = 3;


   //	void applyDefaultSize(::java::awt::Dimension* defaultSize);
	int getState();
    void setState(int state);
    int getSide();
    void setSide(int side);
    int getIndex();
    void setIndex(int index);
    int  getWidth();
    void setWidth(int  width);
    int  getHeight();
    void setHeight(int  height);
    bool isResizable();
    void setResizable(bool resizable);
    bool isClosable();
    void setClosable(bool closable);
    bool isMovable();
    void setMovable(bool movable);
    bool isFloatable();
    void setFloatable(bool floatable);
    bool isMaximizable();
    void setMaximizable(bool maximizable);
    bool isAutohidable();
    void setAutohidable(bool autohidable);
    const std::string & getKey();
    void setKey(const std::string & key);
    std::string toString();

	WindowLocation();
    WindowLocation(int state);
   // WindowLocation(::java::awt::Dimension* size);
    WindowLocation(int side, int index);
  //  WindowLocation(int side, int index, ::java::awt::Dimension* size);
  //  WindowLocation(int column, ::java::awt::Dimension* size);
    WindowLocation(int state, int side, int index);
   //	WindowLocation(int state, int side, int index, ::java::awt::Dimension* size);
    WindowLocation(DataRecordPtr data);

};

#endif
