#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const char* sour = "��ȭ.jpg";
	const char* dest = "��ȭCopy2.jpg";
	fstream fin(sour, ios::in | ios::binary);

	if (!fin)
	{
		cout << "��ȭ.jpg���� ���� !!" << endl;
		return -1;
	}

	fstream fout(dest, ios::out | ios::binary);

	if (!fout)
	{
		cout << "��ȭCopy.jpg���� ���� !!" << endl;
		return -1;
	}

	char buffer[1024];

	while (!fin.eof())
	{
		fin.read(buffer, 1024);
		int n = fin.gcount();
		fout.write(buffer, n);
	}
	fin.close();
	fout.close();

	cout << "�������� ����." << endl;

	return 0;
}