//C structures program to define an employee
#include<stdio.h>
#include<string.h>
struct employee{
    char name[25];
    int ID;
    char department[20];
    float salary;
    char email[50];
}employee1,employee2;

int main(){
    strcpy(employee1.name,"John_Doe");
    strcpy(employee1.department,"Human Resources");
    strcpy(employee1.email,"john.doe@company.com");
    employee1.ID=12345;
    employee1.salary=55000.50;
    
    printf("\n name:%s",employee1.name);
    printf("\n department:%s",employee1.department);
    printf("\n email:%s",employee1.email);
    printf("\n ID:%d",employee1.ID);
    printf("\n salary:%.2f",employee1.salary);
}