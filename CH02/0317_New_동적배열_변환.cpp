#include <iostream>
using namespace std;

/*
������ �迭�� ���� �迭�� �Ҵ�޾� �����͸� �Է��� ��
�迭�� �ּҸ� ��ȯ�Ͽ� main()���� ����Ѵ�
*/

int* NumAdd(int size)
{
	int* arr = new int[size];
	int i;

	for (i = 0; i < size; i++)
	{
		cout << "������ �Է��ϼ��� :";
		cin >> *(arr + i);
	}

	return arr;

}

int main()
{
	int size;

	cout << "�Է��� ������ ��? ";
	cin >> size; //5


	//�����Ҵ�� �迭 ���
	int* arr = NumAdd(size);

	for (int i = 0; i < size; i++)
		cout << *(arr + i) << ", ";
	cout << endl;

	delete[] arr;
	arr = NULL;

	return 0;
}