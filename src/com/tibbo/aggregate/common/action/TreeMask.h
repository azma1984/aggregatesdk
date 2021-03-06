#ifndef TreeMaskH
#define TreeMaskH

#include "action/ResourceMask.h"
#include "util/pointers.h"
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
	bool includes(TreeMaskPtr resourceMask);

	std::string toString();
 };

#endif
