#include <iostream>
using namespace std;

class SoSimple
{
private:
	int salary;
public:

	SoSimple(int sal)
	{
		salary = sal;
	}

	SoSimple(const SoSimple& ref)
	{
		salary = ref.salary;

		cout << "SoSimple(const SoSimple& ref) : " << salary << endl;
	}

	void showData()
	{
		cout << "salary : " << salary << endl;
	}

	void Simple1(SoSimple tmp)
	{
		cout << "Simple1(SoSimple tmp) 객체가 인자로 전달" << endl;
		tmp.showData();
	}

	SoSimple Simple2()
	{
		SoSimple tmp(350000);
		return tmp;
	}

	//void AddSudang(int sudang)
	//{
	//	salary += sudang;
	//}

	SoSimple &AddSudang(int sudang)
	{
		salary += sudang;
		return *this;	//this로 반환하여 자기자신을 호출해 메서드 함수를 바로 사용할 수 있다
	}
};

int main()
{
	SoSimple obj(2700000);

	// 1. 객체가 생성과 동시에 객체 초기화 될때
	SoSimple obj2(obj);
	obj.showData();
	cout << "===============================" << endl;

	// 2. 객체가 함수의 인자로 전달 될때 복사생성자가 불러와진다
	obj.Simple1(obj2);
	cout << "===============================" << endl;

	// 3. 객체가 반환될 때
	SoSimple obj3 = obj.Simple2();

	obj.AddSudang(200000).showData();
	//obj.showData();

	return 0;
}