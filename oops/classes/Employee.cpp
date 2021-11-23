#include <iostream>
#include <stdio_ext.h>
using namespace std;
class Employee
{   
    int id;
    char name[36];
    int sal;
    public:
    void getData();
    void displayData();
};

void Employee :: getData()
{
    cout << "Enter id: " << endl;
    cin >> id;

    cout << "Enter name: " << endl;
    __fpurge(stdin);
    fgets(name, sizeof(name), stdin);

    cout << "Enter sal: " << endl;
    cin >> sal;
}   

void Employee :: displayData()
{
    cout << "id: " << id <<  endl;


    cout << "name: " << name << endl;

    cout << "sal: " << sal << endl;

}
int main()
{
    Employee emp1;
    emp1.getData();
    emp1.displayData();
}