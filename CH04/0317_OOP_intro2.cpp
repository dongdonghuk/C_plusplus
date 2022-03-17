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
			cout << "잔고부족!!, 현재잔고 : " << balance << endl;
			return;
		}
		balance -= money;
	}

};
// C++ 구조체 : 관련된 함수들을 하나의 부류로 인정해 주어 자료형을 만든다


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