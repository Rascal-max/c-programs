//The volume of a cylider
#include<stdio.h>
int main(){
    double pi;
    float radius;
    int height;
    double volume;
    
    printf("\nEnter the pi:");
    scanf("%lf",&pi);
    
    printf("\nEnter the radius:");
    scanf("%f",&radius);
    
    printf("\nEnter the height:");
    scanf("%d",&height);
    
    volume=2*pi*radius*radius*height;
    printf("the volume is%.2lf\n",volume);
    
    return 0;
    
}