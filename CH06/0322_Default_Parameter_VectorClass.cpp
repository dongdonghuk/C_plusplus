#include <iostream>
using namespace std;

class Myvector
{
private:
    int *p;
    int size;
public:
    Myvector(int n=10)
    {
        p = new int[n];
        size = n;
    }
    ~Myvector()
    {
        delete p;
    }

    void Myvector_data()
    {
        for(int i=1;i<=size;i++)
            p[i-1] = i;
    }

    void Myvector_sum()
    {
        int sum = 0;
        for(int i=0;i<size;i++)
        {
            sum += p[i];
            cout << p[i] << ", ";
        }
        cout << size << " 까지의 합은: " << sum << endl;
    }
};

int main()
{
    Myvector *v1 = new Myvector();
    Myvector *v2;
    v2 = new Myvector(20);

    v1 -> Myvector_data();
    v1 -> Myvector_sum();

    v2 -> Myvector_data();
    v2 -> Myvector_sum();

    delete v1;
    delete v2;

    return 0;
}