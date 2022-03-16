#include <iostream>
using namespace std;


int CalSalary(int sales);   //선언을 생략할 수 없다

int main()
{
    int sales;

    while (1)
    {
        cout << "판매금액 : ";
        cin >> sales;

        if (sales == -1)
            break;

        cout << "이번달 급여" << CalSalary(sales) << "만원" << endl;
    }

    cout << "종료" <<  endl;

    return 0;
}

int CalSalary(int sales)
{
    return (int)(100 + sales * 0.12);
}