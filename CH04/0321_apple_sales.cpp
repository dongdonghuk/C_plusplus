#include <iostream>
using namespace std;

class AppleSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:

	AppleSeller(int price, int num, int money) : APPLE_PRICE(price) // ����� :�ʱ�ȭ�� ������ ����� �Ѵ�
	{
		numOfApples = num;
		myMoney = money;
	}

	void ShowSellerResult() const
	{
		cout << "�Ǹ��� ������� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl;
	}

	int SaleApples(int money)
	{
		int n = money / APPLE_PRICE;

		if (n > numOfApples)
		{
			cout << "�����ִ� ��� ������ " << numOfApples << endl;
			cout << "������ �ִ� �ݾ��� " << numOfApples * APPLE_PRICE << endl;

			return 0;
		}


		numOfApples -= n;
		myMoney += money;

		return n;
	}


};


class AppleBuyer
{
private:
	int numOfApples;
	int myMoney;

public:

	AppleBuyer(int money)
	{
		numOfApples = 0;
		myMoney = money;
	}

	void ShowBuyerResult() const
	{
		cout << "������ ��� ���� : " << numOfApples << endl;
		cout << "���� �ܾ� : " << myMoney << endl;
	}

	//�޼��� ���� : ��ü���� ����� �޼����� ���ؼ� �ǻ������� �ϴµ� �̷��� �޼����� �� ��ü�� �ִ� �޼��带 ȣ���ϴ� ���̴�
	void BuyApples(AppleSeller &_seller, int money)
	{
		if (money <= 0)
		{
			cout << "���űݾ��� 0�� �̻�!!" << endl;
			return;
		}
		if (money > myMoney)
		{
			cout << "�� �ݾ� ���Ϸ� �����ϼ��� " << myMoney << endl;
			return;
		}

		int ret = _seller.SaleApples(money);

		if (ret != 0)
		{
			numOfApples += ret;
			myMoney -= money;
		}
	}
};


int main()
{
	AppleSeller seller(1000, 20, 0);
	AppleBuyer buyer(50000);

	seller.ShowSellerResult();
	buyer.ShowBuyerResult();
	cout << "============================" << endl;

	buyer.BuyApples(seller, 2000);
	seller.ShowSellerResult();
	buyer.ShowBuyerResult();
	cout << "============================" << endl;

	buyer.BuyApples(seller, -3000);
	buyer.BuyApples(seller, 70000);
	cout << "============================" << endl;

	buyer.BuyApples(seller, 30000);
	buyer.ShowBuyerResult();
	seller.ShowSellerResult();


	return 0;
}