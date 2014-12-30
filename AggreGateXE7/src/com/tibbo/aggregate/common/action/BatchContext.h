// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchContext.java
#ifndef BatchContextH
#define BatchContextH
#include <list>
#include "BatchEntry.h"

class BatchContext
{
 private:
	std::list<BatchEntry*> entries;
	BatchEntry* currentEntry;

public:
	void addBatchEntry(BatchEntry* batchEntry);

	std::list<BatchEntry*>* getEntries();
    BatchEntry* getCurrentEntry();
	void markAsPerfomed(BatchEntry* entry);

	void setCurrentEntry(BatchEntry* currentEntry);
};


#endif
