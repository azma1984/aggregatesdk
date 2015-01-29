#ifndef _VariableInfo_H_
#define _VariableInfo_H_

//#include "Cres.h"
//#include "context/VariableDefinition.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/DataTableBuilding.h"
//#include "datatable/TableFormat.h"
//#include "datatable/field/StringFieldFormat.h"

#include "util/Pointers.h"
//todo - class stub
//Singleton
class VariableInfo
{
 private:
   VariableInfo();
   ~VariableInfo();
   VariableInfo(VariableInfo const&);
   void operator=(VariableInfo const&);

   static TableFormatPtrFORMAT;

public:
    static DataTablePtr createInfoTable(VariableDefinitionPtr vd);


   static VariableInfo& getInstance()
    {
     static VariableInfo instance;
     return instance;
    }


	static TableFormat& getFORMAT();
};


#endif
