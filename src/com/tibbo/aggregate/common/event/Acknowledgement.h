#ifndef AcknowledgementH
#define AcknowledgementH

#include <string>
#include <boost/shared_ptr.hpp>

#include "util/Cloneable.h"
#include "util/Date.h"
#include "datatable/DataTableConversion.h"

#include "datatable/converter/DefaultFormatConverter.h"
#include "Cres.h"
#include "datatable/TableFormat.h"

class Acknowledgement : public Cloneable
{
private:
    static const std::string FIELD_AUTHOR;
    static const std::string FIELD_TIME;
    static const std::string FIELD_TEXT;
    static TableFormatPtr FORMAT_;
    std::string author;
    Date time;
    std::string text;

    void initFormat();

public:
    std::string getAuthor();
    std::string getText();
    Date getTime();
    void setAuthor(const std::string& author);
    void setText(const std::string& text);
    void setTime(Date time);
	TableFormatPtr getFormat();
    
    virtual Acknowledgement* clone() const;

    Acknowledgement();
    Acknowledgement(const std::string& author, Date time, const std::string& text);

    static TableFormatPtr FORMAT();
};

#endif
