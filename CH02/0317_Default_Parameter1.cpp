#include <iostream>
using namespace std;
// ����Ʈ �Ű����� :: �־��� ���� ���� �� �⺻�� ����

int Add(int num1 ,int num2 = 1 ) //����Ʈ ���� (����Ʈ ���ڴ� �������� �;��Ѵ�)
{
	return num1 + num2;
}

int sub(int num1 = 1, int num2 = 1);	// ����Ʈ ���ڰ��� �ݵ�� ����ο��� �д�


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