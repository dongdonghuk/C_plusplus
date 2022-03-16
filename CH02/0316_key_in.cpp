#include <iostream>

using namespace std; 
// std에 정의된 모든 이름에 std를 생략하겟다

// using std::cout; // std:: 생략가능

int main()
{
    cout << "키보드로 데이터 입력" << endl;

    int wid, hei;

    cout << "너비";
    cin >> wid;             // >> : 입력스트림 연산자

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
    }

    cout << "높이 : ";
    cin >> hei; 

    int area = wid * hei;
    cout << "면적은 : " << area << endl;

    char ch;
    cout << "한문자 ? : ";
    cin >> ch;
    cout << "ch : " << ch << endl;

    return 0;
}