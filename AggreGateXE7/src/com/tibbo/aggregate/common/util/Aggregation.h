#ifndef _AGGREGATION_H_
#define _AGGREGATION_H_

#include "../CRes.h"

class Aggregation
{
public:
	static int AVERAGE = 0;
	static int MINIMUM = 1;
	static int MAXIMUM = 2;
	static int SUMMATION = 3;
	static int FIRST = 4;
	static int LAST = 5;
	static int FIRST_DATE = 6;
	static int LAST_DATE = 7;
	static int TOTAL_COUNT = 8;
	static int VALID_COUNT = 9;
	static int MINIMUM_DATE = 10;
	static int MAXIMUM_DATE = 11;

	// TODO: можно оптимизироватьб при каждом обращении не заполнять map
	static std::map<int, std::string> getSelectionValues() {
		SELECTION_VALUES.clear();
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("average") ) );
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("minimum") ) );
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("maximum") ) );
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("summation") ) );
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("first") ) );
		SELECTION_VALUES.insert( std::pair<int, std::string>( AVERAGE, Cres.get().getString("last") ) );

		return SELECTION_VALUES;
	}
  
private:
	static std::map<int, std::string> SELECTION_VALUES;   
};

#endif