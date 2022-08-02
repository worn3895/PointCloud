#pragma once
class Point
{
public:
	Point();
	void setPoint();
	int getX() const;
	int getY() const;
	void setX();
	void setY();

private:
	int mX;
	int mY;
};

