#include <iostream>

using namespace std;

int divide(int a, int b);


int main()
{
	int a, b;

input:
	cout << "�� ���� �Է� ? ";
	cin >> a >> b;

	try
	{
		cout << "a/b : " << divide(a, b) << endl;
	}

	catch(char exp)
	{
		cout << "���� �߻�!!" << endl;
	}
	cout << "END." << endl;

	return 0;
}

int divide(int a, int b)
{
	if (b == 0)
		throw b;
	return a / b;
}