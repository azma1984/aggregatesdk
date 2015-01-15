// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Expression.java
#include <Expression.h>

/*
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"


Expression::Expression(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Expression::Expression(Reference* reference)
    : Expression(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference);
}

Expression::Expression(const std::string & text)
    : Expression(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

std::string& Expression::REFERENCE_START()
{
    
    return REFERENCE_START_;
}
std::string Expression::REFERENCE_START_;

std::string& Expression::REFERENCE_END()
{
    
    return REFERENCE_END_;
}
std::string Expression::REFERENCE_END_;

void Expression::ctor(Reference* reference)
{
    ctor(std::stringBuilder().append(REFERENCE_START_)->append(reference)->getImage())
        ->append(REFERENCE_END_)->toString());
}

void Expression::ctor(const std::string & text)
{
    super::ctor();
    if(text == 0) {
        std::exception("Pointer = NULL!");
    }
    this->text = text;
}

std::string Expression::getText()
{
    return text;
}

ASTStart* Expression::getRootNode()
{
    return rootNode;
}

void Expression::setRootNode(::ASTStart* rootNode)
{
    this->rootNode = rootNode;
}

std::string Expression::toString()
{
    return text;
}

int Expression::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + ((text == 0) ? int(0) : text)->hashCode());
    return result;
}

bool Expression::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< Expression* >(obj);
    if(text == 0) {
        if(other)->text != 0) {
            return false;
        }
    } else if(!text)->equals(other)->text))) {
        return false;
    }
    return true;
}

Expression* Expression::clone()
{
    try {
        return java_cast< Expression* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}



java::lang::Class* Expression::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.Expression", 48);
    return c;
}

void Expression::clinit()
{
struct string_init_ {
    string_init_() {
    REFERENCE_START_ = u"{"_j;
    REFERENCE_END_ = u"}"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* Expression::getClass0()
{
    return class_();
}
	 */
