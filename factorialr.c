#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1; // base case
    }
    return n * factorial(n-1); // recursive case
}

int sum(int n) {
    if (n == 0) {
        return 0;  // Base case: the sum of the first 0 natural numbers is 0
    }
    return n + sum(n - 1);  // Recursive case: sum of n is n plus sum of n-1
}

int main(){
    int num = 5;    

    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);
}