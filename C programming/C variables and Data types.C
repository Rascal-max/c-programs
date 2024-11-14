//C variables and Data Types
//Preprocessor Directive
#include<stdio.h>
int main(){
    //Declaration and initialization
    char a='P';//%c
    char name[]="Patrick";//%f
    int age=10;//0-9//%d
    float area=2.023;//%f
    double salary=2000.50;//%dl
    printf("the character is %c \n",a);
    printf("the string is %s \n",name);
    printf("the integer is %d years \n",age);
    printf("the float is %.3f metres squared \n",area);
    printf("the double float is %10.2lf kenyan shillings \n",salary);
    return 0;
}