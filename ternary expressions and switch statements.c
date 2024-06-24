// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x=5;
    int time=20;
    if(x==5){
    printf("X is 5\n");}
    else{
        printf("x is not 5");
    }
    //ternary expressions are used to shorten if statements
    (x==4)?printf("x=4\n"):printf("x is not 4\n");
    //if time is less or greater, it prints the different times
    (time<18)?printf("Good day"):(time<20)?printf("Good evening"):printf("Good night\n");
    //Check if it is even or odd using ternary expressions
    (x%2==0)?printf("It is even"):printf("It is odd\n");
    //SWITCH
    //For days, checks if day=4
       int day=4;
       switch (day){
           case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break; 
            default:
                printf("Invalid day");
       }
    //Switch statement to print the generation of the age
    int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    switch (age){
        case 0 ... 12:
            printf("Generation Alpha");
            break;
        case 13 ... 27:
            printf("Generation Z");
            break;
        case 28 ... 43:
            printf("Millenials");
            break;
        case 44 ... 59:
            printf("Generation X");
            break;
        case 60 ... 69:
            printf("Boomers II");
            break;
    }   
    return 0;
}