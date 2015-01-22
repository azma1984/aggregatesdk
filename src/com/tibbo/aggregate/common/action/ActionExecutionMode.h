#pragma once

class ActionExecutionMode
{

public:
    static const int NORMAL;
    static const int REDIRECT;
    static const int BATCH;
    static const int TEST;
    static const int HEADLESS;

private:
    int code;

public:
	int getCode();

	ActionExecutionMode(int code1);

};

#endif
