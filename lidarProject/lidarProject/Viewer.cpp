using namespace std;
#include <iostream>
#include "Viewer.h"
Viewer::Viewer() 
{
	mSize = 100;
}

void Viewer::Run()
{
	tem2DViewer();
}

//mPoints->이 변수에 저장되어있는 포인터들을 화면에 출력하는 함수를 작성하시오
void Viewer::tem2DViewer()
{
	int MAP[size][size] = { 0, };//라이다 인식범위의 최댓값
	int scaling = 100; // Scaling 변수
	_msize(mPoints);
	for (int i = 0; i < size; i++) { // mPoints의 Example
		mPoints[i].setX(i);
		mPoints[i].setY(i);
	}
	for (int i = 0; i < mSize; i++) { // Scaling 작업
		mPoints[i].setPoint(mPoints[i].getX() / scaling, mPoints[i].getY() / scaling);
	}	
	for (int i = 0; i < mSize; i++) { // mPoints의 좌표값을 읽어 MAP에 표기하는 작업
		MAP[mPoints[i].getX()][mPoints[i].getY()] = 1;
	}

	for (int y = 0; y < size; y++) // 화면 출력
	{
		for (int x = 0; x < size; x++) {
			if (MAP[x][y] == 0) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}