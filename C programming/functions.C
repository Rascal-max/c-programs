//C program for functions 
#include<stdio.h>

void checkEvenorOdd(int number){
 if(number % 2==0){
        printf("The number is Even\n");
    }else{
        printf("The number is Odd\n");
    }
}

int main(){
    int number;//declaration of the number
    
    //Ask the user for the input
    printf("Enter a number:");
    scanf("%d",&number);
    
    
    checkEvenorOdd(number);
    return 0;
}