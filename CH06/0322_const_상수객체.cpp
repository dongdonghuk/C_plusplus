#include <iostream>
using namespace std;

class AAA
{
private:
    mutable int num;

public:
    AAA(int n) : num(n)
    {   }

        void showData()
    {
        cout << "void showData()" << endl;
        cout << "num:  " << num << endl;
    } 

    void showData() const
    {
        cout << "void showData() const" << endl;
        cout << "num:  " << num << endl;
    } 

    void Add(int n) const
    {
        num += n;
    }

};


int main()
{
    AAA a1(200);    //일반객체
    a1.showData();

    const AAA a2(100);  //상수객체
    a2.showData();  //상수 메서드만 사용할 수 있다

    a1.Add(50);
    a1.showData();

    a2.Add(50);
    a2.showData();

    return 0;
}