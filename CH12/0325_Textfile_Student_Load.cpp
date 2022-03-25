#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20], dept[30];
	int sid;

	ifstream fin;
	fin.open("student.txt");

	if (!fin)
	{
		cout << "파일열기 실패 !!!" << endl;
		return -1;
	}

	fin >> sid;
	fin >> name;
	fin >> dept;

	fin.close();

	cout << sid << ", " << name << ", " << dept << endl;

	return 0;
}