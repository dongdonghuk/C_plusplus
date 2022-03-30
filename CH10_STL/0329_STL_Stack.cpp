#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<int> myStack;

	for (int i = 0; i < 5; i++)
	{
		myStack.push(i + 10);
	}

	cout << "myStack.top : " << myStack.top() << endl;
	cout << "myStack.size() : " << myStack.size() << endl;

	myStack.pop();
	cout << "myStack.size() : " << myStack.size() << endl;

	while (myStack.empty() == false)
	{
		cout << myStack.top() << ", ";
		myStack.pop();
	}

	cout << "\n myStack.size() : " << myStack.size() << endl;



	stack<string> myStrStack;
	string tmp;
	for (int i = 0; i < 5; i++)
	{
		cout << "intput string? ";
		getline(cin, tmp);
		myStrStack.push(tmp);
	}

	while (myStrStack.empty() == false)
	{
		cout << myStrStack.top() << ", ";
		myStrStack.pop();
	}

	cout << "\n myStrStack.size() : " << myStrStack.size() << endl;

	return 0;
}