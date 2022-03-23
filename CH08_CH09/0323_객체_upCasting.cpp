#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "Sleep()" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study()" << endl;
	}
};

class PartTimestd : public Student
{
private:
	int ptNum;
public:
	PartTimestd() : ptNum(100)
	{	}

	void Work()
	{
		cout << "Work() : " << ptNum << endl;
	}
};


int main()
{
	Person t1;
	Student t2;
	PartTimestd t3;

	t1.Sleep();
	t2.Sleep();
	t2.Study();
	t3.Sleep();
	t3.Study();
	t3.Work();
	cout << "==========================" << endl;


	//기반클래스 포인터는 파생클래스 포인터를 저장할 수 있다
	Person* p1 = new Person();
	Person* p2 = new Student();			//UpCast
	Person* p3 = new PartTimestd();

	// 기반클래스의 객체 포인터는 가르키는 대상에 상관없이 
	// 기반클래스 내에 선언된 멤버에 접근이 가능하다
	p1->Sleep();
	p2->Sleep();
	//p2->Study();  상속은 받았지만 객체 포인터가 기반클래스 타입이므로 접근 불가

	p3->Sleep();
	//p3->PartTimeStd::Work() 상속은 받았지만 객체포인터가 기반클래스 타입이므로 접근 불가

	Student* s1 = new PartTimestd();
	s1->Sleep();
	s1->Study();
	cout << "==========================" << endl;

	//파생클래스 객체포인터는 기반클래스 주소를 저장할 수 없다
	//PartTimestd *pt1 = new Person(); DownCast
	//PartTimeStd* pt1 = p1;

	//PartTimestd* pt1 = (PartTimestd*)p1; //명시적 형변환
	PartTimestd* pt1 = (static_cast<PartTimestd*>(p1));	// 명시적 형변환; C++ Style
	pt1->Sleep();
	pt1->Study();
	pt1->Work();
	
	cout << "==========================" << endl;



	return 0;
}