#include "expression/DefaultReferenceResolver.h"

#include "context/ContextUtils.h"
#include "context/DefaultRequestController.h"
#include "datatable/DataTableConstruction.h"
#include "datatable/TableFormat.h"
#include "resource/ResourceManager.h"

// Various properties
const std::string DefaultReferenceResolver::ROW = "row";
const std::string DefaultReferenceResolver::DESCRIPTION = "description";

// Context properties
const std::string DefaultReferenceResolver::NAME = "name";
const std::string DefaultReferenceResolver::ICON = "icon";
const std::string DefaultReferenceResolver::TYPE = "type";

// Properties of variable definition
const std::string DefaultReferenceResolver::READABLE = "readable";
const std::string DefaultReferenceResolver::WRITABLE = "writable";

// Properties of table
const std::string DefaultReferenceResolver::RECORDS = "records";

// Properties of table field
const std::string DefaultReferenceResolver::FORMAT = "format";
const std::string DefaultReferenceResolver::HELP = "help";
const std::string DefaultReferenceResolver::OPTIONS = "options";
const std::string DefaultReferenceResolver::SELECTION_VALUE_DESCRIPTION = "svdesc";


DefaultReferenceResolver::DefaultReferenceResolver() 
    : AbstractReferenceResolver()
{

}

DefaultReferenceResolver::DefaultReferenceResolver(DataTablePtr defaultTable)
    : AbstractReferenceResolver()
{
    setDefaultTable(defaultTable);
}

