#include<stdio.h>
int main(){
    int length, breadth;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth);
    int Area = length*breadth;
    printf("The area of the rectanle is %d",Area);
}