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
	double GetArea();	// ���� �ʼ�
};

// class method �� ���� class::method()�� �ۼ�
// �ݵ�� class ���� ���� �ʼ�
double Circle::GetArea()
{
	return radius * radius * 3.15;
}

int main()
{
	Circle donut;

	donut.radius = 1;
	cout << "������ : " << donut.GetRadius() << endl;

	double area = donut.GetArea();
	cout << "���� : " << area << endl;

	Circle pizza;
	pizza.radius = 5;
	cout << "���� : " << pizza.GetArea() << endl;


	return 0;
}