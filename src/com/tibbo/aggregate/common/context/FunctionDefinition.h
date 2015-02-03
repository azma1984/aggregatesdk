#ifndef FunctionDefinitionH
#define FunctionDefinitionH
#define BOOST_THREAD_USE_LIB
#include "AbstractEntityDefinition.h"

#include "context/FunctionImplementation.h"
#include "datatable/TableFormat.h"
#include "security/Permissions.h"
#include "context/EntityDefinition.h"
#include "util/Comparable.h"
#include "util/Cloneable.h"

class FunctionDefinition : public AbstractEntityDefinition, public Cloneable, public Comparable
{
 private:
	TableFormatPtr inputFormat;
    TableFormatPtr outputFormat;
	bool hidden;
    PermissionsPtr permissions;
    FunctionImplementationPtr implementation;
    bool concurrent;

    void init(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat, const std::string &description, const std::string &group);

public:
    TableFormatPtr getInputFormat();
    TableFormatPtr getOutputFormat();
    bool isHidden();
    PermissionsPtr getPermissions();
    FunctionImplementationPtr getImplementation();
    void setInputFormat(TableFormatPtr inputFormat);
    void setOutputFormat(TableFormatPtr outputFormat);
    void setHidden(bool hidden);
    void setPermissions(PermissionsPtr perms);
    bool isConcurrent();
    void setConcurrent(bool concurrent);
    void setImplementation(FunctionImplementationPtr implementation);
    FunctionDefinition* clone() const;
//    int compareTo(FunctionDefinition *d) const;
    int compareTo(Comparable *d) const;
    int hashCode();
    bool equals(FunctionDefinition* obj);

    FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat);
    FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat, const std::string &description);
    FunctionDefinition(const std::string &name, TableFormatPtr inputFormat, TableFormatPtr outputFormat, const std::string &description, const std::string &group);

};

#endif
