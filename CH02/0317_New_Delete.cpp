#include <iostream>
using namespace std;



int main()
{

	int* num = new int;
	int* N = new int(200);	// 메모리 할당과 동시에 초기화
	int* Array = new int[5];

	char* str = new char[20];

	*num = 100;
	strcpy(str, "Hello World.");
	*(Array + 0) = 10;
	*(Array + 1) = 20;

	cout << *num << endl;
	cout << str << endl;
	cout << Array[0] << ", " << Array[1] << endl;
	cout << Array[2] << ", " << Array[3] << endl;

	delete num;
	delete N;
	delete[] Array;
	delete[] str;

	num = NULL;
	N = NULL;
	Array = nullptr;
	str = nullptr;


	return 0;
}