#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;


public:
	Circle() : Circle(5)	// 이웃 생성자 호출 : 생성자 중 인자를 사용할 오버로딩된 메서드를 호출하고 들어온다
	{
		cout << "Circle()" << endl;
	}

	Circle(int r) : radius(r)	// 콜론 초기화, (생성자만 사용가능)
	{
		cout << "Circle(int r)" << endl;
		//radius = r;
	}

	int getRadius() { return radius; }

};

int main()
{
	Circle donut; 
	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "반지름 : " << pizza.getRadius() << endl;


	return 0;
}