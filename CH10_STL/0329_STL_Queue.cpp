#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	queue<char> myQueue;

	myQueue.push('A');
	myQueue.push('B');
	myQueue.push('C');
	myQueue.push('D');

	cout << "myQueue.size()" << myQueue.size() << endl;

	while(!myQueue.empty())
	{
		cout << myQueue.front() << ", ";
		myQueue.pop();
	}
	cout << "myQueue.size() " << myQueue.size() << endl;

	myQueue.push('A');
	myQueue.push('B');
	myQueue.push('C');
	myQueue.push('D');
	myQueue.push('E');

	cout << "myQueue.front() " << myQueue.front() << endl;
	cout << "myQueue.back() " << myQueue.back() << endl;

	cout << "myQueue.size() " << myQueue.size() << endl;

	queue<char> myQueue2;

	myQueue2.push('X');
	myQueue2.push('Y');
	myQueue2.push('Z');

	myQueue.swap(myQueue2);

	while (!myQueue.empty())
	{
		cout << myQueue.front() << ", ";
		myQueue.pop();
	}
	cout << "myQueue.size() " << myQueue.size() << endl;

	cout << endl;

	while (!myQueue2.empty())
	{
		cout << myQueue2.front() << ", ";
		myQueue2.pop();
	}
	cout << "myQueue.size() " << myQueue2.size() << endl;

	cout << endl;

	return 0;
}