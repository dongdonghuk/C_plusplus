//Door_Class.cpp
#include <iostream> 
using namespace std;
#include "0318_Door.h"


void Door::Close()
{
    state = CLOSE;
}

void Door::ShowState()
{
    cout << "현재 문의 상태 : ";
    cout << ((state == OPEN) ? "OPEN" : "CLOSE") << endl;
}
