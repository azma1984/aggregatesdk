
#ifndef OutgoingAggreGateCommandH
#define OutgoingAggreGateCommandH
#include "AggreGateCommand.h"



class OutgoingAggreGateCommand : public AggreGateCommand
{

private:
    int paramCount;
    const std::string & id;

public:
    const std::string & header();
    const std::string & footer();

	OutgoingAggreGateCommandPtr addParam(const std::string & param);
    const std::string & getId();
    void constructReply(const std::string & id, const std::string & code);
    void constructReply(const std::string & id, const std::string & code, const std::string & message);
    void constructReply(const std::string & id, const std::string & code, const std::string & message, const std::string & details);
    void constructEvent(const std::string & context, const std::string & name, int level, const std::string & encodedDataTable, long  eventId, DatePtr creationtime, int  listener);

	OutgoingAggreGateCommand();

};

#endif
