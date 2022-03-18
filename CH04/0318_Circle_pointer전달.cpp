#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()
	{
		radius = 0;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	Circle(int r)	
	{
		radius = r;
	}

	int getRadius() 
	{ 
		return radius; 
	}

	double getArea()
	{
		return radius * radius * 3.15;
	}


};


int main()
{
	Circle donut;
	Circle pizza(30);

	Circle* p = &donut;
	cout << "p->getArea() : " << p->getArea() << endl;

	p = &pizza;
	cout << "p->getArea() : " << p->getArea() << endl;

	return 0;
}