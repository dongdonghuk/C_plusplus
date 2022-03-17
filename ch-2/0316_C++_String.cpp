#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;

int main()
{
    char _name[20]; // 20바이트 미만의 문자열 저장(문자열 하나 저장)

    string name; // 문자열 하나 저장, 크기제한이 없다
    // string name2[20]; 문자열 20개 저장, 크기제한이 없다 
    string comAddr;

    cout << "성명 ?";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "회사주소 ? ";
    // cin >> comAddr;
    getline(cin, comAddr);  // 전역함수

    cout << name << "," << comAddr << endl;

    transform(name.begin(), name.end(), name.begin(), ::toupper);
    // transform(name.begin(), name.end(), name.begin(), ::tolower);

    cout << name << "," << comAddr << endl;

    if (name == "KIM" )
        cout << "Equal" << endl;
    else
        cout << "Not Equal." << endl;
    
    return 0;
}
