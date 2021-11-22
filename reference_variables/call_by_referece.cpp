#include <iostream>
using namespace std;

void swap(int &a, int &b)
{   
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    int &r1 = a, &r2 = b;
    cout << a << " " << b << endl;
    swap(r1, r2);
    cout << a << " " << b << endl;
    return 0;
}