// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/string/CharacterFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/string/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/JavaMethodFunction.h"



class function::string::CharacterFunction
    : public function::JavaMethodFunction
{

public:
    typedef function::JavaMethodFunction super;
protected:
    void ctor(const std::string & method);

public: /* protected */
    void* convertParameter(int i, void* value);

    // Generated

public:
    CharacterFunction(const std::string & method);
protected:
    CharacterFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
