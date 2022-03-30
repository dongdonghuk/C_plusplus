#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	vector<int> ::iterator it;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(10);
	v.push_back(4);
	v.push_back(50);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ", ";
	cout << endl;

	sort(v.begin(), v.end());

	it = v.begin();
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ", ";
	cout << endl;

	return 0;
}