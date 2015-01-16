// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/resource/ResourceManager.java
#include "resource/ResourceManager.h"

/*
ResourceManager::ResourceManager(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

ResourceManager::ResourceManager()
    : ResourceManager(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& ResourceManager::CERTIFICATE_FILE_NAME()
{
    
    return CERTIFICATE_FILE_NAME_;
}
std::string ResourceManager::CERTIFICATE_FILE_NAME_;

std::string& ResourceManager::ICON_FILE_EXTENSION()
{
    
    return ICON_FILE_EXTENSION_;
}
std::string ResourceManager::ICON_FILE_EXTENSION_;

std::string& ResourceManager::CUSTOMIZATION_RESOURCES_FILENAME()
{
    
    return CUSTOMIZATION_RESOURCES_FILENAME_;
}
std::string ResourceManager::CUSTOMIZATION_RESOURCES_FILENAME_;

std::string& ResourceManager::CLIENT_CUSTOMIZATION_RESOURCES_FILENAME()
{
    
    return CLIENT_CUSTOMIZATION_RESOURCES_FILENAME_;
}
std::string ResourceManager::CLIENT_CUSTOMIZATION_RESOURCES_FILENAME_;

std::string& ResourceManager::REPLACEMENTS_RESOURCE_NAME()
{
    
    return REPLACEMENTS_RESOURCE_NAME_;
}
std::string ResourceManager::REPLACEMENTS_RESOURCE_NAME_;

java::lang::Class*& ResourceManager::RESOURCE_CLASS()
{
    
    return RESOURCE_CLASS_;
}
java::lang::Class* ResourceManager::RESOURCE_CLASS_;

java::util::Map*& ResourceManager::RESOURCES()
{
    
    return RESOURCES_;
}
java::util::Map* ResourceManager::RESOURCES_;

java::util::Map*& ResourceManager::REPLACEMENTS()
{
    
    return REPLACEMENTS_;
}
java::util::Map* ResourceManager::REPLACEMENTS_;

java::util::Map*& ResourceManager::ICON_CACHE()
{
    
    return ICON_CACHE_;
}
java::util::Map* ResourceManager::ICON_CACHE_;

java::util::List*& ResourceManager::BUNDLES()
{
    
    return BUNDLES_;
}
java::util::List* ResourceManager::BUNDLES_;

java::util::Locale*& ResourceManager::LOCALE()
{
    
    return LOCALE_;
}
java::util::Locale* ResourceManager::LOCALE_;

void ResourceManager::initialize(::java::lang::Class* resClass)
{
    
    RESOURCE_CLASS_ = resClass;
    RESOURCES_ = new ::java::util::Hashtable();
}

void ResourceManager::initialize(::java::net::URI* customizationUrl, ::java::lang::Class* resClass)
{
    
    initialize(resClass);
    Log::CORE())->debug(std::stringBuilder().append(u"Starting resource manager, customization file "_j)->append(customizationUrl))->toString());
    try {
        processCustomizationFile(customizationUrl);
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Error processing customization file '"_j)->append(customizationUrl))
            ->append(u"': "_j)->toString(), ex);
    }
    for (auto _i = BUNDLES_)->iterator(); _i->hasNext(); ) {
        WrappingResourceBundle* bundle = java_cast< WrappingResourceBundle* >(_i->next());
        {
            process(bundle);
        }
    }
}

void ResourceManager::processCustomizationFile(::java::net::URI* customizationUrl) 
{
    
    try {
        if(customizationUrl == 0) {
            return;
        }
        auto is = customizationUrl)->toURL())->openStream();
        auto bis = new ::java::io::BufferedInputStream(is);
        auto jis = new ::java::util::jar::JarInputStream(bis, true);
        ::java::util::jar::JarEntry* je;
        auto certificateFactory = ::java::security::cert::CertificateFactory::getInstance(u"X.509"_j);
        auto certificate = java_cast< ::java::security::cert::X509Certificate* >(certificateFactory)->generateCertificate(ResourceManager::class_())->getResourceAsStream(CERTIFICATE_FILE_NAME_)));
        auto man = jis)->getManifest();
        if(man == 0) {
            jis)->close();
            throw new ::java::lang::SecurityException(u"The customization file is not signed"_j);
        }
        while ((je = jis)->getNextJarEntry()) != 0) {
            if(je)->isDirectory()) {
                continue;
            }
            auto bytes = new ::int8_tArray(int(1024));
            auto baos = new ::java::io::ByteArrayOutputStream();
            auto read = -int(1);
            while ((read = jis)->read(bytes)) != -int(1)) {
                baos)->write(bytes, int(0), read);
            }
            Log::RESOURCE())->debug(std::stringBuilder().append(u"Found customization package entry: "_j)->append(je)->getName())
                ->append(u""_j)->toString());
            JarVerifier::verify(je, new ::java::security::cert::X509CertificateArray({certificate}));
            if(je)->getName())->equals(REPLACEMENTS_RESOURCE_NAME_))) {
                Log::RESOURCE())->debug(u"Found string resource replacements"_j);
                auto br = new ::java::io::BufferedReader(new std::iostreamReader(new ::java::io::ByteArrayInputStream(baos)->toByteArray_())));
                const std::string & sub;
                while ((sub = br)->readLine()) != 0) {
                    try {
                        auto parts = sub)->split(u"="_j, 2);
                        REPLACEMENTS_)->put((*parts)[int(0)])->trim(), (*parts)[int(1)])->trim());
                        Log::RESOURCE())->debug(std::stringBuilder().append(u"Found string replacement: '"_j)->append((*parts)[int(0)])
                            ->append(u"' => '"_j)
                            ->append((*parts)[int(1)])
                            ->append(u"'"_j)->toString());
                    } catch (::java::lang::Exception* ex1) {
                        Log::RESOURCE())->error(std::stringBuilder().append(u"Error processing replacement: "_j)->append(sub)->toString(), ex1);
                    }
                }
                continue;
            }
            RESOURCES_)->put(je)->getName(), baos)->toByteArray_());
        }
        jis)->close();
    } catch (::java::io::FileNotFoundException* ex) {
    }
}

javax::swing::ImageIcon* ResourceManager::getImageIcon(const std::string & id)
{
    
    if(id == 0) {
        return 0;
    }
    return getImageIcon(id, ICON_FILE_EXTENSION_);
}

javax::swing::ImageIcon* ResourceManager::getImageIcon(const std::string & id, const std::string & extension)
{
    
    auto name = std::stringBuilder().append(id)->append(u"."_j)
        ->append(extension)->toString();
    try {
        auto cached = java_cast< ::javax::swing::ImageIcon* >(ICON_CACHE_)->get(name));
        if(cached != 0) {
            return cached;
        }
        auto res = getResource(name);
        if(res != 0) {
            auto icon = new ::javax::swing::ImageIcon(::java::awt::Toolkit::getDefaultToolkit())->createImage(res));
            ICON_CACHE_)->put(name, icon);
            return icon;
        }
        auto url = RESOURCE_CLASS_ != 0 ? RESOURCE_CLASS_)->getResource(name) : static_cast< ::java::net::URL* >(0);
        if(url == 0) {
            return 0;
        }
        auto icon = new ::javax::swing::ImageIcon(url);
        ICON_CACHE_)->put(name, icon);
        return icon;
    } catch (::java::lang::Exception* ex) {
        Log::RESOURCE())->error(std::stringBuilder().append(u"Error getting icon: "_j)->append(name)->toString(), ex);
        return 0;
    }
}

int8_tArray* ResourceManager::getResource(const std::string & name)
{
    
    return RESOURCES_ != 0 ? java_cast< ::int8_tArray* >(RESOURCES_)->get(name)) : static_cast< ::int8_tArray* >(0);
}

void ResourceManager::process(WrappingResourceBundle* bundle)
{
    
    for (auto _i = REPLACEMENTS_)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            bundle)->addReplacement(java_cast< const std::string & >(entry)->getKey()), java_cast< const std::string & >(entry)->getValue()));
        }
    }
}

void ResourceManager::add(WrappingResourceBundle* bundle)
{
    
    BUNDLES_)->add(bundle));
}

java::util::Locale* ResourceManager::getLocale()
{
    
    return LOCALE_;
}


void ResourceManager::clinit()
{
struct string_init_ {
    string_init_() {
    CERTIFICATE_FILE_NAME_ = u"customization.cer"_j;
    ICON_FILE_EXTENSION_ = u"png"_j;
    CUSTOMIZATION_RESOURCES_FILENAME_ = u"custom.jar"_j;
    CLIENT_CUSTOMIZATION_RESOURCES_FILENAME_ = u"custom-client.jar"_j;
    REPLACEMENTS_RESOURCE_NAME_ = u"replacements.txt"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        REPLACEMENTS_ = new ::java::util::LinkedHashMap();
        ICON_CACHE_ = new ::java::util::HashMap();
        BUNDLES_ = new ::java::util::LinkedList();
        LOCALE_ = ::java::util::Locale::ENGLISH();
        {
            try {
                auto language = ::java::lang::System::getProperty(u"user.language"_j);
                if(language != 0) {
                    LOCALE_ = new ::java::util::Locale(language);
                }
            } catch (::java::lang::Exception* ex) {
                Log::CORE())->error(u"Error setting up locale"_j, ex);
            }
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}
*/
