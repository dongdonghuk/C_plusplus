#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//const char* file1 = "c:\\windows\\system.ini";
	const char* file = "student.txt";
	ifstream fin(file, ios::in);

	if (!fin)
	{
		cout << "���Ͽ��� ���� !!" << endl;
		return -1;
	}

	char ch;
	int cn = 0;

	while ((ch = fin.get()) != EOF)
	{
		cout << ch;
		cn++;
	}
	cout << "���� ����Ʈ �� : " << cn << endl;
	fin.close();


	cout << "���Ϻ��� !!" << endl;

	return 0;
}