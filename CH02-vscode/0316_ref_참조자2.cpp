#include <iostream>
using namespace std;

int Add1(int &x, int &y)
{
    return x + y;
}

int Add2(const int &x,const int &y)
{
    return x + y;
}

int main()
{
    const int N = 100 + 200;
    const int& ref_N = 100 + 200; //임시 공간을 할당하여 저장

    // 상수를 참조하는 이유
    int n1 = 100, n2 = 200;


    int ret1 = Add1(n1, n2);
    cout << "Add1(n1, n2) :" << ret1 << endl;

    int ret2 = Add2(100, 200);
    cout << "Add2(n1, n2) :" << ret2 << endl;

    return 0;
}