//TODO: возвращаемое значение boost::shared_ptr<void*>
boost::shared_ptr<void*> DefaultReferenceResolver::resolveReference(
        boost::shared_ptr<Reference> ref,
        boost::shared_ptr<EvaluationEnvironment> environment) /* throws(SyntaxErrorException, EvaluationException, ContextException) */
{
    if (ref->getProperty() != 0 && ROW == ref->getProperty()) {
        return getDefaultRow();
    }
    boost::shared_ptr<Context> con = getContext(ref);
    boost::shared_ptr<DataTable> table = getDefaultTable();
    std::string field = ref->getField();
    if (ref->getEntity() != 0) {
        if (con != 0) {
            if (field.length() == 0) {
                if (DESCRIPTION == ref->getProperty()) {
                    return resolveEntityDescription(ref, con);
                }

                if (ref->getEntityType() == ContextUtils::ENTITY_VARIABLE) {
                    VariableDefinition* vd = con->getVariableDefinition(ref->getEntity());
                    if (vd == 0) {
                        //TODO: exception
                        //throw IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }

                    if (READABLE == ref->getProperty()) {
                        return vd->isReadable();
                    }
                    if (WRITABLE == ref->getProperty()) {
                        return vd->isWritable();
                    }
                    if (ICON == ref->getProperty()) {
                        //TODO: ResourceManager
                        //return ResourceManager::getImageIcon(vd->getIconId());
                    }
                }
            }else {
                TableFormat* rf;
                if (ref->getEntityType() == ContextUtils::ENTITY_VARIABLE) {
                    VariableDefinition* vd = con->getVariableDefinition(ref->getEntity());
                    if (vd == 0) {
                        //TODO: exception
                        //throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }
                    rf = vd->getFormat();
                }else if (ref->getEntityType() == ContextUtils::ENTITY_FUNCTION) {
                    FunctionDefinition* fd = con->getFunctionDefinition(ref->getEntity());
                    if (fd == 0) {
                        //TODO: exception
                        //throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
                    }
                    rf = fd->getOutputFormat();
                }else {
                    //TODO: exception
                    //throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
                }

                FieldFormat* ff;
                if (rf != 0) {
                    ff = rf->getField(ref->getField());
                }

                if (ff != 0) {
                    if (FORMAT == ref->getProperty()) {
                        return ff;
                    }
                    if (DESCRIPTION == ref->getProperty()) {
                        return ff->getDescription();
                    }
                    if (HELP == ref->getProperty()) {
                        return ff->getHelp();
                    }
                }
            }

            table.reset( resolveEntity(ref, con, environment) );
        }else {
            //TODO: exception
            //throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprDefConNotDefined"_j), new voidArray({ref)->getEntity())})));
        }
    }else {
        if(con != 0) {
            if(ref->getProperty().length() != 0) {
                if (NAME == ref->getProperty()) {
                    return con->getName();
                }
                if (DESCRIPTION == ref->getProperty()) {
                    return con->getDescription();
                }
                if (ICON == ref->getProperty()) {
                    return ResourceManager::getImageIcon(con->getIconId());
                }
                if (TYPE == ref->getProperty()) {
                    return con->getType();
                }
            }
            if (ref->getContext().length() != 0) {
                return con->getPath();
            }
        }
    }

    if (table == 0) {
        //TODO: exception
        //throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprDefDataTableNotDefined"_j), new voidArray({field)})));
    }
    if ((field == 0) && (ref->getProperty().length() != 0) && (RECORDS == ref->getProperty())) {
        return table->getRecordCount();
    }

    if (field == 0) {
        return getDefaultTableAggregate(table);
    }

    FieldFormat* ff = table->getFormat()->getField(ref->getField());
    if(ref->getProperty().length() != 0) {
        if (FORMAT == ref->getProperty()) {
            return ff;
        }
        if (DESCRIPTION == ref->getProperty()) {
            return ff->getDescription();
        }
        if (HELP == ref->getProperty()) {
            return ff->getHelp();
        }
        if (OPTIONS == ref->getProperty()) {
            return ff->getSelectionValues();
        }
    }

    int row = getRow(ref, environment);
    if (table->getRecordCount() <= (row->intValue())) {
        //TODO: exception
        //throw new ::java::lang::IllegalStateException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprNonExistentRow"_j), new voidArray({row), table)->getRecordCount()))})))->append(u": "_j)
        //    ->append(table)->dataAsString())->toString());
    }
    //TODO: void*
    DataRecord* record = table->getRecord(row);
    void* value = record->getValue(field);
    if (ref->getProperty().length() != 0) {
        if ((SELECTION_VALUE_DESCRIPTION == ref->getProperty()) && ff->hasSelectionValues()) {
            auto const valueDesc = ff->getSelectionValues()->get(value);
            return valueDesc == 0 ? value : valueDesc;
        }
        if ((RECORDS == ref->getProperty()) && (value != NULL) && (dynamic_cast< DataTable* >(value) != NULL)) {
            return (dynamic_cast<DataTable*>(value))->getRecordCount();
        }
    }

    return value;
}

boost::shared_ptr<void> DefaultReferenceResolver::getDefaultTableAggregate(boost::shared_ptr<DataTable> table)
{
    return table;
}

int DefaultReferenceResolver::getRow(boost::shared_ptr<Reference> ref, boost::shared_ptr<EvaluationEnvironment> environment)
{
    if (ref->getRow() != 0) {
        return ref->getRow();
    }else {
        if ( (environment != 0) && (environment->getCause() != 0) && (environment->getCause()->getRow() != 0) ) {
            return environment->getCause()->getRow();
        }else {
            return getDefaultRow() != 0 ? getDefaultRow()->intValue() : 0;
        }
    }
}

std::string DefaultReferenceResolver::resolveEntityDescription(boost::shared_ptr<Reference> ref, boost::shared_ptr<Context> con) /* throws(IllegalStateException) */
{
    if (ref->getEntityType() == ContextUtils::ENTITY_VARIABLE) {
        VariableDefinition* vd = con->getVariableDefinition(ref->getEntity());
        if (vd == 0) {
            //TODO: exception
            //throw IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }

        return vd->getDescription();
    }else if (ref->getEntityType() == ContextUtils::ENTITY_FUNCTION) {
        FunctionDefinition* fd = con->getFunctionDefinition(ref->getEntity());
        if (fd == 0) {
            //TODO: exception
            //throw new ::java::lang::IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }

        return fd->getDescription();
    } else {
        //TODO: exception
        //throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
    }
}

std::list<boost::shared_ptr<Context>> DefaultReferenceResolver::getContexts(Reference* ref)
{
    if ((ref->getContext().length() != 0) && ContextUtils::isMask(ref->getContext())) {
        return ContextUtils::expandMaskToContexts(ref->getContext(), getContextManager(), getCallerController());
    }else {
        std::list<boost::shared_ptr<Context>> ls;
        boost::shared_ptr<Context> con = getContext(ref);
        if (con) {
            ls.push_back( con );
        }
        return ls;
    }
}

boost::shared_ptr<Context> DefaultReferenceResolver::getContext(Reference* ref)
{
    boost::shared_ptr<Context> con = getDefaultContext();
    if (ref->getContext().length() != 0) {
        if(ContextUtils::isRelative(ref->getContext()) && con != 0) {
            con.reset( con->get(ref->getContext(), getCallerController()) );
        }else if(getContextManager() != 0) {
            con.reset( getContextManager()->get(ref->getContext(), getCallerController()) );
        }else {
            con.reset();
        }

        if (con == NULL) {
            //TODO: exception
            //throw new ContextException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append(ref)->getContext())->toString());
        }
    }

    return con;
}

boost::shared_ptr<DataTable> DefaultReferenceResolver::resolveEntity(
    boost::shared_ptr<Reference> ref,
    boost::shared_ptr<Context> con,
    boost::shared_ptr<EvaluationEnvironment> environment) /* throws(ContextException, SyntaxErrorException, EvaluationException) */
{
    if (ref->getEntityType() == ContextUtils::ENTITY_VARIABLE) {
        VariableDefinition* vd = con->getVariableDefinition(ref->getEntity());
        if (vd == 0) {
            //TODO: exception
            //throw IllegalStateException(::java::text::MessageFormat::format(Cres::get())->getString(u"conVarNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        return con->getVariable(ref->getEntity(), getCallerController(), new DefaultRequestController(getEvaluator()));
    }else if(ref->getEntityType() == ContextUtils::ENTITY_FUNCTION) {
        FunctionDefinition* fd = con->getFunctionDefinition(ref->getEntity());
        if (fd == 0) {
            //TODO: exception
            //throw new ::java::lang::IllegalStateException(::jav::text::MessageFormat::format(Cres::get())->getString(u"conFuncNotAvailExt"_j), new voidArray({ref)->getEntity()), con)->getPath())})));
        }
        boost::shared_ptr<DataTable> parameters = DataTableConstruction::constructTable(ref->getParameters(),
                                                                                        fd->getInputFormat(),
                                                                                        getEvaluator(),
                                                                                        environment);
        return con->callFunction(ref->getEntity(), getCallerController(), new DefaultRequestController(getEvaluator()), parameters);
    } else {
        //TODO: exception
        //throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Illegal entity type: "_j)->append(ref)->getEntityType())->toString());
    }
}
