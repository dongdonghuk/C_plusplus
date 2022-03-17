#include <iostream>
using namespace std;

namespace BestCom
{
    void simpleFunc()
    {
    void ShowMsg();  //함수 선언문

        cout << "BestCom simpleFunc() \n";
        ShowMsg();
    }
    void ShowMsg()
    {
        cout << "BestCom ShowMsg() \n";
    }
}

namespace ProgCom
{
    void simpleFunc()
    {
        cout << "ProgCom simpleFunc() \n";
    }    
}

using namespace BestCom;
using namespace ProgCom;

int main()
{
    // :: => 범위 지정 연산자
    // BestCom::ShowMsg();
    BestCom::simpleFunc();
    ProgCom::simpleFunc();
    ShowMsg();

    return 0;
}
