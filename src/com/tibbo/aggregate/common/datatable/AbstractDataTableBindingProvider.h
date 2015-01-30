#pragma once

#include "binding/AbstractBindingProvider.h"
#include "binding/ReferenceWriter.h"

//TODO:
class AbstractDataTableBindingProvider
    : public AbstractBindingProvider
{
private:
    std::map<ReferenceListenerPtr, ReferencePtr> listeners;
//    ::java::util::concurrent::locks::ReentrantReadWriteLock* listenersLock;

private:
    void writeToEditor(const std::string & property, void* value);
    void writeToField(int row, const std::string & field, const std::string & property, void* value) /* throws(BindingException) */;

public:
    int getListenerCount();
    std::map<ReferenceListenerPtr, ReferencePtr> getListeners();
//    ::java::util::concurrent::locks::ReentrantReadWriteLock* getListenersLock();
    void addReferenceListener(ReferencePtr ref, ReferenceListenerPtr listener) /* throws(BindingException) */;
    void removeReferenceListener(ReferenceListenerPtr listener);
    bool isLocalReference(ReferencePtr ref);

public: /* protected */
    void processBindings(const std::string & field, int record, bool startup);
    virtual ReferenceWriterPtr getExternalReferenceWriter() = 0;
    virtual void callReferenceChanged(ReferencePtr cause, int method, ReferenceListenerPtr listener) = 0;
    virtual void setEnabled(void* value, int row, const std::string & field) = 0/* throws(BindingException) */;
    virtual void setCellValue(void* value, int row, const std::string & field) = 0 /* throws(BindingException) */;
    virtual void setOptions(void* value, int row, const std::string & field) = 0/* throws(BindingException) */;
    virtual void setSelectionValues(void* value, int row, const std::string & field) = 0/* throws(BindingException) */;
    virtual void setHidden(void* value, int row, const std::string & field) = 0/* throws(BindingException) */;
    virtual void setEditorEnabled(bool enabled) = 0;

    AbstractDataTableBindingProvider();
    AbstractDataTableBindingProvider(ErrorCollectorPtr errorCollector);
};
