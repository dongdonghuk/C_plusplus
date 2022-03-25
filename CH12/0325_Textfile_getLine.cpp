#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file, ios::in);

	if (!fin)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}

	char buffer[100];

	while (fin.getline(buffer, 100))
	{
		cout << buffer << endl;
	}
	fin.close();

	cout << "================================ \n";

	const char* file2 = "student.txt";
	ifstream fin2(file2, ios::in);

	if (!fin2)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}

	string line;

	while (getline(fin2, line))
	{
		cout << line << endl;
	}
	fin2.close();

	return 0;
}