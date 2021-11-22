#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
struct employee
{
    int id;
    char name[30];
    int sal;
};
typedef struct employee emp;
emp get_data()
{   
    emp t;
    printf("Enter id: \n");
    scanf("%d", &t.id);

    printf("Enter name: \n");
    __fpurge(stdin);
    fgets(t.name, sizeof(t.name), stdin);

    printf("Enter sal: \n");
    scanf("%d", &t.sal);
}
// void show_data(emp obj)
// {
//     printf("id: %d\n", obj.id);
//     printf("name: %s\n", obj.name);
//     printf("Sal: %d\n", obj.sal);
// }

void main()
{
    emp obj = get_data();
    // show_data(e);
    printf("id: %d\n", obj.id);
    printf("name: %s\n", obj.name);
    printf("Sal: %d\n", obj.sal);
}