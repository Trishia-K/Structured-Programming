#include <stdio.h>

int main() {
 // Checking if a number is a mutiple of three
    int num1;
    int num2;
    int num3;
    printf("Enter a muliple of 3:");
    scanf("%d",&num1);
    if(num1%3==0){
    printf("Fizz\n",num1);}
    else{ 
        printf("Not a multiple of 3\n",num1);}
  //Checking if the number is a multiple of five  
    printf("Enter a multiple of 5:");
    scanf("%d",&num2);
     if(num2%5==0){
        printf("Buzz\n",num2);}
     else{
         printf("Not a multiple of 5\n",num2);}
 //Checking if the number is a multile of seven
    printf("Enter a multiple of 7:");
    scanf("%d",&num3);
    if(num3%7==0){
        printf("FizzBuzz\n",num3);} 
    else{
        printf("Not a multiple of 7\n",num3);
    }
 //Converting from either degrees celcius to degrees Fahrenheit or vice versa
     int choice;
     float Celsiusvalue,Fahrenheitvalue,Kelvin;
     printf("1.Celsius to Fahrenheit\n");
      printf("2.Fahrenheit to Celsius\n");
      printf("Enter your choice 1 or 2:");
      scanf("%d",&choice);
 //Converting from Celsius to Fahrenheit and Kelvin
      if(choice==1){
    printf("Enter temperature in Celsisus: ");
    scanf("%f",&Celsiusvalue);
    Fahrenheitvalue=(Celsiusvalue*9/5)+32;
    printf("Fahrenheit value=%.2f\n",Fahrenheitvalue);
     Kelvin=Fahrenheitvalue-273.15;
    printf("Fahrenheit value in Kelvin= %.2f\n",Kelvin);
    }
 //Conerting from Fahrenheit to Celsius and kelvin
     else if(choice==2){
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheitvalue);
    Celsiusvalue=(Fahrenheitvalue-32)*5/9;
    printf("Celsisus value=%.2f\n",Celsiusvalue);
    Kelvin=Celsiusvalue+273.15;
    printf("Celsius value in Kelvin=%.2f\n",Kelvin);
    }
else{
    printf("Invalid choice.Please try again\n");
}
       return 0;
}
