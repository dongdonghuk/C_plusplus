#include <iostream>
using namespace std;

class AppleSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:

	AppleSeller(int price, int num, int money) : APPLE_PRICE(price) // 상수는 :초기화를 무조건 해줘야 한다
	{
		numOfApples = num;
		myMoney = money;
	}

	void ShowSellerResult() const
	{
		cout << "판매할 사과수량 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl;
	}

	int SaleApples(int money)
	{
		int n = money / APPLE_PRICE;

		if (n > numOfApples)
		{
			cout << "남아있는 사과 수량은 " << numOfApples << endl;
			cout << "구매할 최대 금액은 " << numOfApples * APPLE_PRICE << endl;

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
		cout << "구매할 사과 개수 : " << numOfApples << endl;
		cout << "현재 잔액 : " << myMoney << endl;
	}

	//메세지 전달 : 객체간의 통신은 메세지에 의해서 의사전달을 하는데 이러한 메세지는 그 객체에 있는 메서드를 호출하는 것이다
	void BuyApples(AppleSeller &_seller, int money)
	{
		if (money <= 0)
		{
			cout << "구매금액은 0원 이상!!" << endl;
			return;
		}
		if (money > myMoney)
		{
			cout << "이 금액 이하로 구입하세요 " << myMoney << endl;
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