#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	int GetRadius()
	{
		return radius;
	}
	double GetArea();	// 선언 필수
};

// class method 를 사용시 class::method()로 작성
// 반드시 class 내에 선언 필수
double Circle::GetArea()
{
	return radius * radius * 3.15;
}

int main()
{
	Circle donut;

	donut.radius = 1;
	cout << "반지름 : " << donut.GetRadius() << endl;

	double area = donut.GetArea();
	cout << "면적 : " << area << endl;

	Circle pizza;
	pizza.radius = 5;
	cout << "면적 : " << pizza.GetArea() << endl;


	return 0;
}