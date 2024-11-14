// C program to find the area of a rectangle
#include <stdio.h>
int main() {
    int length,width,area;
    printf("enter length:");
    scanf("%d",&length);
    printf("enter width:");
    scanf("%d",&width);
    area=length*width;
    printf("the area of length and width is %d(cm squared)",area);
    return 0;
}