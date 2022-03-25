#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const char* sour = "국화.jpg";
	const char* dest = "국화Copy.jpg";
	fstream fin(sour, ios::in | ios::binary);

	if (!fin)
	{
		cout << "국화.jpg열기 실패 !!" << endl;
		return -1;
	}

	fstream fout(dest, ios::out | ios::binary);

	if (!fout)
	{
		cout << "국화Copy.jpg열기 실패 !!" << endl;
		return -1;
	}

	int ch;

	while ((ch = fin.get()) != EOF)
	{
		fout.put(ch);
	}
	fin.close();
	fout.close();

	cout << "이진파일 복사." << endl;

	return 0;
}