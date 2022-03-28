#include <iostream>
using namespace std;

template <typename T>
T Add(T x, T y)
{
	return x + y;
}

//double Add(double x, double y)
//{
//	return x + y;
//}

int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(1.1, 2.1) << endl;

	return 0;
}