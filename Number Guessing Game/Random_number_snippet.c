#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1; //Generates a randome number between 1 and 100
    return 0;
}