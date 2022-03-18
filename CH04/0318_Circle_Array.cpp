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
		radius = 1;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	Circle(int r)
	{
		cout << "Circle(itn r)" << endl;
		radius = r;
	}

	int getRadius()
	{
		return radius;
	}

	void setRadius(int r)
	{
		radius = r;
	}

	double getArea()
	{
		return radius * radius * 3.15;
	}


};


int main()
{
	Circle circleArray[3];	//��ü�迭

	circleArray[0].setRadius(10);
	(*(circleArray+1)).setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << circleArray[i].getRadius() << endl;

	Circle* p = circleArray;
	for (int i = 0; i < 3; i++)
	{
		cout << "���� : " << p->getArea() << endl;
		p++;
	}

	cout << "============================" << endl;

	Circle c1[2];  //���ȣ ������ 2��
	//Circle c2[3] = { 1,2,3 };	//Circle(int) ������ 3��
	Circle c2[3] = { Circle(1), Circle(2), Circle(3)};	//���� ����

	return 0;
}