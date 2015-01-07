// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/AbstractDataTableBindingProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/AbstractBindingProvider.h"



class com::tibbo::aggregate::common::datatable::AbstractDataTableBindingProvider
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
    void writeReference(::com::tibbo::aggregate::common::expression::Reference* ref, void* value) /* throws(BindingException) */;

private:
    void writeToEditor(std::string* property, void* value);
    void writeToField(int row, std::string* field, std::string* property, void* value) /* throws(BindingException) */;

public:
    int getListenerCount();
    std::map getListeners();
    ::java::util::concurrent::locks::ReentrantReadWriteLock* getListenersLock();
    void addReferenceListener(::com::tibbo::aggregate::common::expression::Reference* ref, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener) /* throws(BindingException) */;
    void removeReferenceListener(::com::tibbo::aggregate::common::binding::ReferenceListener* listener);
    bool isLocalReference(::com::tibbo::aggregate::common::expression::Reference* ref);

public: /* protected */
    void processBindings(std::string* field, int record, bool startup);
    ::com::tibbo::aggregate::common::binding::ReferenceWriter* getExternalReferenceWriter();
    void callReferenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, int method, ::com::tibbo::aggregate::common::binding::ReferenceListener* listener);
    void setEnabled(void* value, int row, std::string* field) /* throws(BindingException) */;
    void setCellValue(void* value, int row, std::string* field) /* throws(BindingException) */;
    void setOptions(void* value, int row, std::string* field) /* throws(BindingException) */;
    void setSelectionValues(void* value, int row, std::string* field) /* throws(BindingException) */;
    void setHidden(void* value, int row, std::string* field) /* throws(BindingException) */;
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
    void writeReference(int method, ::com::tibbo::aggregate::common::expression::Reference* destination, ::com::tibbo::aggregate::common::expression::Reference* cause, void* value, ::com::tibbo::aggregate::common::binding::ChangeCache* cache);

private:
    ::java::lang::Class* getClass0();
};
