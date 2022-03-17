#include <iostream>
using namespace std;

typedef struct _Point
{
	int x;
	int y;
} Point;

void Pnt1(Point &ref)
{
	ref.x = 100;
	ref.y = 100;
}

void Pnt2(Point* p)
{
	p->x = 200;
	p->y = 200;
}

Point* PntAdder(Point &ref1,Point &ref2)
{
	Point* p3 = new Point;
	p3->x = ref1.x + ref2.x;
	p3->y = ref1.y + ref2.y;

	return p3;
}

Point &PntAdder2(Point& ref1, Point& ref2)
{
	Point* p3 = new Point;
	p3->x = ref1.x + ref2.x;
	p3->y = ref1.y + ref2.y;

	return *p3;
}

int main()
{
	Point* p1 = new Point;
	p1->x = 10;
	p1->y = 10;

	Point* p2 = new Point;
	p1->x = 20;
	p1->y = 20;

	Pnt1(*p1);
	cout << "p1: " << p1->x << ", " << p1->y << endl;

	Pnt2(p2);
	cout << "p2: " << p2->x << ", " << p2->y << endl;

	Point *pref = PntAdder(*p1, *p2);
	cout << "p3: " << pref->x << ", " << pref->y << endl;

	Point &pref2 = PntAdder2(*p1, *p2);
	cout << "p3: " << pref2.x << ", " << pref2.y << endl;

	delete p1;
	delete p2;
	delete pref;
	delete &pref2; //참조변수는 참조로 지워야 한다 delete pref2; 는 에러

	//참조자로 받으면 데이터에 바로 엑세스를 할 수 있다

	return 0;
}