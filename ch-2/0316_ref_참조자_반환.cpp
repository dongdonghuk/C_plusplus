#include <iostream>
using namespace std;

int& refFuncOne(int &ref)
{
    ref++;
    return ref;
}

int refFuncTwo(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;
    int& num2 = refFuncOne(num1);
    num1++;
    num2++;

    cout << num1 << "," << num2 << endl;

    num1 = 1;
    int num3 = refFuncTwo(num1);
    num1++;
    num3++;
    cout << num1 << "," << num3 << endl;

    return 0;
}