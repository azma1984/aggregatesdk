
#include <util/SString.h>

//#include <cutil/global.h>
//#include <util/StringList.h>

#include <cctype>
#include <algorithm>
#include <sstream>
using namespace std;

const char * SString::null = "";

int SString::toInteger() const {
	int tmp = 0;

	stringstream ss(c_str());
	ss >> tmp;

	return tmp;
}

bool SString::toBoolean() const {
	SString tmp(c_str());
	tmp = tmp.toLowerCase();
	if (tmp == "true" || tmp == "yes" || tmp == "1") {
		return true;
	}

	return false;
}

std::string SString::toUpperCase() const {
	string tmp(c_str());
	transform(tmp.begin(), tmp.end(), tmp.begin(), (int(*)(int)) toupper);
	return tmp;
}

std::string SString::toLowerCase() const {
	string tmp(c_str());
	transform(tmp.begin(), tmp.end(), tmp.begin(), (int(*)(int)) tolower);
	return tmp;
}

bool SString::beginsWith(const String & str) const {
	return (this->find(str) == 0);
}

bool SString::endsWith(const String & str) const {
	if (size() < str.size()) {
		return false;
	} else {
		return (this->rfind(str) == (size() - str.size()));
	}
}

bool SString::contains(const std::string & str, bool caseSensitive) const {
	string tmp(c_str());
	SString str2(str);

	if (!caseSensitive) {
		//Converts tmp + str2 to lower case
		tmp = toLowerCase();
		str2 = str2.toLowerCase();
	}

	if (tmp.find(str2, 0) != string::npos) {
		return true;
	}
	return false;
}

bool SString::contains(char ch, bool caseSensitive) const {
	std::string str;
	str += ch;
	return contains(str, caseSensitive);
}

void String::replace(const std::string & before, const std::string & after, bool caseSensitive) {
	//Copy this + before to tmp + before2
	string tmp(c_str());
	SString before2(before);

	if (!caseSensitive) {
		//Converts tmp + before2 to lower case
		tmp = toLowerCase();
		before2 = before2.toLowerCase();
	}

	//Searches on tmp + before2 rather than this + before
	string::size_type pos = 0;
	while ((pos = tmp.find(before2, pos)) != string::npos) {
		//Replaces on this + tmp
		string::replace(pos, before2.length(), after);
		tmp.replace(pos, before2.length(), after);
		pos = pos + after.length();
	}
}

void SString::replaceInRange(unsigned index, unsigned size,
	const std::string & before, const std::string & after, bool caseSensitive) {

	//Copy this + before to tmp + before2
	string tmp(c_str());
	SString before2(before);

	if (!caseSensitive) {
		//Converts tmp + before2 to lower case
		tmp = toLowerCase();
		before2 = before2.toLowerCase();
	}

	//Searches on tmp + before2 rather than this + before
	string::size_type pos = index;
	string::size_type l = before2.length();
	pos = tmp.find(before2, pos);
	if ((pos != string::npos)
		&& ((pos - index + l) <= size)) {
		//Replaces on this + tmp
		string::replace(pos, l, after);
		tmp.replace(pos, l, after);
	}
}

std::string & SString::append(const std::string & str) {
	return insert(size(), str);
}

void SString::remove(const std::string & str) {
	replace(str, SString::null);
}

std::string SString::fromNumber(int number, int minLength) {
	if (number < 0) {
		return "-" + fromNumber((-number), minLength - 1);
	}

	minLength = (minLength < 0) ? 0 : minLength;

	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);

	ss << number;

	std::string result = ss.str();
	while (result.length() < (unsigned int) minLength) {
		result = "0" + result;
	}
	return result;
}

std::string SString::fromBoolean(bool boolean) {
	stringstream ss;
	ss << boolean;
	return ss.str();
}

std::string SString::fromLong(long number) {
	stringstream ss;

	std::locale cloc("C");
	ss.imbue(cloc);

	ss << number;
	return ss.str();
}

std::string SString::fromLongLong(long long number) {
	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);
	ss << number;
	return ss.str();
}

std::string SString::fromUnsignedLongLong(unsigned long long number) {
	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);
	ss << number;
	return ss.str();
}

std::string SString::fromUnsignedInt(unsigned int number) {
	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);
	ss << number;
	return ss.str();
}

std::string SString::fromDouble(double number) {
	stringstream ss;
	std::locale cloc("C");
	ss.imbue(cloc);
	ss << number;
	return ss.str();
}

static unsigned char hex_to_int(unsigned char ch) {
	if (ch >= 'A' && ch <= 'F') {
		return ch - 'A' + 10;
	}
	if (ch >= 'a' && ch <= 'f') {
		return ch - 'a' + 10;
	}
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	return 0;
}

/* Taken from Qt3 QUrl::decode() */
std::string SString::decodeUrl(const std::string & url) {
	string newUrl;

	if (url.empty()) {
		return newUrl;
	}

	int oldlen = url.length();
	int i = 0;
	while (i < oldlen) {
		unsigned char ch = url[i++];
		if (ch == '%' && i <= oldlen - 2) {
			ch = hex_to_int(url[i]) * 16 + hex_to_int(url[i + 1]);
			i += 2;
		}
		newUrl += ch;
	}

	return newUrl;
}

/* Taken from Qt3 QUrl::encode() */
std::string SString::encodeUrl(const std::string & url) {
	string newUrl;

	if (url.empty()) {
		return newUrl;
	}

	static const SString special("+<>#@\"&%$:,;?={}|^~[]\'`\\ \n\t\r");

	int oldlen = url.length();
	for (int i = 0; i < oldlen; ++i) {
		unsigned char inCh = url[i];

		if (inCh >= 128 || special.contains(inCh)) {
			newUrl += '%';

			unsigned short c = inCh / 16;
			c += c > 9 ? 'A' - 10 : '0';
			newUrl += c;

			c = inCh % 16;
			c += c > 9 ? 'A' - 10 : '0';
			newUrl += c;
		} else {
			newUrl += inCh;
		}
	}

	return newUrl;
}

StringList SString::split(const std::string & separator) const {
	string str(c_str());

	//Skip separator at beginning.
	string::size_type lastPos = str.find_first_not_of(separator, 0);

	//Find first "non-separator".
	string::size_type pos = str.find_first_of(separator, lastPos);

	StringList tokens;
	while (string::npos != pos || string::npos != lastPos) {

		//Found a token, add it to the vector.
		tokens += str.substr(lastPos, pos - lastPos);

		//Skip delimiters. Note the "not_of"
		lastPos = str.find_first_not_of(separator, pos);

		//Find next "non-delimiter"
		pos = str.find_first_of(separator, lastPos);
	}
	return tokens;
}

std::string SString::trim() {
	string newstr;

	string::size_type pos1 = find_first_not_of(" \t");
	string::size_type pos2 = find_last_not_of(" \t");
	newstr = substr(pos1 == string::npos ? 0 : pos1,
		pos2 == string::npos ? length() - 1 : pos2 - pos1 + 1);

	return newstr;
}
