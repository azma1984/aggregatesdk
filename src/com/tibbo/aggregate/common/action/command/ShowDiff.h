#ifndef ShowDiffH
#define ShowDiffH
#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"

#include "action/ActionUtils.h"
#include "datatable/DataTable.h"

class ShowDiff : public GenericActionCommand
{

private:
    static const std::string CF_FIRST_FILE_TITLE;
    static const std::string CF_FIRST_FILE;
    static const std::string CF_SECOND_FILE_TITLE;
    static const std::string CF_SECOND_FILE;
    TableFormatPtr CFT_SHOW_DIFF_;
    std::string firstFileTitle;
    std::string secondFileTitle;
    std::string firstFile;
    std::string secondFile;

public:
    DataTablePtr constructParameters();

public:
    ShowDiff();
    ShowDiff(const std::string& title, const std::string &_firstFileTitle, const std::string &_firstFile,
             const std::string& _secondFileTitle, const std::string &_secondFile);
    ShowDiff(const std::string& title, DataTablePtr parameters);

    TableFormatPtr CFT_SHOW_DIFF();
};
#endif
