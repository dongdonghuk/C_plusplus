#include <iostream>
#include <cstring>

using namespace std;

//const int SIZE = 20;

class Person
{
private:
	char* name;	//동적할당
	char* phone;
	int age = 0;

public:
	void ShowData();

	Person(const char* _name, const char* _phone, int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);

		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);

		age = _age;
	}

	~Person()
	{
		cout << "~Cirecle() age: " << age << endl;
		delete name;
		delete phone;
	}

};

void Person::ShowData()
{
	cout << "name: " << name << ", phone" << phone << ", age" << age << endl;
}

int main()
{
	Person p1("kim", "010-5115-3665",  28);


	return 0;
}


