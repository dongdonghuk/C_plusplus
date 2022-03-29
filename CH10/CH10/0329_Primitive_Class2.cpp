#include <iostream>
using namespace std;

template <class T>
class Type
{
private:
	T n;
public:
	Type(T _n)	//��ȯ������: ���ڸ� �ϳ� ���� ������
	{
		cout << "Type(T _n)" << endl;
		n = _n;
	}
	T getN()
	{
		return n;
	}
	//explicit operator T() //����� ȣ�⸸ ����
	operator T()
	{
		return n;
	}

};


int main()
{
	Type<int> data1(100);
	data1 = 200;
	int num = data1;
	cout << "num: " << num << endl;
	cout << "===================" << endl;

	Type<char> data2('A');
	char ch = data2;
	cout << "ch : " << ch << endl;
	cout << "====================" << endl;

	Type<double> data3(3.5);
	double dnum = (double)data3;
	cout << "dnum : " << dnum << endl;
	cout << "====================" << endl;

	Type<string> data4("multi campus");
	string str = data4;
	cout << "str : " << str << endl;
	cout << "====================" << endl;

	return 0;
}