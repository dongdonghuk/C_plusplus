#include <iostream>
using namespace std;

struct RetValue
{
    int retValue1;
    int retValue2;
};

RetValue PlusMinus(int n1, int n2)
{
    RetValue tmp;

    tmp.retValue1 = n1 + n2;
    tmp.retValue2 = n1 - n2;

    return tmp;
}

int main()
{
    //구조체를 하나의 자료형으로 사용
    RetValue R;

    R = PlusMinus(100,30);

    cout << "100+30= " << R.retValue1 << endl;
    cout << "100-30= " << R.retValue2 << endl;

    return 0;
}