//C variables and Data Types
//Preprocessor Directive
#include<stdio.h>
int main(){
    //Declaration and initialization
    char a;
    char name[]={};
    int age;
    float area;
    double salary;
    
    printf("Enter a character:");
    scanf("%c",&a);
    printf("the character is %c \n",a);
     
    printf("Enter your name:");
    scanf("%s",&name);
    printf("the string is %s \n",name);
     
    printf("Enter your age:");
    scanf("%d",&age);
    printf("the integer is %d years \n",age);
    
    printf("Enter the area:");
    scanf("%f",&area);
    printf("the float is %.3f metres squared \n",area);
    
    printf("Enter your salary:");
    scanf("%lf",&salary);
     printf("the double float is %10.2lf kenyan shillings \n",salary);
    
    
    
    
    
    
    
    
    /*
    printf("the character is %c \n",a);
    printf("the string is %s \n",name);
    printf("the integer is %d years \n",age);
    printf("the float is %.3f metres squared \n",area);
    printf("the double float is %10.2lf kenyan shillings \n",salary);
    */
    return 0;
}