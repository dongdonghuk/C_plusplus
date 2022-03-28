//Template_print.cpp

#include <iostream>
using namespace std;

template <typename T>
void print(T* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << ", ";
    cout << endl;
}

//일반함수가 템플릿 함수보다 우선한다.

void print(char* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << (int)*(arr + i) << ", ";
    cout << endl;
}
int main()
{
    int x[5] = { 1, 2, 3, 4 ,5 };
    double d[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

    print(x, sizeof(x) / sizeof(x[0]));
    print(d, sizeof(d) / sizeof(d[0]));

    char c2[5] = { 'A', 'B', 'C', 'D', 'E' };
    print<char>(c2, sizeof(c2) / sizeof(c2[0]));

    char c1[5] = { 1,2,3,4,5 };
    print(c1, sizeof(c1) / sizeof(c1[0]));

    return 0;
}