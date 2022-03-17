#include <iostream>
using namespace std;


// 함수 중복정의 (method overloading)
void MyFunc()
{
    cout << "void MyFunc()" << endl;
}

void MyFunc(int x)
{
    cout << "MyFunc(int x)" << x << endl;
}

void MyFunc(const char *str)
{
    cout << "MyFunc(const char *str)" << str << endl;
}

void MyFunc(int x, double y)
{
    cout << "MyFunc(int x, double y)" << x+y << endl;
}

int main()
{
    MyFunc();
    MyFunc(100);


    MyFunc("인피니트 헬스케어");
    MyFunc(100, 3.5);


    return 0;
}