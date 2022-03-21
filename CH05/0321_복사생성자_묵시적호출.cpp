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
		cout << "Simple1(SoSimple tmp) ��ü�� ���ڷ� ����" << endl;
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
		return *this;	//this�� ��ȯ�Ͽ� �ڱ��ڽ��� ȣ���� �޼��� �Լ��� �ٷ� ����� �� �ִ�
	}
};

int main()
{
	SoSimple obj(2700000);

	// 1. ��ü�� ������ ���ÿ� ��ü �ʱ�ȭ �ɶ�
	SoSimple obj2(obj);
	obj.showData();
	cout << "===============================" << endl;

	// 2. ��ü�� �Լ��� ���ڷ� ���� �ɶ� ��������ڰ� �ҷ�������
	obj.Simple1(obj2);
	cout << "===============================" << endl;

	// 3. ��ü�� ��ȯ�� ��
	SoSimple obj3 = obj.Simple2();

	obj.AddSudang(200000).showData();
	//obj.showData();

	return 0;
}