// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/WindowLocation.java

#ifndef WindowLocationH
#define WindowLocationH

#include "AggreGateBean.h"
/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataTableBindingProvider.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/validator/ValidatorHelper.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
*/


class WindowLocation : public AggreGateBean
{
   /*

private:
    static const std::string FIELD_STATE_;
    static const std::string FIELD_SIDE_;
    static const std::string FIELD_INDEX_;
    static const std::string FIELD_WIDTH_;
    static const std::string FIELD_HEIGHT_;
    static const std::string FIELD_RESIZABLE_;
    static const std::string FIELD_CLOSABLE_;
    static const std::string FIELD_MOVABLE_;
    static const std::string FIELD_FLOATABLE_;
    static const std::string FIELD_MAXIMIZABLE_;
    static const std::string FIELD_AUTOHIDABLE_;
    static const std::string FIELD_KEY_;

public:
	static const int STATE_DOCKED=0;
	static const int STATE_FLOATING = 1;
	static const int STATE_SIDE_BAR = 2;
	static const int SIDE_TOP=0;
	static const int SIDE_LEFT = 1;
	static const int SIDE_BOTTOM = 2;
	static const int SIDE_RIGHT = 3;

private:
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_;
    int state;
    int side;
    int index;
    ::java::lang::Integer* width;
    ::java::lang::Integer* height;
    bool resizable;
    bool closable;
    bool movable;
    bool floatable;
    bool maximizable;
    bool autohidable;
    std::string* key;
protected:
    void ctor();
    void ctor(int state);
    void ctor(::java::awt::Dimension* size);
    void ctor(int side, int index);
    void ctor(int side, int index, ::java::awt::Dimension* size);
    void ctor(int column, ::java::awt::Dimension* size);
    void ctor(int state, int side, int index);
    void ctor(int state, int side, int index, ::java::awt::Dimension* size);
    void ctor(::com::tibbo::aggregate::common::datatable::DataRecord* data);

public:
    void applyDefaultSize(::java::awt::Dimension* defaultSize);
    int getState();
    void setState(int state);
    int getSide();
    void setSide(int side);
    int getIndex();
    void setIndex(int index);
    ::java::lang::Integer* getWidth();
    void setWidth(::java::lang::Integer* width);
    ::java::lang::Integer* getHeight();
    void setHeight(::java::lang::Integer* height);
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
    std::string* getKey();
    void setKey(std::string* key);
    std::string* toString();

    // Generated
    WindowLocation();
    WindowLocation(int state);
    WindowLocation(::java::awt::Dimension* size);
    WindowLocation(int side, int index);
    WindowLocation(int side, int index, ::java::awt::Dimension* size);
    WindowLocation(int column, ::java::awt::Dimension* size);
    WindowLocation(int state, int side, int index);
    WindowLocation(int state, int side, int index, ::java::awt::Dimension* size);
    WindowLocation(::com::tibbo::aggregate::common::datatable::DataRecord* data);
protected:
    WindowLocation(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_STATE();
    static const std::string& FIELD_SIDE();
    static const std::string& FIELD_INDEX();
    static const std::string& FIELD_WIDTH();
    static const std::string& FIELD_HEIGHT();
    static const std::string& FIELD_RESIZABLE();
    static const std::string& FIELD_CLOSABLE();
    static const std::string& FIELD_MOVABLE();
    static const std::string& FIELD_FLOATABLE();
    static const std::string& FIELD_MAXIMIZABLE();
    static const std::string& FIELD_AUTOHIDABLE();
    static const std::string& FIELD_KEY();
	static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT();
*/
};

#endif
