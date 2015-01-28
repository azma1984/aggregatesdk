#ifndef LogRedirectingHandlerH
#define LogRedirectingHandlerH

//#include <java/util/logging/ConsoleHandler.h"


class LogRedirectingHandler : public ConsoleHandler
{
 private:
   //	const std::string & digRecordMessage(::java::util::logging::LogRecord* record); todo
 public:
	void publish(::java::util::logging::LogRecord* record);

  //	static ::org::apache::log4j::Logger* findCorrespondingLogger(const std::string & name, const std::string & fullName); todo
   //	static ::org::apache::log4j::Level* convertLogLevel(::java::util::logging::Level* level); todo

	LogRedirectingHandler();

};

#endif
