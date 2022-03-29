#include <iostream>
#include <cstdlib>

using namespace std;

const int SZ = 10;

class AutoArray
{
private:
	int idx;
	int *arrPtr;
public:
	AutoArray(int *ptr)
	{
		idx = 0;
		arrPtr = ptr;
	}

	~AutoArray()
	{
		delete[] arrPtr;
	}

	int getIdx()
	{
		return idx;
	}

	int& operator[](int index)
	{
		if (index < 0 || index >= SZ)
		{
			cout << "배열첨자 오류!!" << endl;
			exit(1);
		}
		idx = index;
		return arrPtr[index];
	}
};


int main()
{
	AutoArray arr(new int[10]);

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	arr[5] = 60;

	int idx = arr.getIdx();

	for (int i = 0; i <= idx; i++)
		cout << arr[i] << endl;

	return 0;
}

