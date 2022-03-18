#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()
	{
		cout << "Circle()" << endl;
		radius = 0;
	}

	~Circle()		//�Ҹ���, ��ü�Ҹ� �� ����
	{
		cout << "Circle()" << radius << endl;

	}

	Circle(int r)	
	{
		cout << "Circle()" << endl;
		radius = r;
	}

	int getRadius() { return radius; }

	double getArea();
};

double Circle::getArea()
{
	return radius * radius * 3.15;
}

int main()
{
	Circle donut; 
	Circle pizza(30);

	return 0;
}