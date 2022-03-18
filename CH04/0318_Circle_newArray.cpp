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
		//cout << "Circle(itn r)" << endl;
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

//N ���� ��ŭ Circle �迭�� �Ҵ�ް�, �������� �Է¹޴´�. �׸��� ��ü �迭�� ����� �ּ� ��ȯ
Circle* funCircle(int n) 
{
	Circle* p = new Circle[n];
	int R;

	for (int i = 0; i < n; i++)
	{
		cout << "������ : ";
		cin >> R;
		(p + i)->setRadius(R);
	}

	return p;
}


int main()
{
	int N;

	cout << "������ Circle ���� ? ";
	cin >> N;

	Circle* CircleP = funCircle(N);

	for (int i = 0; i < N; i++)
		cout << "Circle" << i << "���� ���� : " << CircleP[i].getArea() << endl;

	//�޸� ����
	delete[] CircleP;

	return 0;
}