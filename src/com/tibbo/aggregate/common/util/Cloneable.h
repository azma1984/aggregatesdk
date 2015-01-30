#ifndef _CLONEABLE_H_
#define _CLONEABLE_H_

#include <boost/shared_ptr.hpp>
//#include <util/NonCopyable.h>

class Cloneable {//: NonCopyable {
public:

	virtual ~Cloneable() {};

    virtual Cloneable *clone() const = 0;

};


#endif //_CLONEABLE_H_
