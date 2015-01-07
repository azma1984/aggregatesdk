#include <util/Util.h>

template <class left, class right> static bool equals(left& l, right& r)
{
	return left == right;
}

//TODO:
/*
static Throwable getCause(Throwable& th, Class<InterruptedException> throwableClass)
{
}

static Throwable getRootCause(Throwable& th)
{
}
*/

static std::vector<char> readStream(std::iostream& is)
{
}

static Number convertToNumber(void* value, bool validate, bool allowNull)
{
}

static bool convertToBoolean(void* value, bool validate, bool allowNull)
{
}

static bool isFloatingPoint(::java::lang::Number* n)
{
}

static std::string getObjectDescription(void* obj) const
{
}

//TODO:
/* 
static Class* getListElementType(Type* listType);
{
}

static Class* getMapKeyType(Type* mapType)
{
}
*/

static int parseVersion(const std::string& version)
{
}

static std::string nameToDescription(const std::string& name)
{
}

static std::string descriptionToName(const std::string& value)
{
}

static std::string getTrayIconId(const std::string& prefix)
{
}

//TODO: Image
static std::list<Image> getIconImages(const std::string& prefix, std::list<int>&  sizes)
{
}

static std::map sortByValue(std::map map)
{
}

template <K, V> static Map<K, V> sortByValue(Map<K, V>& map)
{
}