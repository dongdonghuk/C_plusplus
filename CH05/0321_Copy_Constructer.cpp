#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point()
	{
		cout << "Point()" << endl;
	}

	Point(int _x, int _y)
	{
		cout << "Point(int _x, int _y)" << endl;
		x = _x, y = _y;
	}

	Point(const Point& ref)	// 복사 생성자
	{
		cout << "Point(const Point& ref)" << endl;
		x = ref.x;
		y = ref.y;
	}

	void showData()
	{
		cout << x << ", " << y << endl;
	}

};


int main()
{
	Point p1(10, 20);

	// 객체가 생성과 동시에 객체로 초기화 될 때 복사생성자 호출
	Point p2(p1);
	p2.showData();


	return 0;
}