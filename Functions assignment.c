//Kobumanzi Trishia
//Assignment on functions
#include <stdio.h>
#include <stdbool.h>
#include<math.h> 
#define PI 3.14159
//P8-1:Function to return the minimum value of a and b
int main() {
 int a=12,b=6;
  int Min(int a,int b);
    return (a < b) ? a : b;}
    int main() {     
    int a, b;
    printf("Enter first number: ");   
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);   
    printf("Min(%d,%d) = %d\n", a, b, min(a,b)); // min(a,b) calls the minimum function
    return 0;
}

//P8-7:Function to print and count how many years in the 25th century are prime numbers.
bool Prime(int x) {     if(x <= 1){
        return false; // False because 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= x; i++) {      
        if(x % i == 0) {
            return false; // x is divisible by i so it's not prime since x is not prime        
             }  
                }
    return true; // x is prime since the loop completes without finding a divisor
}
int main() {     
    int count = 0;
    for (int year = 1901; year <= 2000; year++)
    {
        if (Prime(year)) {  //to check if it's prime            
         printf("The year %d is a prime number.\n", year);          
            count++;
        }     }
    printf("%d years in the 20th century are prime numbers.\n", count);
    return 0;
}

//P8-9: Function to calculate sum of a sequence
int sequence(int N) {   //the sequence function takes an integer N as input and returns the sum of the sequence up to N    
    int sum = 0;
    for (int i = 1; i <= N; i++) 
    {
        sum += i * i;  //calculate the square of the current number i and add it to the sum  
        }
    return sum;  //return the final value of sum which is the sum of the sequence upto N
    }
int main() {
    printf("N\t        Sum\n");     printf("----\t        ----\n");
    for (int N = 1; N <= 20; N++) 
    {
        printf("%d\t\t%d\n", N, sequence(N));
    }
    return 0;    
}

//P8-4: Function to calculate the radius of a circle when given the Area of the circle.
float Radius(int area) { //Radius function takes an integer area as input and returns it as a float
    return sqrt(area / PI); //formula to calculate radius
}
int main() {
    printf("Area\t        Radius\n");
     for(int area = 10; area <= 20; area++) {     
        float r = Radius(area);      
        printf("%d\t\t%.2f\n", area, r);
    }     return 0;
}

//P8-3:Function to print a table of celsius versus fahrenheit
float Fahrenheit(int C) {   
    return (1.8 * C) + 32;
}
int main() {
    printf("C\t        F\n");
    printf("--\t        ----\n");//t is used to separate the columns in the table
    for (int C = 10; C <= 30; C++) 
    {
        float f = Fahrenheit(C);
        printf("%d\t\t%.1f\n", C, f); 
    }     return 0;
}


 

    
