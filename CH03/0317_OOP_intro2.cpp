#include <iostream>
using namespace std;

struct Account
{
	char accID[10];
	char passWd[10];
	char name[20];
	int balance;


	void Deposit(int money)
	{
		balance += money;
	}

	void WithDraw( int money)
	{
		if (money > balance)
		{
			cout << "�ܰ����!!, �����ܰ� : " << balance << endl;
			return;
		}
		balance -= money;
	}

};
// C++ ����ü : ���õ� �Լ����� �ϳ��� �η��� ������ �־� �ڷ����� �����


int main()
{
	Account p1 = { "1001", "1234", "kim", 1000 };

	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Deposit(10000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	p1.WithDraw(7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	p1.WithDraw(7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	p1.WithDraw(7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;



	return 0;
}