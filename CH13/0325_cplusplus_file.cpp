#include <iostream>
using namespace std;

extern "C" char* getName();
extern "C" void Func(const char* msg);

int main()
{
	char* retName;

	Func("c++ 에서 C 함수 호출.");

	retName = getName();
	printf("name : %s \n", retName);

	return 0;
}
