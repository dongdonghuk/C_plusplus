#include <iostream>
using namespace std;

class Counter
{
private:
	int value2 = 100;

public:				//�ܺ������� ���

	int value;

	void Increment()
	{
		value++;		//��������
		value2++;
	}

	int getValue()
	{
		return value2;		//��������
	}
};


int main()
{
	Counter cnt;

	cnt.value = 1;		//�ܺ�����
	cnt.Increment();	//�ܺ�����

	cout << "cnt.value : " << cnt.value << endl;	//�ܺ�����

	//cout << "cnt.value2 : " << cnt.value2 << endl;	//�������� ������ ����X

	cout << "cnt.value : " << cnt.getValue() << endl;	


	return 0;
}