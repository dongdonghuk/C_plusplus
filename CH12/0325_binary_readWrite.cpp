#include <iostream>
#include <fstream>

// "c:\\windows\\system.ini" ������ "student.txt"


using namespace std;

int main()
{

	const char* file1 = "c:\\windows\\system.ini";
	ifstream fin(file1, ios::binary);

	if (!fin)
	{
		cout << "���Ͽ��� ���� !!" << endl;
		return -1;
	}

	int count = 0;
	char buf[100];

	while (!fin.eof())	// ���� ���̸� true ��ȯ
	{
		fin.read(buf, 100);
		int n = fin.gcount();
		//cout.write(buf, n);		//�������� ��½ÿ��� write �Լ��� ����Ͽ��� �Ѵ�
		buf[n - 1] = '\0';
		cout << buf << endl;

		count += n;
	}

	cout << "���� ����Ʈ �� : " << count << endl;

	fin.close();


	return 0;
}