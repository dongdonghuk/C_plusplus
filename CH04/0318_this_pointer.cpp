#include <iostream>
using namespace std;

class Person
{
private:
	int age;
public:
	void ShowData()
	{
		cout << "age: " << age << endl;
	}

	Person* getThis()
	{
		return this;
	}

	Person getThis2()
	{
		this->age = 25;
		return *this;
	}

};


int main()
{
	Person* p1 = new Person();
	cout << "������ p1 : " << p1 << endl;
	cout << "p1 this  ������  : " << p1->getThis() << endl;

	Person* p2 = new Person();
	cout << "������ p2 : " << p2 << endl;
	cout << "p2 this  ������  : " << p2->getThis() << endl;

	cout << "��ü��ȯ" << endl;
	Person p3 = p2->getThis2();
	p2->ShowData();
	//p3.ShowData();

	delete p1;
	delete p2;

	p3.ShowData();


	Person per1;
	cout << "&per1 : " << &per1 << endl;
	cout << "per1.getThis() ������ : " << per1.getThis() << endl;



	return 0;
}