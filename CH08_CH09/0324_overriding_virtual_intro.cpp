#include <iostream>
using namespace std;

//메서드 오버라이딩(overriding) : 함수 재정의
//메서드 오버로딩(overloading) : 함수 중복정의

class AAA
{
public:
	virtual void fct()
	{
		cout << "class AAA fct()" << endl;
	}

};

class BBB : public AAA
{
public:
	virtual void fct()  //메서드 오버라이딩(재정의)
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	virtual void fct()  //메서드 오버라이딩(재정의)
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
    BBB *b1 = new BBB;
    b1->fct();
    b1->AAA::fct();
    cout << "=============" << endl;

    AAA *a1 = new BBB;
    a1->fct();

    AAA *a2 = new CCC;
    a2->fct();

    BBB* b2 = new CCC;
    b2->fct();

    AAA* a3 = b2;
    a3->fct();
    cout << "=============" << endl;

    AAA *a4 = new AAA;
    

    return 0;
}