#include <iostream>
using namespace std;

class AAA
{
private:
	int value;

public:
	
	//AAA(int n)
	explicit AAA(int n) // 명시적 호출만 허용한다
	{
		value = n;
	}

	void showData()
	{
		cout << "value: " << value << endl;
	}
};


int main()
{
	int n1 = 20;	//C style 초기화
	int n2(30);		//C++ style 초기화
	cout << "n1: " << n1 << ", n2: " << n2 << endl;

	AAA a1(100);	//C++ style 초기화
	a1.showData();

	/*
	AAA a2 = 200;	//C style 초기화, 묵시적으로 C++ style로 변환된다
	a2.showData();
	*/

	return 0;
}