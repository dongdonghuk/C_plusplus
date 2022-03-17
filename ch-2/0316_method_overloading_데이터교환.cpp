#include <iostream>
using namespace std;




int main()
{
    int num1 = 20, num2 = 30;
    swap(num1, num2);
    cout << num1 << ' ' << num2 << endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(ch1, ch2);
    cout << ch1 << ' ' << ch2 << endl;

    double db1 = 1.11, db2 = 2.22;
    swap(db1, db2);
    cout << db1 << ' ' << db2 << endl;
        

    return 0;
}