#include <iostream>
using namespace std;

class Type
{
private:
	int n;
public:
	Type(int _n)	//변환생성자: 인자를 하나 갖는 생성자
	{
		cout << "Type(int _n)" << endl;
		n = _n;
	}
	int getN()
	{
		return n;
	}
	//operator int()		//묵시적 호출만 가능
	explicit operator int() //명시적 호출만 가능
	{
		return n;
	}

};


int main()
{
	Type data1(100);

	//data1 = (Type)200;
	data1 = 200;
	cout << "data1.getN() : " << data1.getN() << endl;
	cout << "=======================" << endl;

	//int num = data1; //num = (int)data1;
	//int num = (int)data1; //C style
	int num = static_cast<int>(data1);	//C++ style

	cout << "num : " << num << endl;


	return 0;
}