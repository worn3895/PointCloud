#pragma once
#include "Controller.h"
#include "Point.h"

class Viewer
{
public:
	Viewer();
	void Run();
	void tem2DViewer();

private:
	int mSize; 
	Controller* mController;
	Point *mPoints = new Point[mSize];
};