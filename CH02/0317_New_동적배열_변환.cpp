#include <iostream>
using namespace std;

/*
정수형 배열을 동적 배열로 할당받아 데이터를 입력한 후
배열의 주소를 반환하여 main()에서 출력한다
*/

int* NumAdd(int size)
{
	int* arr = new int[size];
	int i;

	for (i = 0; i < size; i++)
	{
		cout << "정수를 입력하세요 :";
		cin >> *(arr + i);
	}

	return arr;

}

int main()
{
	int size;

	cout << "입력할 정수의 수? ";
	cin >> size; //5


	//동적할당된 배열 출력
	int* arr = NumAdd(size);

	for (int i = 0; i < size; i++)
		cout << *(arr + i) << ", ";
	cout << endl;

	delete[] arr;
	arr = NULL;

	return 0;
}