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


	//���Ŭ���� �����ʹ� �Ļ�Ŭ���� �����͸� ������ �� �ִ�
	Person* p1 = new Person();
	Person* p2 = new Student();			//UpCast
	Person* p3 = new PartTimestd();

	// ���Ŭ������ ��ü �����ʹ� ����Ű�� ��� ������� 
	// ���Ŭ���� ���� ����� ����� ������ �����ϴ�
	p1->Sleep();
	p2->Sleep();
	//p2->Study();  ����� �޾����� ��ü �����Ͱ� ���Ŭ���� Ÿ���̹Ƿ� ���� �Ұ�

	p3->Sleep();
	//p3->PartTimeStd::Work() ����� �޾����� ��ü�����Ͱ� ���Ŭ���� Ÿ���̹Ƿ� ���� �Ұ�

	Student* s1 = new PartTimestd();
	s1->Sleep();
	s1->Study();
	cout << "==========================" << endl;

	//�Ļ�Ŭ���� ��ü�����ʹ� ���Ŭ���� �ּҸ� ������ �� ����
	//PartTimestd *pt1 = new Person(); DownCast
	//PartTimeStd* pt1 = p1;

	//PartTimestd* pt1 = (PartTimestd*)p1; //����� ����ȯ
	PartTimestd* pt1 = (static_cast<PartTimestd*>(p1));	// ����� ����ȯ; C++ Style
	pt1->Sleep();
	pt1->Study();
	pt1->Work();
	
	cout << "==========================" << endl;



	return 0;
}