#include <iostream>
#include <fstream>

// "c:\\windows\\system.ini" 파일을 "student.txt"


using namespace std;

int main()
{

	const char* file1 = "c:\\windows\\system.ini";
	ifstream fin(file1, ios::binary);

	if (!fin)
	{
		cout << "파일열기 실패 !!" << endl;
		return -1;
	}

	int count = 0;
	char buf[100];

	while (!fin.eof())	// 파일 끝이면 true 반환
	{
		fin.read(buf, 100);
		int n = fin.gcount();
		//cout.write(buf, n);		//이진파일 출력시에는 write 함수를 사용하여야 한다
		buf[n - 1] = '\0';
		cout << buf << endl;

		count += n;
	}

	cout << "읽은 바이트 수 : " << count << endl;

	fin.close();


	return 0;
}