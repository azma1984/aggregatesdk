#ifndef _Util_H_
#define _Util_H_
 
#include <string>
#include <list>
#include <map>
#include <vector>
#include "util/pointers.h"
#include <sstream>
#include <iostream>
#include "util/simpleobject/AgDouble.h"
#include "util/simpleobject/AgFloat.h"
#include "util/simpleobject/AgInteger.h"

class Util
{

public:    
	template <class left, class right> static bool equals(left& l, right& r);
	//TODO:
	/*
    static Throwable getCause(Throwable& th, Class<InterruptedException> throwableClass);
    static Throwable getRootCause(Throwable& th);
	*/
    static std::vector<char> readStream(std::iostream& is) ;
    static long convertToNumber(AgObjectPtr value, bool validate, bool allowNull);

    static AgDouble* convertToNumberAsDouble(AgObjectPtr value, bool validate, bool allowNull);
    static AgFloat* convertToNumberAsFloat(AgObjectPtr value, bool validate, bool allowNull);
    static AgInteger* convertToNumberAsInteger(AgObjectPtr value, bool validate, bool allowNull);

    static bool convertToBoolean(AgObjectPtr value, bool validate, bool allowNull);    
    //static bool isFloatingPoint(Number* n);
    //TODO:
	static std::string getObjectDescription(AgObjectPtr obj);// const;
	//TODO:
	/* 
    static Class* getListElementType(Type* listType);
    static Class* getMapKeyType(Type* mapType);
	*/
    static int parseVersion(const std::string& version);
    static std::string nameToDescription(const std::string& name);
    static std::string descriptionToName(const std::string& value);
    //static std::string getTrayIconId(const std::string& prefix);
    //static std::list<Image> getIconImages(const std::string& prefix, std::list<int>&  sizes);
    //static std::map sortByValue(std::map map);
    //template <K, V> static Map<K, V> sortByValue(Map<K, V>& map);
}; 
#endif	//_Util_H_
