#ifndef VariableStatusH
#define VariableStatusH

//todo - class stub

#include <string>

class VariableStatus
{
 private:
    const std::string & status;
    const std::string & comment;

  public:
    const std::string & getComment();
    const std::string & getStatus();
    void setComment(const std::string & comment);
    void setStatus(const std::string & status);

    VariableStatus(const std::string & status, const std::string & comment);
};

#endif 