#include <stdio.h>
//Code by Kobumanzi Trishia
int main() {
    // Using nested for loops to make multiplication tables
    for(int num=1;num<=10;num++){
    printf("Multiplication table of %d \n",num);
    for(int i=1; i<=5; i++){
        printf("%d x %d= %d\n",num,i,num*i);
    }
    printf("\n");}//separates the multiplication tables
    return 0;}