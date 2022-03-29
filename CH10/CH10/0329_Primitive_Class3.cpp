#include <iostream>
using namespace std;


class CTestData
{
private:
	int mData;
public:
	CTestData(int _data)
	{
		cout << "CTestData(int _data)" << endl;
		mData = _data;
	}
	~CTestData()
	{
		cout << "~CTestData()" << endl;
	}

	int getData()
	{
		return mData;
	}

	void setData(int _param)
	{
		mData = _param;
	}

	operator int()	//형변환 연산자
	{
		cout << "operator int()" << endl;
		return mData;
	}

	friend ostream& operator <<(ostream& os, CTestData& ref);

	CTestData(const CTestData& ref)
	{
		cout << "복사생성자" << endl;
		mData = ref.mData;
	}

};

//void TestFunc(int num)
//{
//	cout << "TestFunc(int num)" << endl;
//}

void TestFunc(CTestData param)
{
	cout << "void TestFunc(CTestData param)" << endl;
	cout << param.getData() << endl;
	param.setData(200);
	cout << param.getData() << endl;

}

ostream& operator <<(ostream& os, CTestData& ref)
{
	cout << "operator <<(ostream& os, CTestData& ref)" << endl;
	os << ref.mData;

	return os;
}

int main()
{
	//CTestData test(100);
	//TestFunc(5);
	TestFunc(CTestData(100));
	TestFunc(CTestData(100));

	//cout << test.getData() << endl;
	//cout << "====================" << endl;

	//CTestData c1(50);
	//cout << "c1 : " << (int)c1 << endl;
	//
	//cout << (int)c1 << endl;
	//cout << c1 << endl;

	return 0;
}
