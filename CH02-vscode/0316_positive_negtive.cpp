#include <iostream>
using namespace std;

bool IsPositive(int n)
{
    if (n >=0)
        return true;
    else
        return false;
}

int main()
{
    int N;

    cout << "정수 ? ";
    cin >> N;

     cout << (IsPositive(N) == true ? "Positive." : "Negative.") <<endl;


    return 0;
}