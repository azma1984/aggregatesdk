#ifndef ContextStatusH
#define ContextStatusH
#include <string>

class ContextStatus
{
private:
    int status;
    std::string  comment;

public:
    const std::string getComment() const
    {
        return comment;
    }

    int getStatus() const
    {
        return status;
    }

    void setComment(const std::string & comment)
    {
        this->comment = comment;
    }

    void setStatus(int status)
    {
        this->status = status;
    }

    ContextStatus() {}
    ContextStatus(int status, const std::string & comment)
    {
        this->status = status;
        this->comment = comment;
    }
};


#endif
