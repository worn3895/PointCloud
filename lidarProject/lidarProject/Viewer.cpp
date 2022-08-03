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

//mPoints->�� ������ ����Ǿ��ִ� �����͵��� ȭ�鿡 ����ϴ� �Լ��� �ۼ��Ͻÿ�
void Viewer::tem2DViewer()
{
	int MAP[size][size] = { 0, };//���̴� �νĹ����� �ִ�
	int scaling = 100; // Scaling ����
	_msize(mPoints);
	for (int i = 0; i < size; i++) { // mPoints�� Example
		mPoints[i].setX(i);
		mPoints[i].setY(i);
	}
	for (int i = 0; i < mSize; i++) { // Scaling �۾�
		mPoints[i].setPoint(mPoints[i].getX() / scaling, mPoints[i].getY() / scaling);
	}	
	for (int i = 0; i < mSize; i++) { // mPoints�� ��ǥ���� �о� MAP�� ǥ���ϴ� �۾�
		MAP[mPoints[i].getX()][mPoints[i].getY()] = 1;
	}

	for (int y = 0; y < size; y++) // ȭ�� ���
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