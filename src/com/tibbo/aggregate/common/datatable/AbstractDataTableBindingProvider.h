// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include "binding/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/fwd-aggregate_sdk_5.11.00.h"
//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
#include "binding/AbstractBindingProvider.h"



class DateAbstractDataTableBindingProvider
    : public ::com::tibbo::aggregate::common::binding::AbstractBindingProvider
{

public:
    typedef ::com::tibbo::aggregate::common::binding::AbstractBindingProvider super;

private:
    std::map listeners;
    ::java::util::concurrent::locks::ReentrantReadWriteLock* listenersLock;
protected:
    void ctor();
    void ctor(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);

public:
    void writeReference(Reference* ref, void* value) /* throws(BindingException) */;

private:
    void writeToEditor(const std::string & property, void* value);
    void writeToField(int row, const std::string & field, const std::string & property, void* value) /* throws(BindingException) */;

public:
    int getListenerCount();
    std::map getListeners();
    ::java::util::concurrent::locks::ReentrantReadWriteLock* getListenersLock();
    void addReferenceListener(Reference* ref, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener) /* throws(BindingException) */;
    void removeReferenceListener(::com::tibbo::aggregate::common::binding::ReferenceListener* listener);
    bool isLocalReference(Reference* ref);

public: /* protected */
    void processBindings(const std::string & field, int record, bool startup);
    ::com::tibbo::aggregate::common::binding::ReferenceWriter* getExternalReferenceWriter();
    void callReferenceChanged(Reference* cause, int method, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener);
    void setEnabled(void* value, int row, const std::string & field) /* throws(BindingException) */;
    void setCellValue(void* value, int row, const std::string & field) /* throws(BindingException) */;
    void setOptions(void* value, int row, const std::string & field) /* throws(BindingException) */;
    void setSelectionValues(void* value, int row, const std::string & field) /* throws(BindingException) */;
    void setHidden(void* value, int row, const std::string & field) /* throws(BindingException) */;
    void setEditorEnabled(bool enabled);

    // Generated

public:
    AbstractDataTableBindingProvider();
    AbstractDataTableBindingProvider(::com::tibbo::aggregate::common::util::ErrorCollector* errorCollector);
protected:
    AbstractDataTableBindingProvider(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    void writeReference(int method, Reference* destination, Reference* cause, void* value, ::com::tibbo::aggregate::common::binding::ChangeCache* cache);

private:
    ::java::lang::Class* getClass0();
};
