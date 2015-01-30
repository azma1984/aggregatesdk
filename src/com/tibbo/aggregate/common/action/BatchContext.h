#ifndef BatchContextH
#define BatchContextH

#include <list>
#include "BatchEntry.h"
#include "util/pointers.h"

class BatchContext
{
 private:
	std::list<BatchEntryPtr> entries;
	BatchEntryPtr currentEntry;

public:
	void addBatchEntry(BatchEntryPtr batchEntry);

	std::list< BatchEntryPtr > getEntries();
    BatchEntryPtr getCurrentEntry();
	void markAsPerfomed(BatchEntryPtr entry);

	void setCurrentEntry(BatchEntryPtr currentEntry);
};


#endif
