#include <iostream>
#include <cstring>
using namespace std;


template <typename T1, typename T2>
T1 Add(T1 x, T2 y)
{
	return x + y;
}

template <typename T>
T Add(T x, T y)
{
	return x + y;
}

char* Add(char* sour, char* dest)
{
	int len = strlen(sour) + strlen(dest) + 1;
	char* ptr = new char[len];
	strcpy(ptr, sour);
	strcat(ptr, dest);

	return ptr;
}

char* Add(const char* sour, const char* dest)
{
	int len = strlen(sour) + strlen(dest) + 1;
	char* ptr = new char[len];
	strcpy(ptr, sour);
	strcat(ptr, dest);

	return ptr;
}

template <typename T>
T Add(T arr[],int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(1.5, 20) << endl;
	
	char s1[] = "king", s2[] = "dom";

	char* ref = Add(s1, s2);
	cout << ref << endl;

	char* ref2 = Add("multi", "campus");
	cout << ref2 << endl;

	int arr[5] = { 10,20,30,40,50 };
	cout << Add(arr, 5) << endl;

	double darr[5] = { 10.1,20.1,30.1,40.1,50.1 };
	cout << Add(darr, 5) << endl;

	delete ref;
	return 0;
}