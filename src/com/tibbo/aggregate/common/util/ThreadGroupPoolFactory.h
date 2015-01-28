
#ifndef ThreadGroupPoolFactoryH
#define ThreadGroupPoolFactoryH

class ThreadGroupPoolFactory //  , public ::java::util::concurrent::ThreadFactory todo
{

private:
    static ::java::util::concurrent::atomic::AtomicInteger* poolNumber_;
    ::java::lang::ThreadGroup* group;
	::java::util::concurrent::atomic::AtomicInteger* threadNumber;
	const std::string & namePrefix;
	static ::java::util::concurrent::atomic::AtomicInteger*& poolNumber();


public:
	::java::lang::Thread* newThread(::java::lang::Runnable* r);

	ThreadGroupPoolFactory(::java::lang::ThreadGroup* group, const std::string & name);

};
#endif
