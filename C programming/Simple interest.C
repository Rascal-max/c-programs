#include<stdio.h>
int main(){
    int principal_amount,time,rate;
    int interest;
    
    printf("\nEnter principal_amount:");
    scanf("%d",&principal_amount);
    
    printf("\nEnter time in years:");
    scanf("%d",&time);
    
    printf("\nEnter rate:");
    scanf("%d",&rate);
    //calculate simple interest
    interest=(principal_amount*time*rate)/100;
    printf("\nsimple interest is %d",interest);
    
    return 0;
    
}