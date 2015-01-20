// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/util/WindowLocation.java
#include "WindowLocation.h"

 /*
com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation() 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int state) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(state);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(::java::awt::Dimension* size) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(size);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int side, int index) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(side,index);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int side, int index, ::java::awt::Dimension* size) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(side,index,size);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int column, ::java::awt::Dimension* size) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(column,size);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int state, int side, int index) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(state,side,index);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(int state, int side, int index, ::java::awt::Dimension* size) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(state,side,index,size);
}

com::tibbo::aggregate::common::util::WindowLocation::WindowLocation(DataRecord* data) 
    : WindowLocation(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_STATE()
{
    
    return FIELD_STATE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_STATE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_SIDE()
{
    
    return FIELD_SIDE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_SIDE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_INDEX()
{
    
    return FIELD_INDEX_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_INDEX_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_WIDTH()
{
    
    return FIELD_WIDTH_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_WIDTH_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_HEIGHT()
{
    
    return FIELD_HEIGHT_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_HEIGHT_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_RESIZABLE()
{
    
    return FIELD_RESIZABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_RESIZABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_CLOSABLE()
{
    
    return FIELD_CLOSABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_CLOSABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_MOVABLE()
{
    
    return FIELD_MOVABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_MOVABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_FLOATABLE()
{
    
    return FIELD_FLOATABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_FLOATABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_MAXIMIZABLE()
{
    
    return FIELD_MAXIMIZABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_MAXIMIZABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_AUTOHIDABLE()
{
    
    return FIELD_AUTOHIDABLE_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_AUTOHIDABLE_;

std::string& com::tibbo::aggregate::common::util::WindowLocation::FIELD_KEY()
{
    
    return FIELD_KEY_;
}
std::string com::tibbo::aggregate::common::util::WindowLocation::FIELD_KEY_;

const int com::tibbo::aggregate::common::util::WindowLocation::STATE_DOCKED;

const int com::tibbo::aggregate::common::util::WindowLocation::STATE_FLOATING;

const int com::tibbo::aggregate::common::util::WindowLocation::STATE_SIDE_BAR;

const int com::tibbo::aggregate::common::util::WindowLocation::SIDE_TOP;

const int com::tibbo::aggregate::common::util::WindowLocation::SIDE_LEFT;

const int com::tibbo::aggregate::common::util::WindowLocation::SIDE_BOTTOM;

const int com::tibbo::aggregate::common::util::WindowLocation::SIDE_RIGHT;

DateTableFormat*& com::tibbo::aggregate::common::util::WindowLocation::FORMAT()
{
    
    return FORMAT_;
}
DateTableFormat* com::tibbo::aggregate::common::util::WindowLocation::FORMAT_;

void com::tibbo::aggregate::common::util::WindowLocation::ctor()
{
    super::ctor(FORMAT_);
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int state)
{
    ctor();
    this->state = state;
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(::java::awt::Dimension* size)
{
    ctor();
    this->state = STATE_FLOATING;
    this->width = size)->width);
    this->height = size)->height);
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int side, int index)
{
    ctor();
    this->state = STATE_DOCKED;
    this->side = side;
    this->index = index;
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int side, int index, ::java::awt::Dimension* size)
{
    ctor(STATE_DOCKED, side, index, size);
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int column, ::java::awt::Dimension* size)
{
    ctor(STATE_DOCKED, SIDE_TOP, column, size);
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int state, int side, int index)
{
    ctor();
    this->state = state;
    this->side = side;
    this->index = index;
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(int state, int side, int index, ::java::awt::Dimension* size)
{
    ctor();
    this->state = state;
    this->side = side;
    this->index = index;
    if(size != 0) {
        this->width = size)->width);
        this->height = size)->height);
    }
}

void com::tibbo::aggregate::common::util::WindowLocation::ctor(DataRecord* data)
{
    super::ctor(FORMAT_, data);
}

void com::tibbo::aggregate::common::util::WindowLocation::applyDefaultSize(::java::awt::Dimension* defaultSize)
{
    if(getWidth() == 0 || (getWidth()))->intValue() == 0) {
        setWidth(defaultSize)->width));
    }
    if(getHeight() == 0 || (getHeight()))->intValue() == 0) {
        setHeight(defaultSize)->height));
    }
}

int com::tibbo::aggregate::common::util::WindowLocation::getState()
{
    return state;
}

void com::tibbo::aggregate::common::util::WindowLocation::setState(int state)
{
    this->state = state;
}

int com::tibbo::aggregate::common::util::WindowLocation::getSide()
{
    return side;
}

void com::tibbo::aggregate::common::util::WindowLocation::setSide(int side)
{
    this->side = side;
}

int com::tibbo::aggregate::common::util::WindowLocation::getIndex()
{
    return index;
}

void com::tibbo::aggregate::common::util::WindowLocation::setIndex(int index)
{
    this->index = index;
}

java::lang::Integer* com::tibbo::aggregate::common::util::WindowLocation::getWidth()
{
    return width;
}

void com::tibbo::aggregate::common::util::WindowLocation::setWidth(int  width)
{
    this->width = width;
}

java::lang::Integer* com::tibbo::aggregate::common::util::WindowLocation::getHeight()
{
    return height;
}

void com::tibbo::aggregate::common::util::WindowLocation::setHeight(int  height)
{
    this->height = height;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isResizable()
{
    return resizable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setResizable(bool resizable)
{
    this->resizable = resizable;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isClosable()
{
    return closable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setClosable(bool closable)
{
    this->closable = closable;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isMovable()
{
    return movable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setMovable(bool movable)
{
    this->movable = movable;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isFloatable()
{
    return floatable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setFloatable(bool floatable)
{
    this->floatable = floatable;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isMaximizable()
{
    return maximizable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setMaximizable(bool maximizable)
{
    this->maximizable = maximizable;
}

bool com::tibbo::aggregate::common::util::WindowLocation::isAutohidable()
{
    return autohidable;
}

void com::tibbo::aggregate::common::util::WindowLocation::setAutohidable(bool autohidable)
{
    this->autohidable = autohidable;
}

std::string com::tibbo::aggregate::common::util::WindowLocation::getKey()
{
    return key;
}

void com::tibbo::aggregate::common::util::WindowLocation::setKey(const std::string & key)
{
    this->key = key;
}

std::string com::tibbo::aggregate::common::util::WindowLocation::toString()
{
    return std::stringBuilder().append(u"Window Location [state="_j)->append(state)
        ->append(u", side="_j)
        ->append(side)
        ->append(u", index="_j)
        ->append(index)
        ->append(u", width="_j)
        ->append(width))
        ->append(u", height="_j)
        ->append(height))
        ->append(u"]"_j)->toString();
}



java::lang::Class* com::tibbo::aggregate::common::util::WindowLocation::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.util.WindowLocation", 46);
    return c;
}

void com::tibbo::aggregate::common::util::WindowLocation::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_STATE_ = u"state"_j;
    FIELD_SIDE_ = u"side"_j;
    FIELD_INDEX_ = u"index"_j;
    FIELD_WIDTH_ = u"width"_j;
    FIELD_HEIGHT_ = u"height"_j;
    FIELD_RESIZABLE_ = u"resizable"_j;
    FIELD_CLOSABLE_ = u"closable"_j;
    FIELD_MOVABLE_ = u"movable"_j;
    FIELD_FLOATABLE_ = u"floatable"_j;
    FIELD_MAXIMIZABLE_ = u"maximizable"_j;
    FIELD_AUTOHIDABLE_ = u"autohidable"_j;
    FIELD_KEY_ = u"key"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ = new TableFormat(int(1), int(1));
        {
            auto ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_STATE_)
                ->append(u"><I><A="_j)
                ->append(STATE_DOCKED)
                ->append(u"><D="_j)
                ->append(Cres::get())->getString(u"state"_j))
                ->append(u">"_j)->toString());
            ff)->addSelectionValue(STATE_DOCKED), Cres::get())->getString(u"clStateDocked"_j));
            ff)->addSelectionValue(STATE_FLOATING), Cres::get())->getString(u"clStateFloating"_j));
            ff)->addSelectionValue(STATE_SIDE_BAR), Cres::get())->getString(u"clStateSideBar"_j));
            FORMAT_)->addField(ff);
            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_SIDE_)
                ->append(u"><I><A="_j)
                ->append(SIDE_TOP)
                ->append(u"><D="_j)
                ->append(Cres::get())->getString(u"side"_j))
                ->append(u">"_j)->toString());
            ff)->addSelectionValue(SIDE_TOP), Cres::get())->getString(u"clSideTop"_j));
            ff)->addSelectionValue(SIDE_LEFT), Cres::get())->getString(u"clSideLeft"_j));
            ff)->addSelectionValue(SIDE_BOTTOM), Cres::get())->getString(u"clSideBottom"_j));
            ff)->addSelectionValue(SIDE_RIGHT), Cres::get())->getString(u"clSideRight"_j));
            FORMAT_)->addField(ff);
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_INDEX_)
                ->append(u"><I><D="_j)
                ->append(Cres::get())->getString(u"index"_j))
                ->append(u">"_j)->toString())));
            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_WIDTH_)
                ->append(u"><I><F=N><D="_j)
                ->append(Cres::get())->getString(u"width"_j))
                ->append(u">"_j)->toString());
            ff)->addValidator(validator::ValidatorHelper::NON_ZERO_LENGTH_VALIDATOR());
            FORMAT_)->addField(ff);
            ff = FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_HEIGHT_)
                ->append(u"><I><F=N><D="_j)
                ->append(Cres::get())->getString(u"height"_j))
                ->append(u">"_j)->toString());
            ff)->addValidator(validator::ValidatorHelper::NON_ZERO_LENGTH_VALIDATOR());
            FORMAT_)->addField(ff);
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_RESIZABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowResizable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_CLOSABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowClosable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_MOVABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowMovable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_FLOATABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowFloatable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_MAXIMIZABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowMaximizable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_AUTOHIDABLE_)
                ->append(u"><B><A=1><D="_j)
                ->append(Cres::get())->getString(u"clWindowAutohidable"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_KEY_)
                ->append(u"><S><F=A><D="_j)
                ->append(Cres::get())->getString(u"key"_j))
                ->append(u">"_j)->toString())));
            FORMAT_)->addBinding(std::stringBuilder().append(FIELD_SIDE_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString(), std::stringBuilder().append(u"{"_j)->append(FIELD_STATE_)
                ->append(u"} != "_j)
                ->append(STATE_FLOATING)->toString());
            FORMAT_)->addBinding(std::stringBuilder().append(FIELD_FLOATABLE_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString(), std::stringBuilder().append(u"{"_j)->append(FIELD_MOVABLE_)
                ->append(u"} && {"_j)
                ->append(FIELD_STATE_)
                ->append(u"} != "_j)
                ->append(STATE_FLOATING)->toString());
            FORMAT_)->addBinding(std::stringBuilder().append(FIELD_MAXIMIZABLE_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString(), std::stringBuilder().append(u"{"_j)->append(FIELD_MOVABLE_)
                ->append(u"}"_j)->toString());
            FORMAT_)->addBinding(std::stringBuilder().append(FIELD_AUTOHIDABLE_)->append(u"#"_j)
                ->append(DataTableBindingProvider::PROPERTY_ENABLED())->toString(), std::stringBuilder().append(u"{"_j)->append(FIELD_MOVABLE_)
                ->append(u"}"_j)->toString());
            auto state = std::stringBuilder().append(u"{"_j)->append(FIELD_STATE_)
                ->append(u"#"_j)
                ->append(DefaultReferenceResolver::SELECTION_VALUE_DESCRIPTION())
                ->append(u"}"_j)->toString();
            auto side = std::stringBuilder().append(u"({"_j)->append(FIELD_STATE_)
                ->append(u"} != "_j)
                ->append(STATE_FLOATING)
                ->append(u" ? (', ' + {"_j)
                ->append(FIELD_SIDE_)
                ->append(u"#"_j)
                ->append(DefaultReferenceResolver::SELECTION_VALUE_DESCRIPTION())
                ->append(u"}) : '')"_j)->toString();
            auto index = std::stringBuilder().append(u"({"_j)->append(FIELD_STATE_)
                ->append(u"} != "_j)
                ->append(STATE_FLOATING)
                ->append(u" ? (' (' + {"_j)
                ->append(FIELD_INDEX_)
                ->append(u"} + ')') : '')"_j)->toString();
            FORMAT_)->setNamingExpression(std::stringBuilder().append(state)->append(u"+"_j)
                ->append(side)
                ->append(u"+"_j)
                ->append(index)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}



*/
