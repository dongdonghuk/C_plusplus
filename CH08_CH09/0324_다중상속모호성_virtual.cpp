#include <iostream>
using namespace std;

class AAA
{
public:
    void string()
    {
        cout << "AAA : string() \n";
    }
};

class BBB : virtual public AAA
{
public:
    void string2()
    {
        cout << "BBB : string2() \n";
    }
};

class CCC : virtual public AAA
{
public:
    void string3()
    {
        cout << "CCC : string3() \n";
    }
};

class DDD : public BBB, public CCC
{
public:
    void showstring()
    {
        cout << "DDD : showstring() \n";
    }
};

int main()
{
    DDD d1;

    d1.string();
    d1.string2();
    d1.string3();

    return 0;
}