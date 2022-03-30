#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ���� �迭 �����̴�.( �������� �߰�/���� �� ��)

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

	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��

	vector<int> ::iterator it;
	it = v.begin();
	v.erase(it);

	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��

	v.pop_back(); // ������ �׸����

	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��
	
	v.pop_back(); // ������ �׸����

	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��

	v.shrink_to_fit();
	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��

	v.resize(10);	//���� ũ�� ���� ä�� �������� 0���� ä���

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	cout << "v.size() : " << v.size() << endl;			//���� ��ȿ�� �迭��� ũ��
	cout << "v.capacity() : " << v.capacity() << endl;	//���Ϳ뷮: �޸𸮰� �Ҵ�Ǿ� �ִ� ������ ũ��

	return 0;
}