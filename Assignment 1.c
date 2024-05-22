#include <stdio.h>

int main() {
 // Checking if a number is a mutiple of three
    int num1;
    int num2;
    int num3;
    printf("Enter number:");
    scanf("%d",&num1);
    if(num1%3==0){
    printf("Fizz\n",num1);}
    else{ 
        printf("Not a multiple of 3\n",num1);}
  //Checking if the number is a multiple of five  
    printf("Enter number:");
    scanf("%d",&num2);
     if(num2%5==0){
        printf("Buzz\n",num2);}
     else{
         printf("Not a multiple of 5\n",num2);}
 //Checking if the number is a multile of seven
    printf("Enter number:");
    scanf("%d",&num3);
    if(num3%7==0){
        printf("FizzBuzz\n",num3);} 
    else{
        printf("Not a multiple of 7\n",num3);
    }
 //Converting from degrees celcius to degrees Fahrenheit
    float Celciusvalue;
    float Fahrenheitvalue;
    printf("Enter Celcius value:");
    scanf("%f",&Celciusvalue);
    Fahrenheitvalue=(1.8*Celciusvalue)+32;
    printf("The temperature in Fahrenheit is %f",Fahrenheitvalue);
       return 0;
}