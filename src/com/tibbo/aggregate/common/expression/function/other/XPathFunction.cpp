// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/XPathFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/XPathFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/expression/function/other/XPathFunction_execute_1.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/io/Reader.h"
//#include <java/io/StringReader.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
#include <javax/xml/parsers/DocumentBuilder.h"
#include <javax/xml/parsers/DocumentBuilderFactory.h"
#include <javax/xml/xpath/XPath.h"
#include <javax/xml/xpath/XPathConstants.h"
#include <javax/xml/xpath/XPathExpression.h"
#include <javax/xml/xpath/XPathFactory.h"
#include <org/w3c/dom/Document.h"
#include <org/w3c/dom/NamedNodeMap.h"
#include <org/w3c/dom/Node.h"
#include <org/w3c/dom/NodeList.h"
#include <org/xml/sax/InputSource.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::other::XPathFunction::XPathFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::XPathFunction::XPathFunction() 
    : XPathFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& function::other::XPathFunction::FIELD_NODE_NAME()
{
    
    return FIELD_NODE_NAME_;
}
std::string function::other::XPathFunction::FIELD_NODE_NAME_;

std::string& function::other::XPathFunction::FIELD_NODE_CONTENT()
{
    
    return FIELD_NODE_CONTENT_;
}
std::string function::other::XPathFunction::FIELD_NODE_CONTENT_;

std::string& function::other::XPathFunction::FIELD_NODE_CHILDREN()
{
    
    return FIELD_NODE_CHILDREN_;
}
std::string function::other::XPathFunction::FIELD_NODE_CHILDREN_;

void function::other::XPathFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u"String xml, String query [, Boolean table]"_j, u"Object"_j);
}

void* function::other::XPathFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    try {
        auto toTable = parameters)->length >= 3 ? (util::Util::convertToBoolean((*parameters)[int(2)], true, false)))->booleanValue() : false;
        auto factory = ::javax::xml::parsers::DocumentBuilderFactory::newInstance();
        auto builder = factory)->newDocumentBuilder();
        builder)->setEntityResolver(new XPathFunction_execute_1(this));
        auto doc = builder)->parse(new ::org::xml::sax::InputSource(static_cast< std::ifstream* >(new ::java::io::StringReader((*parameters)[int(0)])->toString()))));
        auto xPathfactory = ::javax::xml::xpath::XPathFactory::newInstance();
        auto xpath = xPathfactory)->newXPath();
        auto expr = xpath)->compile((*parameters)[int(1)])->toString());
        if(toTable) {
            auto nodeList = java_cast< ::org::w3c::dom::NodeList* >(expr)->evaluate(doc), ::javax::xml::xpath::XPathConstants::NODESET()));
            auto nodes = nodesToList(nodeList);
            auto result = tableFromNodes(nodes);
            return result;
        } else {
            return expr)->evaluate(doc), ::javax::xml::xpath::XPathConstants::STRING()))->toString();
        }
    } catch (::java::lang::Exception* ex) {
        throw new EvaluationException(ex)->getMessage(), ex);
    }
}

DateDataTable* function::other::XPathFunction::tableFromNodes(std::list  nodes)
{
    auto format = formatFromNodes(nodes);
    auto result = new DataTable(format);
    for (auto _i = nodes)->iterator(); _i->hasNext(); ) {
        ::org::w3c::dom::Node* node = java_cast< ::org::w3c::dom::Node* >(_i->next());
        {
            if(node)->getNodeType() != ::org::w3c::dom::Node::ELEMENT_NODE) {
                continue;
            }
            auto rec = result)->addRecord();
            rec)->setValue(FIELD_NODE_NAME_, node)->getNodeName()));
            rec)->setValue(FIELD_NODE_CONTENT_, node)->getNodeValue()));
            rec)->setValue(FIELD_NODE_CHILDREN_, tableFromNodes(nodesToList(node)->getChildNodes()))));
            auto attributes = node)->getAttributes();
            if(attributes != 0) {
                for (auto i = int(0); i < attributes)->getLength(); i++) {
                    auto attribute = attributes)->item(i);
                    rec)->setValue(buildAttributeFieldName(attribute), attribute)->getNodeValue()));
                }
            }
        }
    }
    return result;
}

DateTableFormat* function::other::XPathFunction::formatFromNodes(std::list  nodes)
{
    auto format = new TableFormat();
    format)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_NODE_NAME_)
        ->append(u"><S><D="_j)
        ->append(Cres::get())->getString(u"name"_j))
        ->append(u">"_j)->toString())));
    format)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_NODE_CONTENT_)
        ->append(u"><S><F=N><D="_j)
        ->append(Cres::get())->getString(u"content"_j))
        ->append(u">"_j)->toString())));
    format)->addField(static_cast< FieldFormat* >(FieldFormat::create(std::stringBuilder().append(u"<"_j)->append(FIELD_NODE_CHILDREN_)
        ->append(u"><T><D="_j)
        ->append(Cres::get())->getString(u"children"_j))
        ->append(u">"_j)->toString())));
    for (auto _i = nodes)->iterator(); _i->hasNext(); ) {
        ::org::w3c::dom::Node* node = java_cast< ::org::w3c::dom::Node* >(_i->next());
        {
            auto attributes = node)->getAttributes();
            if(attributes != 0) {
                for (auto i = int(0); i < attributes)->getLength(); i++) {
                    auto attribute = attributes)->item(i);
                    auto attrField = FieldFormat::create(buildAttributeFieldName(attribute), FieldFormat::STRING_FIELD);
                    attrField)->setNullable(true);
                    if(!format)->hasField(attrField)->getName())) {
                        format)->addField(attrField);
                    }
                }
            }
        }
    }
    return format;
}

std::list  function::other::XPathFunction::nodesToList(::org::w3c::dom::NodeList* nodeList)
{
    std::list  nodes = new ::java::util::LinkedList();
    for (auto i = int(0); i < nodeList)->getLength(); i++) {
        nodes)->add(nodeList)->item(i)));
    }
    return nodes;
}

std::string function::other::XPathFunction::buildAttributeFieldName(::org::w3c::dom::Node* attribute)
{
    return ::com::tibbo::aggregate::common::util::Util::descriptionToName(attribute)->getNodeName());
}



java::lang::Class* function::other::XPathFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.XPathFunction", 66);
    return c;
}

void function::other::XPathFunction::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_NODE_NAME_ = u"nodeName"_j;
    FIELD_NODE_CONTENT_ = u"nodeContent"_j;
    FIELD_NODE_CHILDREN_ = u"nodeChildren"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* function::other::XPathFunction::getClass0()
{
    return class_();
}

