#include "datatable/AbstractDataTableBindingProvider.h"


void AbstractDataTableBindingProvider::writeToEditor(const std::string &property, AgObjectPtr value)
{

}

void AbstractDataTableBindingProvider::writeToField(int row, const std::string &field, const std::string &property, AgObjectPtr value)
{

}

AbstractDataTableBindingProvider::AbstractDataTableBindingProvider()
{

}

AbstractDataTableBindingProvider::AbstractDataTableBindingProvider(ErrorCollectorPtr errorCollector)
{

}

void AbstractDataTableBindingProvider::writeReference(ReferencePtr ref, AgObjectPtr value)
{

}

int AbstractDataTableBindingProvider::getListenerCount()
{
    return 0;
}

std::map<ReferenceListenerPtr, ReferencePtr> AbstractDataTableBindingProvider::getListeners()
{
    return std::map<ReferenceListenerPtr, ReferencePtr>();
}

void AbstractDataTableBindingProvider::addReferenceListener(ReferencePtr ref, ReferenceListenerPtr listener)
{

}

void AbstractDataTableBindingProvider::removeReferenceListener(ReferenceListenerPtr listener)
{

}

bool AbstractDataTableBindingProvider::isLocalReference(ReferencePtr ref)
{
    return false;
}

void AbstractDataTableBindingProvider::processBindings(const std::string &field, int record, bool startup)
{

}
