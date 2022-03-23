#include <iostream>
using namespace std;

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

    Point &operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }

    Point operator++(int)
    {
        Point temp(x++, y++);
        return temp;
    }

    friend Point &operator--( Point &ref);
    friend Point operator--(Point &ref, int);

};

Point &operator--(Point &ref)
{
    ref.x--;
    ref.y--;
    return ref;
}

Point operator--(Point &ref, int)
{
    Point temp(ref.x--, ref.y--);
    return temp;
}

int main()
{
    Point p1(1,1);

    ++p1;
    p1.showData();

    ++(++p1);
    p1.showData();

    (++p1).showData();

    --p1;
    p1.showData();

    cout << "===============" << endl;

    Point p2(1, 1);

    Point p3 = p2++;
    p3.showData();
    p2.showData();

    return 0;
}