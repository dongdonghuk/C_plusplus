#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << "num : " << num << ", ref : " << ref << endl;
    cout << "*ptr : " << *ptr << ", *pref : " << *pref << endl;
    cout << "**dptr : " << **dptr << ", **dpref : " << **dpref << endl;

    const char* str  = "kingdom";
    const char* (&strRef)  = str;
    cout << "str : " << str << ", strRef : " << strRef << endl;

    return 0;
}