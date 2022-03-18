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
	Circle c1;	//°´Ã¼º¯¼ö

	Circle* p1 = new Circle;
	Circle* p2 = new Circle();

	Circle* p3;
	p3 = new Circle(10);

	cout << p1->getRadius() << endl;
	cout << p2->getRadius() << endl;
	cout << p3->getRadius() << endl;

	Circle* p4 = &c1;
	cout << p4->getRadius() << endl;

	Circle* p5 = new Circle(c1);
	cout << p5->getRadius() << endl;

	delete p1;
	delete p2;
	delete p3;
	delete p5;

	return 0;
}