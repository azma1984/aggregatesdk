#pragma once

#include "binding/AbstractBindingProvider.h"

class AbstractDataTableBindingProvider : public AbstractBindingProvider
{
private:
    std::map<ReferenceListenerPtr, ReferencePtr> listeners;
//    ::java::util::concurrent::locks::ReentrantReadWriteLock* listenersLock;

private:
    void writeToEditor(const std::string & property, AgObjectPtr value);
    void writeToField(int row, const std::string & field, const std::string & property, AgObjectPtr value);

public:
    AbstractDataTableBindingProvider();
    AbstractDataTableBindingProvider(ErrorCollectorPtr errorCollector);
    void writeReference(ReferencePtr ref, AgObjectPtr value);
    int getListenerCount();
    std::map<ReferenceListenerPtr, ReferencePtr> getListeners();
//    ::java::util::concurrent::locks::ReentrantReadWriteLock* getListenersLock();
    void addReferenceListener(ReferencePtr ref, ReferenceListenerPtr listener);
    void removeReferenceListener(ReferenceListenerPtr listener);
    bool isLocalReference(ReferencePtr ref);

protected:
    void processBindings(const std::string & field, int record, bool startup);
    virtual ReferenceWriterPtr getExternalReferenceWriter() = 0;
    virtual void callReferenceChanged(ReferencePtr cause, int method, ReferenceListenerPtr listener) = 0;
    virtual void setEnabled(AgObjectPtr value, int row, const std::string & field) = 0;
    virtual void setCellValue(AgObjectPtr value, int row, const std::string & field) = 0;
    virtual void setOptions(AgObjectPtr value, int row, const std::string & field) = 0;
    virtual void setSelectionValues(AgObjectPtr value, int row, const std::string & field) = 0;
    virtual void setHidden(AgObjectPtr value, int row, const std::string & field) = 0;
    virtual void setEditorEnabled(bool enabled) = 0;

};
