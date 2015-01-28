#ifndef AggreGateSwingWorkerH
#define AggreGateSwingWorkerH


class AggreGateSwingWorker // , public ::java::lang::Runnable
{
 private:
	AgObjectPtr value;

public:
    AgObjectPtr start();
    AgObjectPtr execute();
	AgObjectPtr executeWithExceptions();
	void run(); (already declared)

	void set(AgObjectPtr value);


    AggreGateSwingWorker();

};
#endif
