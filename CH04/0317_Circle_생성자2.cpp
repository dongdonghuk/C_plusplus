#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;


public:
	Circle() : Circle(5)	// �̿� ������ ȣ�� : ������ �� ���ڸ� ����� �����ε��� �޼��带 ȣ���ϰ� ���´�
	{
		cout << "Circle()" << endl;
	}

	Circle(int r) : radius(r)	// �ݷ� �ʱ�ȭ, (�����ڸ� ��밡��)
	{
		cout << "Circle(int r)" << endl;
		//radius = r;
	}

	int getRadius() { return radius; }

};

int main()
{
	Circle donut; 
	cout << "������ : " << donut.getRadius() << endl;

	Circle pizza(30);
	cout << "������ : " << pizza.getRadius() << endl;


	return 0;
}