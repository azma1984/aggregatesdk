#ifndef ThreadUtilsH
#define ThreadUtilsH

#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include <boost/shared_ptr.hpp>

class ThreadUtils
{
private:
    static TableFormatPtr FORMAT_STACK_;

public:
    /*
     * TODO: StackTraceElemen
    static DataTablePtr createStackTraceTable(vector<StackTraceElemen>& elements)
    {

    }
    /*

    static TableFormatPtr FORMAT_STACK()
    {
        if (!FORMAT_STACK_) {
            FORMAT_STACK_.reset(new TableFormat());
            /*
             * TODO: Cres::get()->getString
            FORMAT_STACK_->addField( std::string("<class><S><D=").append(Cres::get()->getString("class")).append(">") );
            FORMAT_STACK_->addField( std::string("<method><S><D=").append(Cres::get()->getString("method")).append(">") );
            FORMAT_STACK_->addField( std::string("<file><S><F=N><D=").append(Cres::get()->getString("file")).append(">") );
            FORMAT_STACK_->addField( std::string("<line><I><F=N><D=").append(Cres::get()->getString("line")).append(">") );
            */
        }

        return FORMAT_STACK_;
    }
};

#endif
