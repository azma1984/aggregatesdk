#pragma once

#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"


class ShowDiff : public GenericActionCommand
{

private:
    static const std::string CF_FIRST_FILE_TITLE;
    static const std::string CF_FIRST_FILE;
    static const std::string CF_SECOND_FILE_TITLE;
    static const std::string CF_SECOND_FILE;
    boost::shared_ptr<TableFormat> CFT_SHOW_DIFF_;
    std::string firstFileTitle;
    std::string secondFileTitle;
    std::string firstFile;
    std::string secondFile;

public: /* protected */
    DataTable* constructParameters();

public:
    ShowDiff();
    ShowDiff(const std::string& title, const std::string &_firstFileTitle, const std::string &_firstFile,
             const std::string& _secondFileTitle, const std::string &_secondFile);
    ShowDiff(const std::string& title, boost::shared_ptr<DataTable> parameters);

    boost::shared_ptr<TableFormat> CFT_SHOW_DIFF();
};
