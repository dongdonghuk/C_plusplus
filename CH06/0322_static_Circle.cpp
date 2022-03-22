#include <iostream>
using namespace std;

class Circle
{
private:
    int radius; // 멤버변수
    static int numOfCircles;    //정적변수(클래스에서 공유되는 변수)
public:
    Circle(int r=1)
    {
        radius =r;
        numOfCircles++;

        cout << "Circle(int r=1) 반지름" << radius;
        cout << ", Circle 수 : " << numOfCircles << endl;
    }

    ~Circle()
    {
        numOfCircles--;
    }

    int getRadius()
    {
        return radius;
    }

    static int getNumOfCircles() //정적 함수
    {
        return numOfCircles;
    }
};

int Circle::numOfCircles = 0; //Circle 클래스의 정적변수 초기화

int main()
{
    // 정적 메서드는 정적 멤버만 접근할 수 있다
    cout << "현재 Circle 의 수 : " << Circle::getNumOfCircles() << endl;

    Circle *p = new Circle[10];

    cout << "현재 Circle 의 수 : " << p->getNumOfCircles() << endl;
    delete[] p;

    cout << "현재 Circle 의 수 : " << Circle::getNumOfCircles() << endl;

    Circle a;
    a.getNumOfCircles();
    cout << "현재 Circle 의 수 : " << a.getNumOfCircles() << endl;

    Circle b;
    b.getNumOfCircles();
    cout << "현재 Circle 의 수 : " << b.getNumOfCircles() << endl;

    return 0;
}