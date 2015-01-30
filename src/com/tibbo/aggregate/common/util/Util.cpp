#include <util/Util.h>
#include <util/SString.h>


template <class left, class right>
bool Util::equals(left& l, right& r)
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

std::vector<char> Util::readStream(std::iostream& is)
{
//    typedef std::istream_iterator<char> istream_iterator;
//
//    std::vector<char> buffer;
//    std::copy(istream_iterator(is), istream_iterator(), std::back_inserter(buffer));
//
//    return buffer;
}

//TODO:
long/*Number*/ Util::convertToNumber(AgObjectPtr value, bool validate, bool allowNull)
{
/*
if (value == null)
    {
      if (allowNull)
      {
        return null;
      }
      if (validate)
      {
        throw new IllegalArgumentException(Cres::get()->getString("utCannotConvertToNumber") + getObjectDescription(value));
      }
      return 0;
    }

    if (value instanceof DataTable)
    {
      return convertToNumber(((DataTable) value).get(), validate, allowNull);
    }

    if (value instanceof Number)
    {
      return (Number) value;
    }

    if (value instanceof Date)
    {
      return ((Date) value).getTime();
    }

    if (value instanceof Boolean)
    {
      return (Boolean) value ? 1 : 0;
    }

    try
    {
      return Long.valueOf(value.toString());
    }
    catch (NumberFormatException ignored)
    {
    }

    try
    {
      return Float.valueOf(value.toString());
    }
    catch (NumberFormatException ignored)
    {
    }

    if (validate)
    {
      throw new IllegalArgumentException(Cres::get()->getString("utCannotConvertToNumber") + getObjectDescription(value));
    }
    else
    {
      return allowNull ? null : 0;
    }
*/

    return 0;
}

//TODO:
bool Util::convertToBoolean(AgObjectPtr value, bool validate, bool allowNull)
{
    /*
    if (value == null)
        {
          if (allowNull)
          {
            return null;
          }
          if (validate)
          {
            throw new IllegalArgumentException(Cres::get()->getString("utCannotConvertToBoolean") + getObjectDescription(value));
          }
          return false;
        }

        if (value instanceof DataTable)
        {
          return convertToBoolean(((DataTable) value).get(), validate, allowNull);
        }

        if (value instanceof Boolean)
        {
          return (Boolean) value;
        }

        if (value instanceof Number)
        {
          return ((Number) value).longValue() != 0;
        }

        if (value instanceof String)
        {
          String s = (String) value;
          if (s.equalsIgnoreCase("true") || s.equalsIgnoreCase("1"))
          {
            return true;
          }
          if (s.equalsIgnoreCase("false") || s.equalsIgnoreCase("0"))
          {
            return false;
          }
        }

        if (validate)
        {
          throw new IllegalArgumentException(Cres::get()->getString("utCannotConvertToBoolean") + getObjectDescription(value));
        }
        else
        {
          return allowNull ? null : false;
        }
        */

    return false;
}

/*
static bool isFloatingPoint(Number& n)
{
    return n instanceof Float || n instanceof Double;
}
*/

//TODO:
std::string Util::getObjectDescription(AgObjectPtr obj)// const
{
    /*
    if (o == null)
    {
      return "null";
    }

    return o.toString() + " (" + o.getClass().getName() + ")";
    */
    return std::string("Util::getObjectDescription");
}

//TODO:
/* 
static Class* getListElementType(Type* listType);
{
    if (listType instanceof ParameterizedType)
    {
      ParameterizedType pt = (ParameterizedType) listType;
      Type t = pt.getActualTypeArguments()[0];
      if (t != null && t instanceof Class)
      {
        return (Class) t;
      }
    }

    return null;
}

static Class* getMapKeyType(Type* mapType)
{
    if (mapType instanceof ParameterizedType)
    {
      ParameterizedType pt = (ParameterizedType) mapType;
      Type t = pt.getActualTypeArguments()[0];
      if (t != null && t instanceof Class)
      {
        return (Class) t;
      }
    }

    return null;
}
*/

int Util::parseVersion(const std::string& version)
{
    int major = SString(version.substr(0, 1)).toInteger();
    int minor = SString(version.substr(2, 4)).toInteger();
    int build = SString(version.substr(5, 7)).toInteger();

    return major * 10000 + minor * 100 + build;
}

std::string Util::nameToDescription(const std::string& name)
{
//	std::stringstream ss;
//
//	bool prevWasUpper = false;
//	bool nextToUpper = false;
//
//	for (int i = 0; i < name.length(); i++)
//    {
//        char c = name.at(i);
//
//		if (Character.isUpperCase(c))
//        {
//            if (!prevWasUpper && i != 0)
//			{
//              ss <<" ";
//			}
//			prevWasUpper = true;
//        }else {
//			prevWasUpper = false;
//		}
//
//		if (i == 0 || nextToUpper) {
//			c = Character.toUpperCase(c);
//            nextToUpper = false;
//        }
//
//		if (c == '_') {
//			ss <<" ";
//			nextToUpper = true;
//		}else{
//			ss <<c;
//		}
//	}
//
//	return ss.str();
}

//TODO:
std::string Util::descriptionToName(const std::string& value)
{
    std::stringstream ss;
    /*
    for (int i = 0; i < value.length(); i++)
    {
      char c = value.charAt(i);
      if (ContextUtils.isValidContextNameChar(c))
      {
        sb.append(c);
      }
      else
      {
        sb.append('_');
      }
    }
    */
    return ss.str();
}

/*
static std::string getTrayIconId(const std::string& prefix)
{
    List<Integer> sizes = Arrays.asList(16, 24, 32, 48, 64, 128);

    if (SystemTray.isSupported()) {
        int width = SystemTray.getSystemTray().getTrayIconSize().width;
        if (sizes.contains(width)) {
            return prefix + "_" + width;
        }
    }

    return prefix + "_" + 16;
}
*/

/*
static std::list<Image> getIconImages(const std::string& prefix, std::list<int>&  sizes)
{
}
*/
/*
static std::map sortByValue(std::map map)
{
}
/*
/*
template <K, V> static Map<K, V> sortByValue(Map<K, V>& map)
{
}
*/
