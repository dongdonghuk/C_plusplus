#include <iostream>
using namespace std;


//문자열을 역순으로 복사한다
char* ReverseString(const char* src, int len)
{
	char* dest = new char[len + 1];

	for (int i = 0; i < len; ++i)
		dest[i] = src[len - i - 1];
		
	dest[len] = NULL;

	return dest;
}



int main()
{
	char original[] = "Multi Campus";

	char* copy = ReverseString(original, strlen(original));

	cout << original << "\n";
	cout << copy << "\n";

	delete[] copy;
	copy = NULL;


	return 0;
}