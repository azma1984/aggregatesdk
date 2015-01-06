#include "ChangeProcessor.h"
#include "math.h

int ChangeProcessor::GAUGE = 0;
int ChangeProcessor::COUNTER = 1;
int ChangeProcessor::DERIVE = 2;
int ChangeProcessor::ABSOLUTE = 3;
  
int ChangeProcessor::OUT_OF_RANGE_IGNORE = 0;
int ChangeProcessor::OUT_OF_RANGE_DISCARD = 1;
int ChangeProcessor::OUT_OF_RANGE_NORMALIZE = 2;

double ChangeProcessor::MAX_32_BIT = pow(2, 32);
double ChangeProcessor::MAX_64_BIT = pow(2, 64);


ChangeProcessor::ChangeProcessor(int type) 
{
	ChangeProcessor(type, OUT_OF_RANGE_IGNORE, null, null);
}


ChangeProcessor::ChangeProcessor(int type, int outOfRangeValuesHandling, double minValue, double maxValue) :
	lastUpdateTime(0)
{
	this->type = type;
    this->outOfRangeValuesHandling = outOfRangeValuesHandling;
    this->minValue = outOfRangeValuesHandling == OUT_OF_RANGE_IGNORE ? null : minValue;
    this->maxValue = outOfRangeValuesHandling == OUT_OF_RANGE_IGNORE ? null : maxValue;
}

// TODO: можно оптимизироватьб при каждом обращении не заполнять map
static std::map<int, std::string> ChangeProcessor::getSelectionValues() 
{
	SELECTION_VALUES.clear();
	SELECTION_VALUES.insert( std::pair<int, std::string>( GAUGE, Cres.get().getString("changeTypeGauge") ) );
	SELECTION_VALUES.insert( std::pair<int, std::string>( COUNTER, Cres.get().getString("changeTypeCounter") ) );
	SELECTION_VALUES.insert( std::pair<int, std::string>( DERIVE, Cres.get().getString("changeTypeDerive") ) );
	SELECTION_VALUES.insert( std::pair<int, std::string>( ABSOLUTE, Cres.get().getString("changeTypeAbsolute") ) );

	return SELECTION_VALUES;
}
   
  
double ChangeProcessor::process(long newTime, double newValue)
{
    if (newValue == 0.0) {
		return 0;
    }
    
    // Adding own protection from incorrect updates
    if (lastUpdateTime >= newTime && type != GAUGE) {
		return 0;
    }
    
    long oldTime = lastUpdateTime;
    double oldValue = lastValue;
    double updateValue = calculateUpdateValue(oldTime, oldValue, newTime, newValue);
    
    lastUpdateTime = newTime; // In RRD4J, this is performed from RrdDb.store(Sample)
    
    return updateValue;
}

  
double ChangeProcessor::calculateUpdateValue(long oldTime, Double oldValue, long newTime, Double newValue)
{
    double updateValue = 0;
    
    if (type == GAUGE) {
		updateValue = newValue;
    }else if (type == COUNTER) {
		if (newValue != null && oldValue != null) {
			double diff = newValue - oldValue;
			if (diff < 0) {
				diff += MAX_32_BIT;
			}

			if (diff < 0) {
				diff += MAX_64_BIT - MAX_32_BIT;
			}

			if (diff >= 0) {
				updateValue = 1000 * diff / (newTime - oldTime); // Units per second
			}
		}
    }else if (type == ABSOLUTE) {
		if (newValue != null) {
			updateValue = 1000 * newValue / (newTime - oldTime); // Units per second
		}
    }else if (type == DERIVE) {
		if (newValue != null && oldValue != null) {
			updateValue = 1000 * (newValue - oldValue) / (newTime - oldTime); // Units per second
		}
    }
    
    if (updateValue != null) {
		if (minValue != null && updateValue < minValue) {
			updateValue = outOfRangeValuesHandling == OUT_OF_RANGE_NORMALIZE ? minValue : null;
		}else if (maxValue != null && updateValue > maxValue) {
			updateValue = outOfRangeValuesHandling == OUT_OF_RANGE_NORMALIZE ? maxValue : null;
		}
    }
    
    lastValue = newValue;
    
    return updateValue;
}
