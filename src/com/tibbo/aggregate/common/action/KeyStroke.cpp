// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/KeyStroke.java
#include "KeyStroke.h"

/*

KeyStroke::KeyStroke(const std::string & keyStroke)
{
	this->keyStroke = ::javax::swing::KeyStroke::getKeyStroke(keyStroke);
}

void KeyStroke::ctor(::javax::swing::KeyStroke* keyStroke)
{
	if(keyStroke == 0) {
        throw new ::java::lang::IllegalArgumentException(u"KeyStroke is null"_j);
    }
    this->keyStroke = keyStroke;
}

KeyStroke* KeyStroke::getKeyStroke(char16_t keyChar)
{
    return new KeyStroke(::javax::swing::KeyStroke::getKeyStroke(keyChar));
}

KeyStroke* KeyStroke::getKeyStroke(::java::lang::Character* keyChar, int modifiers)
{

    return new KeyStroke(::javax::swing::KeyStroke::getKeyStroke(keyChar, modifiers));
}

KeyStroke* KeyStroke::getKeyStroke(int keyCode, int modifiers, bool onKeyRelease)
{

    return new KeyStroke(::javax::swing::KeyStroke::getKeyStroke(keyCode, modifiers, onKeyRelease));
}

KeyStroke* KeyStroke::getKeyStroke(int keyCode, int modifiers)
{

    return new KeyStroke(::javax::swing::KeyStroke::getKeyStroke(keyCode, modifiers));
}

KeyStroke* KeyStroke::getKeyStroke(const std::string & s)
{

    auto k = ::javax::swing::KeyStroke::getKeyStroke(s);
    if(k == 0) {
		return 0;
    }
    return new KeyStroke(k);
}

javax::swing::KeyStroke* KeyStroke::getKeyStroke()
{
    return keyStroke;
}

std::string KeyStroke::toString()
{
	return keyStroke->toString();
}


*/
