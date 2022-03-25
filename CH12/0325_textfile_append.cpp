#include <iostream>
#include <fstream>

// "c:\\windows\\system.ini" 파일을 "student.txt"


using namespace std;

int main()
{

	const char* file1 = "c:\\windows\\system.ini";
	const char* file2 = "student.txt";
	//ifstream fin(file1);
	fstream fin(file1, ios::in);

	if (!fin)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}

	// ofstream fout(file2)
	fstream fout(file2, ios::out | ios::app);

	if (!fout)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}


	char ch;

	while ((ch = fin.get()) != EOF)
	{
		fout.put(ch);
	}

	fin.close();
	cout << "파일추가" << endl;
	fin.close();

	return 0;
}