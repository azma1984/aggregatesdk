#ifndef _ErrorCollector_H_
#define _ErrorCollector_H_

#include <list>

class ErrorCollector
{
public:
	ErrorCollector() {}
	
	void addError(std::exception& error)
	{
		errors.push_back( error );
	}
	std::list<std::exception>  getErrors() 
	{
		return errors;
	}	

private:
	std::list<std::exception>  errors;	
};
#endif
