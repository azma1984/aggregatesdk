
#ifndef RequestControllerH
#define RequestControllerH


class RequestController
{
	virtual AgObjectPtr getOriginator()=0;
	virtual long getLockTimeout()=0;
	virtual EvaluatorPtr getEvaluator()=0;

};
#endif