#include <iostream>

using namespace std;

int divide(int a, int b);


int main()
{
	int a, b;

input:
	cout << "두 수를 입력 ? ";
	cin >> a >> b;


	try
	{
		cout << "a/b : " << divide(a, b) << endl;
	}
	catch (int exp)
	{
		cout << exp << "입력. 입력오류!!" << endl;
	}

	cout << "END." << endl;

	return 0;
}

int divide(int a,int b)
{
	if (b == 0)
		throw b;
	return a / b;
}