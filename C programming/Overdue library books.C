//C program for Overdue library books
#include<stdio.h>
int main(){
    int bookID,days_overdue=0;
    double fine_rate=0.0,fine_amount=0.0;
    char duedate[11],returndate[11];
    //Input the bookID,duedate and returndate
    printf("\nEnter bookID:");
    scanf("%d",&bookID);
    
    printf("\nEnter duedate(DD/MM/YYYY):");
    scanf("%10s",&duedate);
    
    printf("\nEnter returndate(DD/MM/YYYY):");
    scanf("%10s",&returndate);
    //determine fine rates based on overdue days
    if(days_overdue<=0){
        fine_amount=0;
        fine_rate=0;
    }else{
        if(days_overdue<=7){
        fine_rate=20.0; 
        }else if(days_overdue<=14){
            fine_rate=50.0;
        }else{
            fine_rate=100.0;
        }
        fine_amount=days_overdue*fine_rate;
    }
    //Output the details
    printf("\nbookID:%d",bookID);
    printf("\nduedate:%s",duedate);
    printf("\nreturndate:%s",returndate);
    printf("\ndays_overdue:%d",days_overdue);
    printf("\nfine_rate:Ksh%.2lf",fine_rate);
    printf("\nfine_amount:Ksh%.2lf",fine_amount);
    
        return 0;
}