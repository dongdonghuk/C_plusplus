#include <iostream>
using namespace std;

template <typename T>
int sizeOf(T x)
{
	return sizeof(x);
}

int sizeOf(const char* x)
{
	return strlen(x);
}

int main()
{
	int n = 100;
	double d = 3.9;

	cout << "sizeOf(n): " << sizeOf(n) << endl;
	cout << "sizeOf(n): " << sizeOf(d) << endl;

	const char* str = "hello world!!";
	cout << "sizeOf(n): " << sizeOf(str) << endl;



	return 0;
}