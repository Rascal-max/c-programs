//While loops
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    //Using while loop
    while(i<=num){
        printf("Number is %d and cube of the %d is:%d\n",i,i,i*i*i);
        i++;
    }
    return 0;
}