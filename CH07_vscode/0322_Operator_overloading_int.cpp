#include <iostream>
using namespace std;

// 반드시 전역함수로 연산자 오버로딩이 되어야 하는 경우
// 1. 첫번째 인자가 this 가 아닌경우

class Point
{
private:
    int x, y;
public:
    Point(int _x=0, int _y=0)
    {
        x= _x, y = _y;
    }

    void showData()
    {
        cout << "x : " << x << ", y : " << y << endl;
    }
    friend Point operator+(int n, const Point &ref);

};

Point operator+(int n, const Point &ref)
{
    Point temp(n + ref.x, n + ref.y);
    return temp;
}

int main()
{
    Point p1(1,1);
                            //this: 멤버객체
    Point p2 = 30 + p1;     //30.operator+(p1) 전역함수 작성 불가
    p2.showData();          //operator+(30,p2) 전역함수 작성

    return 0;
}