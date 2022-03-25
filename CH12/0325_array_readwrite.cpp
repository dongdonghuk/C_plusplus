#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int num[5] = { 10,20,30,40,50 }, tnum[5];
	double dnum[5] = { 1.1,2.1,3.1,4.1,5.1 }, tdnum[5];
	char msg[30] = "multi campus", tmsg[30];

	//array.dat, �������� ����
	//������ ���� tnum, tdnum, tmsg load
	// load�� �迭 ���

	//1. ��Ʈ�� ����

	const char* file = "data.dat";
	ofstream fout(file, ios::binary);
	if (!fout)
	{
		cout << "���Ͽ��� ���� !!" << endl;
		return -1;
	}


	//2. �������� save
	//ostream &write (const char* s, streamsize n); // ostream �Լ� ����

	fout.write((char*)num, sizeof(num));
	fout.write((char*)dnum, sizeof(dnum));
	fout.write(msg, sizeof(msg));

	fout.close();


	//3. �������� load

	ifstream fin(file, ios::binary);
	if (!fin)
	{
		cout << "���Ͽ��� ���� !!" << endl;
		return -1;
	}

	fin.read((char*)tnum, sizeof(tnum));
	fin.read((char*)tdnum, sizeof(tdnum));
	fin.read(tmsg, sizeof(tmsg));



	//4. �迭���

	for (int i = 0; i < 5; i++)
		cout << tnum[i] << ", ";
	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << tdnum[i] << ", ";
	cout << endl;

	cout <<  tmsg << endl;


	return 0;
}