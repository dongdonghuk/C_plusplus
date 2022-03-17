#include <iostream>
using namespace std;

int main()
{
    int salary = 3800000;
    //      참조자      참조할 변수
    int& r_salary = salary;

    cout << salary << "," << r_salary << endl;

    r_salary += 200000;
    cout << salary << "," << r_salary << endl;
    cout << &salary << "," << &r_salary << endl;

    int* p1 = &salary;
    cout << *p1 << "," << &p1 << "," << p1 << endl;

    //참조자는 반드시 초기화
    //참조자는 반드시 초기화 해야하지만 상수화 시키면 가능
    const int &n3 = 200;

    return 0;
}