#include <iostream>
using namespace std;

struct Account
{
	char accID[10];
	char passWd[10];
	char name[20];
	int balance;
};
// ����ü ���� : ����ü�� ���õ� �����͸� ���� �� �ִ�. �׷��� �����͸� �����Ͽ� ����� ���ϴ� �Լ��� ���� �����Ͽ��� �Ѵ�.



void Deposit(Account& ref, int money)
{
	ref.balance += money;
}

void WithDraw(Account& ref, int money)
{
	if (money > ref.balance)
	{
		cout << "�ܰ����!!, �����ܰ� : " << ref.balance << endl;
		return;
	}
	ref.balance -= money;
}


int main()
{
	Account p1 = { "1001", "1234", "kim", 1000 };

	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	Deposit(p1, 10000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	WithDraw(p1, 7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	WithDraw(p1, 7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;

	WithDraw(p1, 7000);
	cout << p1.accID << ", " << p1.passWd << ", " << p1.name << ", " << p1.balance << endl;



	return 0;
}