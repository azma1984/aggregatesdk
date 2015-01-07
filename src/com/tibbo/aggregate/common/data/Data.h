// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/Data.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"



class com::tibbo::aggregate::common::data::Data
    
    , public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{

public:
    typedef void super;

private:
    ::java::lang::Long* id;
    std::string* name;
    ::int8_tArray* preview;
    ::int8_tArray* data;
    std::map attachments;
protected:
    void ctor();
    void ctor(::int8_tArray* data);
    void ctor(std::string* name, ::int8_tArray* data);

public:
    void setPreview(::int8_tArray* preview);
    void setId(::java::lang::Long* id);
    void setData(::int8_tArray* data);
    void setBlob(::int8_tArray* blob);
    void setName(std::string* name);
    ::int8_tArray* getPreview();
    std::string* getName();
    ::java::lang::Long* getId();
    ::int8_tArray* getData();
    ::int8_tArray* getBlob();
    std::map getAttachments();
    ::int8_tArray* fetchData(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* cc) /* throws(ContextException) */;

private:
    int checksum(::int8_tArray* bytes);

public:
    std::string* toDetailedString();
    std::string* toString();
    std::string* toCleanString();
    Data* clone();
    bool equals(void* obj);
    void setAttachments(std::map attachments);

    // Generated
    Data();
    Data(::int8_tArray* data);
    Data(std::string* name, ::int8_tArray* data);
protected:
    Data(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
