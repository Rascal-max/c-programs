//C program for a grading system
#include<stdio.h>
int main(){
    float mathematics,programming,physics,average;
    //prompt the user to enter the marks for each subject
    printf("Enter mathematics marks:");
    scanf("%f\n",&mathematics);
    
    printf("Enter programming marks:");
    scanf("%f\n",&programming);
    
    printf("Enter physics marks:");
    scanf("%f\n",&physics);
    
    //prompt the user to enter the average
    average=(mathematics+programming+physics)/3;
    printf("Enter the average marks:%.2f\n",average);
    
    //using if....else condition to determine the grade
    if(average>=70&&average<=100){
        printf("Grade A\n");
    }else if(average>60&&average<=70){
        printf("Grade B\n");
    }else if(average>=50&&average<=60){
        printf("Grade C\n");
    }else if(average>=40&&average<=50){
        printf("Grade D\n");
    }else if(average <40){
        printf("Grade E(fail)\n");
    }else{
        printf("invalid marks entered\n");
    }
    
    return 0;
}