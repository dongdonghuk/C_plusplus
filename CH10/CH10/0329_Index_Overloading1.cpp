#include <iostream>
#include <cstdlib>

using namespace std;

const int SZ = 4;

class Arr
{
private:
	int idx;
	int nArr[SZ];
public:
	Arr() : idx(0)
	{}

	int getIdx()
	{
		return idx;
	}

	int &operator[](int index)
	{
		if (index < 0 || index >= SZ)
		{
			cout << "배열첨자 오류!!" << endl;
			exit(1);
		}
		idx = index;
		return nArr[index];
	}
};


int main()
{
	Arr arr;
	//배열의 요소에 접근
	//arr.operator[](0)
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;
	//arr[4] = 500;

	int idx = arr.getIdx();
	for (int i = 0; i < idx; i++)
		cout << arr[i] << ", ";

	return 0;
}
