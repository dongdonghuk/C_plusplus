#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<char> vec;
	vector<char> ::iterator it;

	vec.push_back(65);
	vec.push_back('B');
	vec.push_back('C');
	vec.push_back('D');
	vec.push_back('Z');

	sort(vec.begin(), vec.end(), less<char>());


	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	sort(vec.begin(), vec.end(), greater<char>());

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ", ";
	cout << endl;

	char arr[5] = { 'D', 'a', 'f', 'z', 'A' };

	sort(arr, arr + 5);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << endl << endl;

	return 0;
}