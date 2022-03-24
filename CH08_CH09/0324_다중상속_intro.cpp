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

class BBB
{
public:
    void string()
    {
        cout << "BBB : string() \n";
    }
};

class CCC : public AAA, public BBB
{
public:
    void showString()
    {
        cout << "CCC : string() \n";
    }
};

int main()
{
    CCC c1;
    c1.AAA::string();
    c1.showString();

    return 0;
}