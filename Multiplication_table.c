// Program to write multiplication table of any number which is given by user

#include<stdio.h>
int main(){
int first, i; 

printf("Enter the first number");
scanf("%d",&first);
for ( i = 1; i <=10; i++)
{
   int  Result = first * i;
   printf("%d * %d = %d\n", first, i , Result);
}

return 0;
}