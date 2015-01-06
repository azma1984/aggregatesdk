// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/TreeMask.java

#ifndef TreeMaskH
#define TreeMaskH

#include "ResourceMask.h"

#include <string>
#include <iostream>

class TreeMask : public ResourceMask<TreeMask>
{
private:
	std::string mask;

public:
	static const char SEPARATOR = '.';

	TreeMask();
	TreeMask(const std::string &mask);
	bool includes(TreeMask* resourceMask);

	std::string toString();
 };

#endif
