// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/ResourceManager.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/resource/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/net/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <javax/swing/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::resource::ResourceManager
    
{

public:
    typedef void super;

private:
    static const std::string CERTIFICATE_FILE_NAME_;
    static const std::string ICON_FILE_EXTENSION_;
    static const std::string CUSTOMIZATION_RESOURCES_FILENAME_;
    static const std::string CLIENT_CUSTOMIZATION_RESOURCES_FILENAME_;
    static const std::string REPLACEMENTS_RESOURCE_NAME_;
    static ::java::lang::Class* RESOURCE_CLASS_;
    static std::map RESOURCES_;
    static std::map REPLACEMENTS_;
    static std::map ICON_CACHE_;
    static std::list  BUNDLES_;
    static ::java::util::Locale* LOCALE_;

public:
    static void initialize(::java::lang::Class* resClass);
    static void initialize(::java::net::URI* customizationUrl, ::java::lang::Class* resClass);

private:
    static void processCustomizationFile(::java::net::URI* customizationUrl) /* throws(IOException, CertificateException) */;

public:
    static ::javax::swing::ImageIcon* getImageIcon(const std::string & id);

private:
    static ::javax::swing::ImageIcon* getImageIcon(const std::string & id, const std::string & extension);

public:
    static ::int8_tArray* getResource(const std::string & name);
    static void process(WrappingResourceBundle* bundle);
    static void add(WrappingResourceBundle* bundle);
    static ::java::util::Locale* getLocale();

    // Generated
    ResourceManager();
protected:
    ResourceManager(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& CERTIFICATE_FILE_NAME();

public:
    static const std::string& ICON_FILE_EXTENSION();
    static const std::string& CUSTOMIZATION_RESOURCES_FILENAME();
    static const std::string& CLIENT_CUSTOMIZATION_RESOURCES_FILENAME();

private:
    static const std::string& REPLACEMENTS_RESOURCE_NAME();
    static ::java::lang::Class*& RESOURCE_CLASS();
    static std::map& RESOURCES();
    static std::map& REPLACEMENTS();
    static std::map& ICON_CACHE();
    static std::list & BUNDLES();
    static ::java::util::Locale*& LOCALE();
    ::java::lang::Class* getClass0();
};
