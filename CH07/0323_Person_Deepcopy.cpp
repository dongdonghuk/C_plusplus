#include<iostream>
using namespace std;


class Person
{
private:
	char* name;
	char* phone;
	int age = 0;
public:
	void ShowData();

	//3. 디폴트생성자 추가
	Person()
	{
		name = NULL;
		phone = NULL;
	}

	//2. 생성자 작성
	Person(const char* _name, const char* _phone, int _age)
	{
		cout << "Person(const char* _name, const char* _phone, int _age)" << endl;

		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);
		age = _age;
	}

	~Person()
	{
		cout << "~Person() " << endl;
		delete name;
		delete phone;
	}

	Person(const Person& ref)
	{
		cout << "Point(const Point& ref)" << endl;
		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);

		phone = new char[strlen(ref.phone) + 1];
		strcpy(phone, ref.phone);

		age = ref.age;

	}

	Person& operator=(const Person& ref)
	{
		cout << "Person& operator=(const Person& ref)" << endl;

		if (this->name != NULL)
		{
			delete[] this->name;
			delete[] this->phone;
		}

		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);

		phone = new char[strlen(ref.phone) + 1];
		strcpy(phone, ref.phone);

		age = ref.age;

		return *this;
	}

};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main()
{
	//1.생성자를 이용한 멤버초기화
	Person  p1("KIM", "010-333-5555", 22);
	p1.ShowData();

	Person p2 = p1;
	p2.ShowData();

	Person p3;
	p3 = p1;		//디폴트 대입연산자 호출
	p3.ShowData();

	cout << "=========================" << endl;

	Person p4("lee", "010-1234-5678", 27);
	p1 = p4;
	p1.ShowData();

	return 0;
}
