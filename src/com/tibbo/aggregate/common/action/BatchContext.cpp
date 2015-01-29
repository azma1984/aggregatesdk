// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchContext.java
#include "BatchContext.h"
#include "BatchEntry.h"
#include <iostream>

void BatchContext::addBatchEntry(BatchEntryPtr batchEntry)
{
	if(batchEntry == 0)
	{
		std::cout << "Pointer = NULL!";
	}
    //todo
   //	entries.insert(batchEntry);
}

std::list<BatchEntryPtr> BatchContext::getEntries()
{
  //todo
	//return Collections::unmodifiableList(entries);
    return entries;
}

BatchEntryPtr BatchContext::getCurrentEntry()
{
	return currentEntry;
}

void BatchContext::markAsPerfomed(BatchEntryPtr entry)
{  
    std::list<BatchEntryPtr>::iterator itr1;
    itr1 = std::find(entries.begin(), entries.end(), entry);
    if (itr1 != entries.end())
	{
        //TODO: exception
       //throw new std::cout << "Entry '" + entry + "' is not on the list");
    }
    entry->setFulfilled(true);
}

void BatchContext::setCurrentEntry(BatchEntryPtr currentEntry)
{
    this->currentEntry = currentEntry;
}


