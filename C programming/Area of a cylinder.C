//Area of a cylinder
#include<stdio.h>
int main(){
    double pi;
    float radius;
    int height;
    double area;
    
    printf("Enter pi:");
    scanf("%lf",&pi);
    
    printf("Enter the radius:");
    scanf("%f",&radius);
    
    printf("Enter the height:");
    scanf("%d",&height);
    
    area=2*pi*radius*radius+2*pi*radius*height;
    printf("The area is %.2lf\n",area);
    
    return 0;
    
}