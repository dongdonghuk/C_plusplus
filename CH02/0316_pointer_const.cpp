#include <iostream>
using namespace std;

int main()
{
    const int PI = 3.141592;    //변수를 상수화

    int num1= 100, num2 = 200;  // 포인터가 가르키는 값을 상수화

    const int* p1 = &num1;

    // *p1 = 150 불가능
    p1 = &num2; //가능

    cout << "*p1 : " << *p1 << endl;

    int * const p2 = &num2;
    *p2 = 250; //가능
    // p2 = &num1; //불가능
    cout << "*p2 : " << *p2 << endl;

    const int* const p3 = &num1;
    // *p3 = 250; //불가능
    // p3 = &num1; //불가능
    cout << "*p3 : " << *p3 << endl;




    return 0;
}