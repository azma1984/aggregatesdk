// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionExecutionMode.java

#ifndef ActionExecutionModeH
#define ActionExecutionModeH

class ActionExecutionMode
{

public:
	static const int NORMAL =0;
    static const int REDIRECT = 1;
    static const int BATCH = 2;
    static const int TEST = 3;
    static const int HEADLESS = 4;

private:
    int code;

public:
	int getCode();

	ActionExecutionMode(int code1);

};

#endif
