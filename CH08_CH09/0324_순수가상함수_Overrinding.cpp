#include <iostream>
using namespace std;

//메서드 오버라이딩(overriding) : 함수 재정의
//메서드 오버로딩(overloading) : 함수 중복정의

class AAA
{
public:
	virtual void fct() = 0; //순수 가상함수
    void show()
    {
        cout << "AAA show()" << endl;
    }

};

class BBB : public AAA
{
public:
	virtual void fct()  //파생클래스는 반드시 순수 가상함수 구현해야한다
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	virtual void fct()  //파생클래스는 반드시 순수 가상함수 구현해야한다
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
    // AAA *a1 = new AAA; //추상클래스는 객체를 생성할 수 없다

    AAA *a2 = new BBB();
    a2->fct(); //bbb
    a2->show();

    AAA* a3 = new CCC();
    a3->fct();

    delete a2;
    delete a3;

    

    return 0;
}