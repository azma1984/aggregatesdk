#ifndef _NONCOPYABLE_H_
#define _NONCOPYABLE_H_

#include <util/owutildll.h>

/**
 * Ensures derived classes have private copy constructor and copy assignment.
 */
class NonCopyable {
protected:

	 NonCopyable();

	 ~NonCopyable();

private:

	/**
	 * Copy constructor is private.
	 */
	NonCopyable(const NonCopyable &);

	/**
	 * Copy assignement is private.
	 */
	const NonCopyable & operator=(const NonCopyable &);
};

#endif	//_NONCOPYABLE_H_
