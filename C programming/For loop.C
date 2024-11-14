//For loops
#include<stdio.h>
int main(){
    int num,i;
    //Asking the user for the number of terms
    printf("Enter the number of terms:");
    scanf("%d",&num);
    //Using a for loop
    for(i=1;i<=num;i++){
        printf("Number is:%d and cube of the %d is:%d\n",i,i,i*i*i);
    }
    
    return 0;
}