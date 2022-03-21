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

	Point(const Point& ref)	// ���� ������
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

	// ��ü�� ������ ���ÿ� ��ü�� �ʱ�ȭ �� �� ��������� ȣ��
	Point p2(p1);
	p2.showData();


	return 0;
}