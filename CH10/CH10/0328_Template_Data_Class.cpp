#include <iostream>
using namespace std;

template<typename T>
class Data
{
private:
	T data;
public:
	Data(T n)
	{
		data = n;
	}

	void setData(T n)
	{
		data = n;
	}
	T getData()
	{
		return data;
	}
};

int main()
{
	//클래스 템플릿 호출 시 자료형을 생략할 수 없다
	Data<int> d1(100);
	d1.setData(150);
	cout << "d1.getData(): " << d1.getData() << endl;

	Data<double> d2(1.5);
	cout << "d2.getData(): " << d2.getData() << endl;

	Data<char> d3('A');
	cout << "d3.getData(): " << d3.getData() << endl;



	return 0;
}