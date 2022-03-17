#include <iostream>
using namespace std;
// 디폴트 매개변수 :: 주어진 값이 없을 때 기본값 적용

int Add(int num1 ,int num2 = 1 ) //디폴트 인자 (디폴트 인자는 마지막에 와야한다)
{
	return num1 + num2;
}

int sub(int num1 = 1, int num2 = 1);	// 디폴트 인자값은 반드시 선언부에만 둔다


int main()
{
	
	//cout << Add() << endl;
	cout << Add(10) << endl;
	cout << Add(10, 20) << endl;

	cout << sub() << endl;
	cout << sub(10) << endl;
	cout << sub(10, 20) << endl;

	return 0;
}

int sub(int num1, int num2)
{
	return num1 + num2;
}