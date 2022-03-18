#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 20;

class Person
{
private:
	char name[SIZE] = "";
	char phone[SIZE] = "";
	int age = 0;

public:
	void ShowData();

	Person() : Person("","",0)
	{

	}

	Person(const char* _name, const char* _phone, int _age)
	{
		strcpy(name, _name);
		strcpy(phone, _phone);
		age = _age;
	}
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone" << phone << ", age" << age << endl;
}

int main()
{
	Person p1;

	p1.ShowData(); //가베지 출력

	Person  p3("KIM", "010-333-5555", 22);
	p3.ShowData();

	Person p4 = Person("LEE", "010-111-1234", 37);
	p4.ShowData();

	Person* p5 = new Person("HAN", "010-111-5674", 28);
	p5->ShowData();

	return 0;
}


