#include <iostream>
using namespace std;

class Circle
{
private:
	int radius = 0; //�ʱ�ȭ ( �̷������ �� ������� �ʴ´�)


public:
	Circle()	// ����Ʈ �����ڴ� ����� ���� �����ڰ� ���� �� ȣ��ȴ�
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
	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza;
	cout << "������ : " << pizza.getRadius() << endl;



	return 0;
}



