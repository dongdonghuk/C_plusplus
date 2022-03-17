#include <iostream>
using namespace std;

// int Array1D(int *tmp, int size)
int Array1D(int tmp[], int size)
{
    int sum = 0, i;
    for (i = 0; i < size; i++)
        sum += tmp[i];
        // sum += *(tmp +i);

    return sum;
}


int Array2D(int (*tmp)[4], int row, int col)
{
    int sum = 0, i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        sum += tmp[i][j];
        // sum += *(tmp +i);
    }

    return sum;
}

int main()
{
    int num1[5] = {10, 20, 30, 40, 50}, tot, i;

    tot = Array1D(num1, 5);
    cout << "Array1D  배열의 합 : " << tot << endl;

    int num2[2][4] = {10,20,30,40,50,60,70,80};

    tot = Array2D(num2, sizeof(num2)/sizeof(num2[0]), sizeof(num2[0])/sizeof(num2[0][0]) );
    cout << "Array1D  배열의 합 : " << tot << endl;


    return 0;
}