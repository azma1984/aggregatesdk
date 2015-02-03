
#ifndef StringUtilsH
#define StringUtilsH

#include "util/ElementList.h"
#include "util/Pointers.h"
#include "util/simpleobject/AgColor.h"


#include <string>
#include <list>
#include <map>
#include <vector>


class StringUtils
{
 public:

   // static ::java::nio::charset::Charset* UTF8_CHARSET_;  //todo
   // static ::java::nio::charset::Charset* ASCII_CHARSET_; //todo
	static const std::string DEFAULT_COLLECTION_PRINT_SEPARATOR;
	static const std::string DEFAULT_MAP_KEY_VALUE_SEPARATOR;

    static const std::string truncate(const std::string & str, int maxLength);
    static const std::string truncate(const std::string & str, int maxLength, const std::string & suffix);
    static const std::string byteToHexString(int i);
    static const std::string colorToString(ColorPtr color);
	static ElementList* elements(const std::string & source, bool useVisibleSeparators);
    static const std::string escapeHtml(const std::string & text);
	static const std::string print(std::list<AgObjectPtr> col);
	static const std::string print(std::list<AgObjectPtr> col, const std::string & separator);
	static const std::string print(std::list<AgObjectPtr> col, const std::string & separator, bool skipNullElements);
	static const std::string print(std::list<AgObjectPtr> col, const std::string & separator, const std::string & escaper, bool skipNullElements);
	static const std::string print(std::map<AgObjectPtr,AgObjectPtr> map);
	static const std::string print(std::map<AgObjectPtr,AgObjectPtr> map, const std::string & separator, const std::string & keyValueSeparator, bool skipNullKeys);
	static const std::string print(void* array);
	static const std::string print(void* array, const std::string & separator);
    static const std::string remoteNonDigits(const std::string & src);
    static const std::string removeSuffix(const std::string & src, const std::string & suffix);
    static std::vector<std::string>  split(const std::string & str, int ch);
    static std::vector<std::string>  split(const std::string & str, int ch, int limit);
    static const std::string streamToString(std::iostream* is);
	static std::list<std::string>  wrapText(const std::string & text, int len);
    static const std::string wrapText(const std::string & text, int len, const std::string & separator);
   // static void appendLine(std::stringBuilder* sb, const std::string & s); todo
    static const std::string makeName(const std::string & source, int maxLength);
    static bool isPureAscii(const std::string & v);
    static bool isEmpty(const std::string & text);

    static std::string colorToString(AgColor &color);

	StringUtils();

};
#endif
