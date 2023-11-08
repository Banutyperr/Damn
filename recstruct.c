#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    int employeeID;
    struct Employee *subordinates;
};
int  main() {
    struct Employee employees[5];
    employees[0].employeeID=1005;
    for(int i = 0 , j = 0 ; i <  2 , j < 2 ; ++i , ++j){
        gets(employees[j].name);

        gets(employees[j].subordinates[i].name);


    }
    printf ("---------------------------------------------");
    for (int i=0 , j = 0 ; i < 2, j < 2; ++i ,++j )
    {
        printf("%s \n",employees[j].name);
        printf("%s",employees[j].subordinates[i].name);
    }
    return 0;

}
