#pragma once
#include "Controller.h"

class Viewer
{
public:
	Viewer();
	void Run();

private:
	int mSize;
	Controller* mController;
};

