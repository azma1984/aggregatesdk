#ifndef NamedThreadFactoryH
#define NamedThreadFactoryH


class NamedThreadFactory //, public ::java::util::concurrent::ThreadFactory
{

private:
    const std::string & name;
    int  priority;
   //	::java::util::concurrent::ThreadFactory* threadFactory; todo
	void init();
public:
	const std::string & getName();

   //	::java::lang::Thread* newThread(::java::lang::Runnable* r); todo

	NamedThreadFactory();
	NamedThreadFactory(const std::string & name);
	NamedThreadFactory(const std::string & name, int priority);

};

#endif

