//Door_Class.cpp
#include <iostream> 
using namespace std;

const int OPEN = 1;
const int CLOSE = 2;

class Door
{
private:
    int state;

public:

    Door() {}

    inline void Open();
    void Close();
    void ShowState();
};

//inline �Լ� ����
inline void Door::Open()
{
    state = OPEN;
}

void Door::Close()
{
    state = CLOSE;
}

void Door::ShowState()
{
    cout << "���� ���� ���� : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}

int main()
{
    Door d1;

    d1.Open();
    d1.ShowState();

    d1.Close();
    d1.ShowState();

    return 0;
}