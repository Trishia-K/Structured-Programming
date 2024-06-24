#include <stdio.h>
//For Statements
// Counts numbers from 1 to 24
int main() {
    int x;
    for(x=0;x<25;x++){
        printf("x=%d\n",x);
    }
// Writes lyrics of a song
    char lyrics[]="Happy Birthday to you  \n";//[]means an array, it allows many characters to be input
    for(int i=0;i<24;i++){
        printf("%c",lyrics[i]);//[i] is the position of the character in the array
        }
//For loop inside a for loop
    int height=5;
    for(int row=1;row<=height;row++){
        for(int star=1;star<=row;star++){
            printf("*");
        }
        printf("\n");
    }
//Countdown to blast off
    for(int countdown=10; countdown>0;countdown--){
        printf("%d\n",countdown);
    }
        {printf("Blast off\n");}
// Factorial of a number
    int n,result;
    printf("Enter no. ");
    scanf("%d",&n);
    for(result=1;n>1;n--){
        result*=n ;
    }
        printf("%d!=%d",n,result);
    
    return 0;
}