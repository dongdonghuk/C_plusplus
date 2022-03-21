#include <iostream>
#include <string.h>
using namespace std;

void countString(char* text, char* string);


int main()
{
    char text[10000];

    cout << "영문 텍스트를 입력하세요. 히토램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다" << endl;

    cin.getline(text, 10000, ';');

    cout << text << endl;


    char string;

    string = 'a';
    for (int i = 0; i < 26; i++)
        countString(text, string);

    return 0;
}

void countString(char* text, char string)
{
    int count = 0, i;

    for (i = 0; i < strlen(text); i++)
    {
        if (strcmp(string, (text + i)) == 0)
            count++;
    }

    cout << string << " (" << count << ") " << endl;

}