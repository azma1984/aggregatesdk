#ifndef _ShowDiff_H_
#define _ShowDiff_H_

#include <boost/shared_ptr.hpp>
#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class ShowDiff : public GenericActionCommand
{

private:
    static const std::string CF_FIRST_FILE_TITLE;
    static const std::string CF_FIRST_FILE;
    static const std::string CF_SECOND_FILE_TITLE;
    static const std::string CF_SECOND_FILE;
    boost::shared_ptr<TableFormat> CFT_SHOW_DIFF;
    std::string firstFileTitle;
    std::string secondFileTitle;
    std::string firstFile;
    std::string secondFile;

protected:
    void ctor();
    void ctor(const std::string& title, const std::string& _firstFileTitle, const std::string& _firstFile, const std::string& _secondFileTitle,
              const std::string& _secondFile);
    void ctor(const std::string& title, boost::shared_ptr<DataTable> parameters);
    void clinit();

public: /* protected */
    DataTable* constructParameters();

public:
    ShowDiff();
    ShowDiff(const std::string& title, const std::string &_firstFileTitle, const std::string &_firstFile,
             const std::string& _secondFileTitle, const std::string &_secondFile);
    ShowDiff(const std::string& title, boost::shared_ptr<DataTable> parameters);

};
#endif  //_ShowDiff_H_
