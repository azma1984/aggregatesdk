#include "TreeMask.h"


TreeMask::TreeMask()
{

}

TreeMask::TreeMask(const std::string& mask)
{
   this->mask=mask;
}


bool TreeMask::includes(TreeMaskPtr resourceMask)
{
    if(resourceMask == 0) {
		std::cout<<"Pointer = NULL!";
	}
	if(mask.empty() ==true)
	{
		return true;
	}
	if(resourceMask->mask.empty()== true)
	{
        return false;
    }
	return resourceMask->mask.find(mask) && resourceMask->mask[mask.length()] == SEPARATOR;
}

std::string TreeMask::toString()
{
	return mask;
}




