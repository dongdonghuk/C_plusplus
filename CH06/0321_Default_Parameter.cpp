#include <iostream>
using namespace std;

//����Ʈ �Ű����� ���, ������ �Լ� ����ο� ���, 
int BoxVolume(int length = 1, int width = 1, int height = 1);


int main()
{
	cout << "BoxVolume(3,3,3) : " << BoxVolume(3, 3, 3) << endl;
	cout << "BoxVolume(5,5) : " << BoxVolume(5,5) << endl;
	cout << "BoxVolume(7) : " << BoxVolume(7) << endl;
	cout << "BoxVolume(0) : " << BoxVolume() << endl;

	return 0;
}


int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
