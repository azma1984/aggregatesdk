#ifndef _CHANGEPROCESSOR_H_
#define _CHANGEPROCESSOR_H_

#include <string>
#include <map>

/**
 * This class mimics the logic of org.rrd4j.core.Datasource
 */
class ChangeProcessor
{
public:
	static int GAUGE;
	static int COUNTER;
	static int DERIVE;
	static int ABSOLUTE;
  
	static int OUT_OF_RANGE_IGNORE;
	static int OUT_OF_RANGE_DISCARD;
	static int OUT_OF_RANGE_NORMALIZE;

	static double MAX_32_BIT;
	static double MAX_64_BIT;

	ChangeProcessor(int type);
	ChangeProcessor(int type, int outOfRangeValuesHandling, double minValue, double maxValue);

	double process(long newTime, Double newValue);	

	static std::map<int, std::string> getSelectionValues();
  
private:
	double calculateUpdateValue(long oldTime, Double oldValue, long newTime, double newValue);

	static std::map<int, std::string> SELECTION_VALUES;
	int type;
	int outOfRangeValuesHandling;
	double minValue;
	double maxValue;
  
	long lastUpdateTime;
	double lastValue;
};   

#endif
