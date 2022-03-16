#include <iostream>
#include <cstring>  //c++ 규칙 : c 헤더파일 사용시 확장자 h를 뻐리고 헤더파일명 앞에 c를 추가한다

using namespace std;

int main()
{
    char name[20];
    char comAddr[50];

    cout << "성명 ?";
    cin >> name;
    cin.ignore(100, '\n');

    cout << "회사주소 ? ";
    cin.getline(comAddr, 50);
    // cin.getline(comAddr, 50, '\n');
    // cin.getline(comAddr, 50, '.');

    cout << name << "," << comAddr << endl;
    
    cout << "strupr(name)"  << strupr(name) << endl;
    cout << "strlwr(comAddr)"  << strlwr(comAddr) << endl;

    if (strcmp(name, "KIM") == 0)
        cout << "Equal" << endl;
    else
        cout << "Not Equal." << endl;

    return 0;
}