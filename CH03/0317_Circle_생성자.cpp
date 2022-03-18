#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()	//������ : ����� �ʱ�ȭ�� ����
	{
		cout << "Circle()" << endl;
		radius = 0;
	}

	Circle(int r)	//int ���ڷ� ���� ������ //method overloading
	{
		cout << "Circle()" << endl;
		radius = r;
	}

	int getRadius()	{ return radius; }

	double getArea();	// ���� �ʼ�
};

double Circle::getArea()
{
	return radius * radius * 3.15;
}

int main()
{
	Circle donut; //��ü�� ������ ���ÿ� ������ ȣ��

	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "������ : " << pizza.getRadius() << endl;
	cout << "===============================" << endl;

	Circle c1;				//Circle()
	Circle c2(1);			//Circle(int r)
	Circle c3 = Circle();	//������ ����� ȣ�� : Circle()
	Circle c4 = Circle(3);	//������ ����� ȣ�� : Circle(int r)

	// Circle c5(); //�Լ� ����


	return 0;
}