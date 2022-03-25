#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	string press;
	string author;

public:
	Book(string _title, string _press , string _author)
	{
		title = _title;
		press = _press;
		author = _author;
	}
	friend ostream& operator<<(ostream& os, Book& ref);
};


ostream &operator<<(ostream& os, Book& ref)
{
	os << ref.title << ", " << ref.press << ", " << ref.author << endl;
	return os;
}

int main()
{
	Book book("든든한 c 프로그래밍", "연두에디션", "김원선");
	cout << book << endl;
}