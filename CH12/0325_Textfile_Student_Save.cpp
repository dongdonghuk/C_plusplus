#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20], dept[30];
	int sid;

	cout << "���� ?";
	cin >> name;
	cout << "�й�(����) ? ";
	cin >> sid;
	cout << "�а� ?";
	cin >> dept;

	//ofstream fout;
	//fout.open("student.txt");

	ofstream fout("student.txt");

	if (!fout)
	{
		cout << "���Ͽ��� ����!!" << endl;
		return -1;
	}

	fout << sid << endl;
	fout << name << endl;
	fout << dept << endl;
	fout.close();

	cout << "student.txt save." << endl;

	return 0;
}