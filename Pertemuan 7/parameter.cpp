#include <iostream>
using namespace std;

void ubah (int *tunjuk) //parameter
{
    *tunjuk = 100;
}

int main()
{
    int x = 5;

    ubah(&x);

    cout << x;
}