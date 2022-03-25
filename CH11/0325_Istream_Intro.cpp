#include <cstdio>

namespace myStd
{
	class istream
	{
	public:
		istream &operator >> (char* str)
		{
			gets_s(str, 30);
			return *this;
		}

		istream& operator >> (char& ch)
		{
			scanf("%c%*c", &ch);
			return *this;
		}

		istream& operator >> (int& num)
		{
			scanf("%d%*c", &num);
			return *this;
		}

		istream& operator >> (double& dnum)
		{
			scanf("%lf%*c", &dnum);
			return *this;
		}
	};

	istream cin;
}

using namespace myStd;

int main()
{
	char msg[30], Ch;
	int Num;
	double dNum;

	printf("intput char ? ");
	cin >> Ch;

	printf("intput string ? ");
	cin >> msg;

	printf("intput int ? ");
	cin >> Num;

	printf("intput double ? ");
	cin >> dNum;


	printf("%c, %s, %d, %lf \n", Ch, msg, Num, dNum);


	printf("문자 문자열 정수 더블 입력? \n ");
	cin >> Ch >> msg >> Num >> dNum;
	printf("%c, %s, %d, %lf \n", Ch, msg, Num, dNum);


	return 0;
}