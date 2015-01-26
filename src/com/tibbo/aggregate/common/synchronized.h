#include <boost/thread/mutex.hpp>
//A "synchronized" statement for C++ like in Java (http://www.codeproject.com/Articles/12362/A-quot-synchronized-quot-statement-for-C-like-in-J)

//mutex class
class Mutex
{
public:
    //the default constructor
    Mutex()
    {
        //InitializeCriticalSection(&m_criticalSection);
     
	}

    //destructor
    ~Mutex()
    {
       // DeleteCriticalSection(&m_criticalSection);
    }

    //lock
    void lock()
    {
     //EnterCriticalSection(&m_criticalSection);
     mtx.lock();
    }

    //unlock
    void unlock()
    {
     //LeaveCriticalSection(&m_criticalSection);
      mtx.unlock();
   	}

private:
    //CRITICAL_SECTION m_criticalSection;
	boost::mutex mtx;
};

//synchronization controller object
class Lock
{
public:
    //the default constructor
    Lock(Mutex &mutex) : m_mutex(mutex), m_locked(true)
    {
        mutex.lock();
    }

    //the destructor
    ~Lock()
    {
        m_mutex.unlock();
    }

    //report the state of locking when used as a boolean
    operator bool () const
    {
        return m_locked;
    }

    //unlock
    void setUnlock()
    {
        m_locked = false;        
    }

private:
    Mutex &m_mutex;
    bool m_locked;
};

#define synchronized(M)  for(Lock M##_lock = M; M##_lock; M##_lock.setUnlock())