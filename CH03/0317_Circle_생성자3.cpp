#include <iostream>
using namespace std;

class Circle
{
private:
	int radius = 0; //초기화 ( 이런방식은 잘 사용하지 않는다)


public:
	Circle()	// 디폴트 생성자는 사용자 정의 생성자가 없을 때 호출된다
	{
		cout << "Circle()" << endl;
	}

	Circle(int r)
	{
		cout << "Circle(int r)" << endl;
		radius = r;
	}

	int getRadius() { return radius; }

};


int main()
{
	Circle donut(10);
	cout << "반지름 : " << donut.getRadius() << endl;

	Circle pizza;
	cout << "반지름 : " << pizza.getRadius() << endl;



	return 0;
}



