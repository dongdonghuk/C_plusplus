#include <iostream>
using namespace std;

class BBB;  //전방선언 : AAA 클래스가 BBB클래스를 사용하므로 선언하여야 한다


class AAA
{
public:
    void setData(BBB &ref, int value);
    void getData(BBB &ref);
};

class BBB
{
private:
    int data = 0;
public:
    void showData()
    {
        cout << "showData()" << data << endl;
    }

    friend void AAA::setData(BBB &ref, int value);
    friend void AAA::getData(BBB &ref);
};

void AAA::setData(BBB &ref, int value)
{
    ref.data = value;
}

void AAA::getData(BBB &ref)
{
    cout << "ref.data : " << ref.data << endl;
}


int main()
{
    AAA a1;
    BBB b1;
    
    a1.setData(b1, 100);
    b1.showData();
    a1.getData(b1);

    return 0;
}