#include <iostream>
using namespace std;

int TestFunc(int&& param)	// R_value ������
{
	cout << "TestFunc(int&& param)"<< param++ << endl;
	return param;
}

int main()
{
	int x = 100;
	int& x1 = x;

	x1 = 150;


	cout << "x: " << x << ", x1: " << x1 << endl;

	//const int& a = 10 + 20;

	int&& y = 10 + 20; //R value ������
	y++;

	cout << "y: " << y << endl;

	int tmp = TestFunc(10 + 20);
	cout << "tmp: " << tmp << endl;

	return 0;
}