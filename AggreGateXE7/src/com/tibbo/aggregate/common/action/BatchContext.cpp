// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchContext.java
#include "BatchContext.h"
#include "BatchEntry.h"
#include <iostream>

void BatchContext::addBatchEntry(BatchEntry* batchEntry)
{
	if(batchEntry == 0) {
		std::cout << "Pointer = NULL!";
	}
	//todo
   //	entries.pop_front(batchEntry);
}

std::list<BatchEntry*>* BatchContext::getEntries()
{

	//todo
	//return Collections::unmodifiableList(entries);
}

BatchEntry* BatchContext::getCurrentEntry()
{
	return currentEntry;
}

void BatchContext::markAsPerfomed(BatchEntry* entry)
{
//todo
   /*
	if(entries->contains(entry))
	{
	  std::cout << "Entry '" + entry + "' is not on the list");
    }
	entry)->setFulfilled(true); */
}

void BatchContext::setCurrentEntry(BatchEntry* currentEntry)
{
    this->currentEntry = currentEntry;
}


