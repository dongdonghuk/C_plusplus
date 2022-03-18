#include <iostream>
using namespace std;

class Counter
{
private:
	int value2 = 100;

public:				//외부접근을 허락

	int value;

	void Increment()
	{
		value++;		//내부접근
		value2++;
	}

	int getValue()
	{
		return value2;		//내부접근
	}
};


int main()
{
	Counter cnt;

	cnt.value = 1;		//외부접근
	cnt.Increment();	//외부접근

	cout << "cnt.value : " << cnt.value << endl;	//외부접근

	//cout << "cnt.value2 : " << cnt.value2 << endl;	//내부접근 변수라 접근X

	cout << "cnt.value : " << cnt.getValue() << endl;	


	return 0;
}