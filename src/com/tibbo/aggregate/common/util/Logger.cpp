#include "Logger.h"

#include <iostream>
#include <iomanip> 
#include <new>
#include <cstdlib>

// Definition (and initialization) of static attributes
Logger* Logger::m_ = 0;

#ifdef LOGGER_MULTITHREAD
pthread_mutex_t Logger::lock_ = PTHREAD_MUTEX_INITIALIZER;
inline void Logger::lock()
{
	pthread_mutex_lock(&lock_);
}

inline void Logger::unlock()
{
	pthread_mutex_unlock(&lock_);
}
#else
void Logger::lock(){}
void Logger::unlock(){}
#endif



/**
 * \brief Constructor.
 * It is a private constructor, called only by getInstance() and only the
 * first time. It is called inside a lock, so lock inside this method
 * is not required.
 * It only initializes the initial time. All configuration is done inside the
 * configure() method.
 */
Logger::Logger(): configured_(false)
{

	//gettimeofday(&initialTime_, NULL);
	time(&initialTime_);
}

/**
 * \brief Method to configure the logger. Called by the DEBUG_CONF() macro.
 * To make implementation easier, the old stream is always closed.
 * Then, in case, it is open again in append mode.
 * @param Name of the file used for logging
 * @param Configuration (i.e., log on file and on screen on or off)
 * @param Verbosity threshold for file
 * @param Verbosity threshold for screen
 */
void Logger::configure (const std::string&	outputFile,
			const loggerConf	configuration,
			const int		fileVerbosityLevel,
			const int		screenVerbosityLevel)
{
		Logger::lock();

		fileVerbosityLevel_ = fileVerbosityLevel;
		screenVerbosityLevel_ = screenVerbosityLevel;

		// Close the old stream, if needed
		if (configuration_&file_on)
			out_.close();

		time_t currTime;
		time(&currTime);
		struct tm *currTm = localtime(&currTime);

		// Compute a new file name, if needed
		if (outputFile != logFile_){
			std::ostringstream oss;			
			oss << outputFile	<< "_" <<
					currTm->tm_mday << "_" <<
					(currTm->tm_mon+1) << "_" <<
					(1900 + currTm->tm_year)/* << "_" <<
					currTm->tm_hour << "-" <<
					currTm->tm_min << "-" <<
					currTm->tm_sec*/ << ".log";
			logFile_ = oss.str().c_str();
		}

		// Open a new stream, if needed
		if (configuration&file_on)
			out_.open(logFile_.c_str(), std::ios::app | std::ios::out);

		/*out_ << std::endl << 
			"<<<<<<<< Log started " <<
			currTm->tm_mday << "_" <<
			currTm->tm_mon << "_" <<
			(1900 + currTm->tm_year) << "_" <<
			currTm->tm_hour << "-" <<
			currTm->tm_min << "-" << 
			currTm->tm_sec << 
			" >>>>>>>>" << std::endl;*/

		configuration_ = configuration;
		configured_ = true;

		Logger::unlock();
}

/**
 * \brief Destructor.
 * It only closes the file, if open, and cleans memory.
 */

Logger::~Logger()
{
	Logger::lock();
	if (configuration_&file_on)
		out_.close();
	delete m_;
	Logger::unlock();

}

/**
 * \brief Method to get a reference to the object (i.e., Singleton)
 * It is a static method.
 * @return Reference to the object.
 */
Logger& Logger::getInstance()
{
	Logger::lock();
	if (m_ == 0)
		m_ = new Logger;
	Logger::unlock();
	return *m_;
}


/**
 * \brief Method used to print messages.
 * Called by the DEBUG() macro.
 * @param Priority of the message
 * @param Source file where the method has been called (set equal to __FILE__
 * 	      by the DEBUG macro)
 * @param Source line where the method has been called (set equal to __LINE__
          by the macro)
 * @param Message
 */
void Logger::print(const unsigned int verbosityLevel,
					const std::string& file,
					const int line,
					const std::string& message)
{
	if (!configured_) {
			std::cerr << "ERROR: Logger not configured!" << 
				std::endl;
			return;
	}

	if ( !out_.is_open()) {		
		std::cerr << "Error opening file";
		return;
	}

	time_t currentTime;	
	time (&currentTime);

	char buffer [40];
	struct tm *currTm = localtime(&currentTime);
	strftime(buffer, sizeof(buffer) ,"%H:%M:%S", currTm);

	/*struct timeval currentTime;
	gettimeofday(&currentTime, NULL);*/
	Logger::lock();

/*
	if ((configuration_&file_on) && (verbosityLevel <= fileVerbosityLevel_))
			out_ << "DEBUG [" << file << ":" << line << "] @ "
				<< (currentTime - initialTime_)
				<< ":" << message << std::endl;
*/
	if ((configuration_&file_on) && (verbosityLevel <= fileVerbosityLevel_))
		//out_ /*<< std::cout << std::setfill ('0')*/ 
		//	<< currTm->tm_hour << std::setw (2)
		//	/*<< std::cout << std::setfill ('0')*/ 
		//	<< ":" << currTm->tm_min << std::setw (2)
		//	/*<< std::cout << std::setfill ('0')*/ 
		//	<< ":" << currTm->tm_sec << std::setw (2);
		out_ << buffer << " - " << message << std::endl;	

	if ((configuration_&screen_on) && (verbosityLevel <= screenVerbosityLevel_))
			std::cerr << "DEBUG [" << file << ":" << line << "] @ " <<
				(currentTime - initialTime_) <<
				" : " << message << std::endl;
	Logger::unlock();
}