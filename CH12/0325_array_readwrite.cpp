#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int num[5] = { 10,20,30,40,50 }, tnum[5];
	double dnum[5] = { 1.1,2.1,3.1,4.1,5.1 }, tdnum[5];
	char msg[30] = "multi campus", tmsg[30];

	//array.dat, 이진파일 저장
	//파일을 열어 tnum, tdnum, tmsg load
	// load된 배열 출력

	//1. 스트림 연결

	const char* file = "data.dat";
	ofstream fout(file, ios::binary);
	if (!fout)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}


	//2. 이진파일 save
	//ostream &write (const char* s, streamsize n); // ostream 함수 원형

	fout.write((char*)num, sizeof(num));
	fout.write((char*)dnum, sizeof(dnum));
	fout.write(msg, sizeof(msg));

	fout.close();


	//3. 이진파일 load

	ifstream fin(file, ios::binary);
	if (!fin)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}

	fin.read((char*)tnum, sizeof(tnum));
	fin.read((char*)tdnum, sizeof(tdnum));
	fin.read(tmsg, sizeof(tmsg));



	//4. 배열출력

	for (int i = 0; i < 5; i++)
		cout << tnum[i] << ", ";
	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << tdnum[i] << ", ";
	cout << endl;

	cout <<  tmsg << endl;


	return 0;
}