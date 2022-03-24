#include <cstdio>
// using namespace std;

namespace myStd
{
    const char *endl = "\n";

    class ostrem
    {
    public:
        ostrem &operator << (const char* str)
        {
            printf("%s ", str);
            return *this;
        }

        ostrem &operator << (int n)
        {
            printf("%d ", n);
            return *this;
        }

        ostrem &operator << (double d)
        {
            printf("%lf ", d);
            return *this;
        }
    };

    ostrem cout;
}

using namespace myStd;

int main()
{
    cout << "Hello world." << 3.141592 << 100 << endl;


    return 0;
}