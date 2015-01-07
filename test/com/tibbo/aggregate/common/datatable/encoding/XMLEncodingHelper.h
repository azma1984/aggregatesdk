// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/encoding/XMLEncodingHelper.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/regex/fwd-aggregate_sdk_5.11.00.h"
#include <javax/xml/namespace_/fwd-aggregate_sdk_5.11.00.h"
#include <org/w3c/dom/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::encoding::XMLEncodingHelper
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::std::string ATTRIBUTE_ADVANCED_;
    static ::std::string ATTRIBUTE_DESCRIPTION_;
    static ::std::string ATTRIBUTE_EDITOR_;
    static ::std::string ATTRIBUTE_EDITOR_OPTIONS_;
    static ::std::string ATTRIBUTE_EXTENDABLE_SELECTION_VALUES_;
    static ::std::string ATTRIBUTE_HIDDEN_;
    static ::std::string ATTRIBUTE_ICON_;
    static ::std::string ATTRIBUTE_ID_;
    static ::std::string ATTRIBUTE_INLINE_;
    static ::std::string ATTRIBUTE_KEY_FIELD_;
    static ::std::string ATTRIBUTE_MAXIMUM_RECORDS_;
    static ::std::string ATTRIBUTE_MINIMUM_RECORDS_;
    static ::std::string ATTRIBUTE_NAME_;
    static ::std::string ATTRIBUTE_NOT_REPLICATED_;
    static ::std::string ATTRIBUTE_NULLABLE_;
    static ::std::string ATTRIBUTE_OPTIONAL_;
    static ::std::string ATTRIBUTE_READONLY_;
    static ::std::string ATTRIBUTE_REORDERABLE_;
    static ::std::string ATTRIBUTE_TYPE_;
    static ::std::string ATTRIBUTE_UNRESIZABLE_;
    static ::std::string CONTENT_TYPE_;
    static ::std::string CONTENT_TYPE_BASE64_;
    static ::std::string ELEMENT_BINDING_;
    static ::std::string ELEMENT_BINDINGS_;
    static ::std::string ELEMENT_DATA_;
    static ::std::string ELEMENT_DATA_TABLE_;
    static ::std::string ELEMENT_DEFAULT_VALUE_;
    static ::std::string ELEMENT_EDITOR_OPTIONS_;
    static ::std::string ELEMENT_EXPRESSION_;
    static ::std::string ELEMENT_FIELD_;
    static ::std::string ELEMENT_FIELDS_;
    static ::std::string ELEMENT_FIELD_VALUE_;
    static ::std::string ELEMENT_FORMAT_;
    static ::std::string ELEMENT_GROUP_;
    static ::std::string ELEMENT_HELP_;
    static ::std::string ELEMENT_NULL_VALUE_;
    static ::std::string ELEMENT_OPTION_;
    static ::std::string ELEMENT_PREVIEW_;
    static ::std::string ELEMENT_RECORD_;
    static ::std::string ELEMENT_RECORDS_;
    static ::std::string ELEMENT_REFERENCE_;
    static ::std::string ELEMENT_SELECTION_VALUES_;
    static ::std::string ELEMENT_VALIDATORS_;
    static ClassicEncodingSettings* ENCODE_VALIDATORS_SETTINGS_;
    static ::java::util::regex::Pattern* RESOURCE_PATTERN_;

protected:
    void ctor();
    /*static ::org::w3c::dom::Element* createAndAppendChild(::org::w3c::dom::Element* parentElement, ::std::string elementName); (private) */

