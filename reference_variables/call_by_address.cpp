#include <iostream>
using namespace std;
void swap(int *a, int *b ){
    // cout <<"&a: "<<&a << " &b :" << &b<<endl;
    int  temp = *a;
    *a = *b;
    *b = temp;
    // cout <<"&a: "<<&a << " &b :" << &b<<endl;
}
int main(){
    int a = 10, b = 20;
    cout << "Before swap:" << a <<" "<< b<< endl;
    swap(&a, &b);
    cout << "After swap: "<< a<<" "<< b << endl;
    
    return 0;
}