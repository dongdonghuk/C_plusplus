#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()	//생성자 : 멤버의 초기화가 목적
	{
		cout << "Circle()" << endl;
		radius = 0;
	}

	Circle(int r)	//int 인자로 갖는 생성자 //method overloading
	{
		cout << "Circle()" << endl;
		radius = r;
	}

	int getRadius()	{ return radius; }

	double getArea();	// 선언 필수
};

double Circle::getArea()
{
	return radius * radius * 3.15;
}

int main()
{
	Circle donut; //객체는 생성과 동시에 생성자 호출

	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "반지름 : " << pizza.getRadius() << endl;
	cout << "===============================" << endl;

	Circle c1;				//Circle()
	Circle c2(1);			//Circle(int r)
	Circle c3 = Circle();	//생성자 명시적 호출 : Circle()
	Circle c4 = Circle(3);	//생성자 명시적 호출 : Circle(int r)

	// Circle c5(); //함수 선언문


	return 0;
}