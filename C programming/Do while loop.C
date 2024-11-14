//Do while loops
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    //Do while loop to calculate cube of numbers 
    do{
        printf("number is:%d and the cube of the %d is:%d\n",i,i,i*i*i);
        i++;
    }while(i<=num);
    
    return 0;
}