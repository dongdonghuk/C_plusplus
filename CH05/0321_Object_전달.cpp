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
	}
	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	Circle(int r)
	{
		cout << "Circle(int)" << endl;

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

void Increase1(Circle cir)
{
	int r = cir.getRadius();
	cir.setRadius(r + 1);
}


void Increase2(Circle* cirP)
{
	int r = cirP->getRadius();
	cirP->setRadius(r + 2);
}

Circle Increase3()
{
	Circle tmp;
	tmp.setRadius(20);

	return tmp;
}

void Increase4(Circle &cir)
{
	int r = cir.getRadius();
	cir.setRadius(r + 2);
}

int main()
{
	Circle waffle(30);

	Increase1(waffle); // call by value
	cout << "waffle.getRadius() : " << waffle.getRadius() << endl;

	Increase2(&waffle); // call by reference
	cout << "waffle.getRadius() : " << waffle.getRadius() << endl; 

	Circle pizza = Increase3();	//객체 반환
	cout << "pizza.getRadius() : " << pizza.getRadius() << endl;

	Circle donut = pizza;	// 객체 대입
	cout << "donut.getRadius() : " << donut.getRadius() << endl;

	Increase4(waffle);	// 참조자 반환
	cout << "waffle.getRadius() : " << waffle.getRadius() << endl;



	return 0;
}