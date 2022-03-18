#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;	// 1~100 ���̸� ����
public:
	int getX() { return x; }
	int getY() { return y; }

	bool setX(int a) 
	{	
		if (a < 1 || a > 100)
		{
			cout << "x ��ǥ ����, ��ǥ�� 1~100 ���� Ȯ��." << endl;
			return false;
		}
		x = a; 
		return true;
	}
	bool setY(int b) 
	{ 
		if (b < 1 || b > 100)
		{
			cout << "x ��ǥ ����, ��ǥ�� 1~100 ���� Ȯ��." << endl;
			return false;
		}
		y = b;
		return true;
	}

	void showXY()
	{
		cout << "��ǥ x : " << x << ", ��ǥ y: " << y << endl;
	}
};

class A
{
public:
	void print(Point &refP)
	{
		cout << "class A, print(Point &refP) " << endl;
		refP.showXY();
	}

};	//ĸ��ȭ�� ����Ǵ� �ڵ�, �� class������ ���Ǵ� ����,�޼������ �ٸ� Ŭ�������� ������� �ʵ��� ����


int main()
{
	int x, y;
	cout << "��ǥ x,y ?(1~100) ";
	cin >> x >> y; //10, 30

	Point p1;
	bool b1, b2;

	b1 = p1.setX(x);
	b2 = p1.setY(y);

	if (b1 && b2)
	{
		cout << "�Էµ� ��ǥ�� ����Ͽ� image �۾�����." << endl;
		//p1.showXY();
		cout << "x : " << p1.getX() << ", y : " << p1.getY() << endl;
	}
	else
	{
		cout << "��ǥ�� �ٸ��� �ʽ��ϴ�" << endl;
		p1.showXY();
		return main();
	}

	A tmp;
	tmp.print(p1);

	return 0;
}
