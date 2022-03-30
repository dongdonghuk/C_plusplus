#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 동적 배열 구조이다.( 마지막에 추가/삭제 할 때)

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(10);
	v.push_back(4);
	v.push_back(50);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	v[0] = 10;
	int num = v[2];
	v.at(3) = 777;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기

	vector<int> ::iterator it;
	it = v.begin();
	v.erase(it);

	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기

	v.pop_back(); // 마지막 항목삭제

	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기
	
	v.pop_back(); // 마지막 항목삭제

	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기

	v.shrink_to_fit();
	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기

	v.resize(10);	//벡터 크기 변경 채운 나머지는 0으로 채운다

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl;			//실제 유효한 배열요소 크기
	cout << "v.capacity() : " << v.capacity() << endl;	//벡터용량: 메모리가 할당되어 있는 공간의 크기

	return 0;
}