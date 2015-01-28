
#ifndef ResourceManagerH
#define ResourceManagerH

//#include "Log.h"  todo
#include "resource/JarVerifier.h"
#include "resource/WrappingResourceBundle.h"


//todo - Class stub!
class ResourceManager
{

private:
    static const std::string CERTIFICATE_FILE_NAME_;
    static const std::string ICON_FILE_EXTENSION_;
    static const std::string CUSTOMIZATION_RESOURCES_FILENAME_;
    static const std::string CLIENT_CUSTOMIZATION_RESOURCES_FILENAME_;
	static const std::string REPLACEMENTS_RESOURCE_NAME_;
	static AgClassPtr RESOURCE_CLASS_;
	static std::map<std::string,unsigned char*> RESOURCES;
	static std::map<std::string,std::string> REPLACEMENTS;
   //	static std::map<std::string,ImageIcon*> ICON_CACHE;  todo
	static std::list<WrappingResourceBundle*>  BUNDLES;
	static Locale* LOCALE;
  //	static void processCustomizationFile(::java::net::URI* customizationUrl); //todo
   //	static ::javax::swing::ImageIcon* getImageIcon(const std::string & id, const std::string & extension); todo

public:
	static void initialize(AgClassPtr resClass);
   //	static void initialize(::java::net::URI* customizationUrl, AgClassPtr resClass); todo


   //	static ::javax::swing::ImageIcon* getImageIcon(const std::string & id); todo

	static char* getResource(const std::string & name);
	static void process(WrappingResourceBundle* bundle);
	static void add(WrappingResourceBundle* bundle);
	static Locale* getLocale();


	ResourceManager();

};

#endif 
