#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;	// 1~100 사이만 저장
public:
	int getX() { return x; }
	int getY() { return y; }

	bool setX(int a) 
	{	
		if (a < 1 || a > 100)
		{
			cout << "x 좌표 오류, 좌표는 1~100 사이 확인." << endl;
			return false;
		}
		x = a; 
		return true;
	}
	bool setY(int b) 
	{ 
		if (b < 1 || b > 100)
		{
			cout << "x 좌표 오류, 좌표는 1~100 사이 확인." << endl;
			return false;
		}
		y = b;
		return true;
	}

	void showXY()
	{
		cout << "좌표 x : " << x << ", 좌표 y: " << y << endl;
	}
};

class A
{
public:
	void print(Point &refP)
	{
		cout << "class A, print(Point &refP) " << endl;
		refP.showXY();
	}

};	//캡슐화에 위배되는 코딩, 한 class내에서 사용되는 변수,메서드들은 다른 클래스에서 사용하지 않도록 주의


int main()
{
	int x, y;
	cout << "좌표 x,y ?(1~100) ";
	cin >> x >> y; //10, 30

	Point p1;
	bool b1, b2;

	b1 = p1.setX(x);
	b2 = p1.setY(y);

	if (b1 && b2)
	{
		cout << "입력된 좌표를 사용하여 image 작업시작." << endl;
		//p1.showXY();
		cout << "x : " << p1.getX() << ", y : " << p1.getY() << endl;
	}
	else
	{
		cout << "좌표가 바르지 않습니다" << endl;
		p1.showXY();
		return main();
	}

	A tmp;
	tmp.print(p1);

	return 0;
}
