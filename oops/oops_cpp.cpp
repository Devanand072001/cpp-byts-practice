#include <iostream>
#include <stdio_ext.h>
using namespace std;

struct employee
{
    int id;
    char name[20];
    int sal;
    void get_data()
    {
        cout << "Enter id: " << endl;
        cin>> id;
        cout << "Enter name: "<<endl;
        __fpurge(stdin);
        fgets(name, sizeof(name), stdin);

        cout << "Enter sal: "<< endl;
        cin >> sal;
    }

    void display_data(){
        cout << "id: " <<id << endl;
        cout << "Name: "<< name << endl;
        cout << "Sal: " << sal << endl;
    }
};

int main()
{
    struct employee emp;
    emp.get_data();
    emp.display_data();
}