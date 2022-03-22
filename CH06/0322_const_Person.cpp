#include <iostream>
using namespace std;


const void showStudentIntro()
{
    cout << "== 학생정보 출력 ==" << endl;
}

class Student
{
private:
    const int id;

    char name[20];
    char major[20];
    mutable int age; // 상수화된 메서드에서 수정 가능
public:

    Student(const int _id, const char *_name, const char *_major, int _age) : id(_id)
    {
        strcpy(name, _name);
        strcpy(major, _major);

        age = _age;
    }

    void ShowData() const
    {
        showStudentIntro(); // 상수화된 메서드는 상수화된 메서드만 부를수 있다

        age = 27;   // mutable 선언

        cout << id << ", " << name << ", " << major << ", " << age << endl;
    }

    const char *getName() const
    {
        return name;
    }

};


int main()
{
    Student st1(1001, "kim", "computer", 25);

    st1.ShowData();

    cout << "성명 : " << st1.getName() << endl;

    const char* ptrName = st1.getName();

    cout << "성명 : " << ptrName << endl;



    return 0;
}