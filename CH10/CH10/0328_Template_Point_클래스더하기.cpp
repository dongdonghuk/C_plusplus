#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T x, y;
public:
	Point(T _x = 0, T _y = 0)
	{
		x = _x, y = _y;
	}

	Point(const Point& ref)
	{
		cout << "복사생성자" << endl;
		x = ref.x;
		y = ref.y;
	}

	void showData()
	{
		cout << "x: " << x << ", y: " << y << endl;
	}

	Point operator+(Point& ref)
	{
		return Point(x + ref.x, y + ref.y);
	}
};



template <typename T>
T Add(T data1, T data2)
{
	T temp;
	temp = data1 + data2;
	return temp;
}

int main()
{
	Point<int> p1(1, 1);
	Point<int> p2(2, 2);

	Point<int> p5 = Add(p1, p2);
	p5.showData();

	Point<double> p3(2.1, 2.1);
	Point<double> p4(5.1, 5.1);

	Point<double> p6 = Add(p3, p4);
	p6.showData();

	return 0;
}