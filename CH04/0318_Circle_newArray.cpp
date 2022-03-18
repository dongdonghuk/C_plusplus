#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	Circle()
	{
		cout << "Circle()" << endl;
		radius = 1;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	Circle(int r)
	{
		//cout << "Circle(itn r)" << endl;
		radius = r;
	}

	int getRadius()
	{
		return radius;
	}

	void setRadius(int r)
	{
		radius = r;
	}

	double getArea()
	{
		return radius * radius * 3.15;
	}


};

//N 개수 만큼 Circle 배열을 할당받고, 반지름을 입력받는다. 그리고 객체 배열이 저장된 주소 반환
Circle* funCircle(int n) 
{
	Circle* p = new Circle[n];
	int R;

	for (int i = 0; i < n; i++)
	{
		cout << "반지름 : ";
		cin >> R;
		(p + i)->setRadius(R);
	}

	return p;
}


int main()
{
	int N;

	cout << "생성할 Circle 개수 ? ";
	cin >> N;

	Circle* CircleP = funCircle(N);

	for (int i = 0; i < N; i++)
		cout << "Circle" << i << "열의 면적 : " << CircleP[i].getArea() << endl;

	//메모리 해제
	delete[] CircleP;

	return 0;
}