public:
    static ::org::w3c::dom::Node* createDataTableNode(::com::tibbo::aggregate::common::datatable::DataTable* dt, ::org::w3c::dom::Document* doc, ::com::tibbo::aggregate::common::context::CallerController* cc, ::com::tibbo::aggregate::common::context::ContextManager* cm, XMLEncodingSettings* settings);
    static ::org::w3c::dom::Document* createNewDocument();
    /*static ::java::lang::Object* decodeFieldValueFromXML(::com::tibbo::aggregate::common::datatable::FieldFormat* ff, ::org::w3c::dom::Node* valueNode, ::java::util::ResourceBundle* bundle); (private) */
    static ::com::tibbo::aggregate::common::datatable::DataTable* decodeFromDocument(::org::w3c::dom::Document* doc, ::com::tibbo::aggregate::common::datatable::TableFormat* givenFormat);
    static ::com::tibbo::aggregate::common::datatable::DataTable* decodeFromXML(::std::string from, ::std::string encoding, ::com::tibbo::aggregate::common::datatable::TableFormat* givenFormat);
    static ::com::tibbo::aggregate::common::datatable::DataTable* decodeFromXML(std::iostream* from, ::com::tibbo::aggregate::common::datatable::TableFormat* givenFormat);
    /*static void encodeFieldValueToXML(::com::tibbo::aggregate::common::datatable::FieldFormat* ff, ::java::lang::Object* value, ::org::w3c::dom::Document* doc, ::org::w3c::dom::Element* targetNode, ::com::tibbo::aggregate::common::context::CallerController* cc, ::com::tibbo::aggregate::common::context::ContextManager* cm, XMLEncodingSettings* settings); (private) */
    static ::org::w3c::dom::Document* encodeToDocument(::com::tibbo::aggregate::common::datatable::DataTable* dt, ::com::tibbo::aggregate::common::context::CallerController* cc, ::com::tibbo::aggregate::common::context::ContextManager* cm, XMLEncodingSettings* settings);
    static void encodeToXML(::com::tibbo::aggregate::common::datatable::DataTable* dt, ::com::tibbo::aggregate::common::context::CallerController* cc, ::com::tibbo::aggregate::common::context::ContextManager* cm, XMLEncodingSettings* settings, ::java::io::Writer* writer);
    static ::java::lang::Object* evaluateXPathExpression(::org::w3c::dom::Document* doc, ::std::string expression, ::javax::xml::namespace_::QName* resultType);
    /*static ::int8_tArray* getBinaryElementContentWithUnsafetyText(::org::w3c::dom::Node* el); (private) */
    static ::std::string getElementContentWithUnsafetyText(::org::w3c::dom::Node* el, ::java::util::ResourceBundle* bundle, bool transferEncode);
    /*static ::org::w3c::dom::Node* getNamedNodeChild(::org::w3c::dom::Node* node, ::std::string child); (private) */
    /*static ::std::string getOwnTextContent(::org::w3c::dom::Node* node); (private) */
    static ::std::string parseBundles(::std::string value, ::java::util::ResourceBundle* bundle, bool transferEncode);
    static ::com::tibbo::aggregate::common::datatable::DataTable* readDataTableFromNode(::org::w3c::dom::Node* dtNode, XMLEncodingSettings* settings);
    /*static ::com::tibbo::aggregate::common::datatable::FieldFormat* readFieldFormatFromNode(::org::w3c::dom::Node* fn); (private) */
    /*static void setElementContentWithUnsafetyText(::org::w3c::dom::Element* el, ::int8_tArray* content); (private) */
    static void setElementContentWithUnsafetyText(::org::w3c::dom::Element* el, ::std::string content);

    // Generated
    XMLEncodingHelper();
protected:
    XMLEncodingHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::std::string& ATTRIBUTE_ADVANCED();
    static ::std::string& ATTRIBUTE_DESCRIPTION();
    static ::std::string& ATTRIBUTE_EDITOR();
    static ::std::string& ATTRIBUTE_EDITOR_OPTIONS();
    static ::std::string& ATTRIBUTE_EXTENDABLE_SELECTION_VALUES();
    static ::std::string& ATTRIBUTE_HIDDEN();
    static ::std::string& ATTRIBUTE_ICON();
    static ::std::string& ATTRIBUTE_ID();
    static ::std::string& ATTRIBUTE_INLINE();
    static ::std::string& ATTRIBUTE_KEY_FIELD();
    static ::std::string& ATTRIBUTE_MAXIMUM_RECORDS();
    static ::std::string& ATTRIBUTE_MINIMUM_RECORDS();
    static ::std::string& ATTRIBUTE_NAME();
    static ::std::string& ATTRIBUTE_NOT_REPLICATED();
    static ::std::string& ATTRIBUTE_NULLABLE();
    static ::std::string& ATTRIBUTE_OPTIONAL();
    static ::std::string& ATTRIBUTE_READONLY();
    static ::std::string& ATTRIBUTE_REORDERABLE();
    static ::std::string& ATTRIBUTE_TYPE();
    static ::std::string& ATTRIBUTE_UNRESIZABLE();
    static ::std::string& CONTENT_TYPE();
    static ::std::string& CONTENT_TYPE_BASE64();
    static ::std::string& ELEMENT_BINDING();
    static ::std::string& ELEMENT_BINDINGS();
    static ::std::string& ELEMENT_DATA();
    static ::std::string& ELEMENT_DATA_TABLE();
    static ::std::string& ELEMENT_DEFAULT_VALUE();
    static ::std::string& ELEMENT_EDITOR_OPTIONS();
    static ::std::string& ELEMENT_EXPRESSION();
    static ::std::string& ELEMENT_FIELD();
    static ::std::string& ELEMENT_FIELDS();
    static ::std::string& ELEMENT_FIELD_VALUE();
    static ::std::string& ELEMENT_FORMAT();
    static ::std::string& ELEMENT_GROUP();
    static ::std::string& ELEMENT_HELP();
    static ::std::string& ELEMENT_NULL_VALUE();
    static ::std::string& ELEMENT_OPTION();
    static ::std::string& ELEMENT_PREVIEW();
    static ::std::string& ELEMENT_RECORD();
    static ::std::string& ELEMENT_RECORDS();
    static ::std::string& ELEMENT_REFERENCE();
    static ::std::string& ELEMENT_SELECTION_VALUES();
    static ::std::string& ELEMENT_VALIDATORS();

private:
    static ClassicEncodingSettings*& ENCODE_VALIDATORS_SETTINGS();

public:
    static ::java::util::regex::Pattern*& RESOURCE_PATTERN();

private:
    virtual ::java::lang::Class* getClass0();
};
