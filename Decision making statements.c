// By Kobumanzi Trishia
#include <stdio.h>
int main() {
  //ASSIGNMENT ON DECISION MAKING STATEMENTS
  //P4-1: Reads in a number and prints if it is even or odd
       int numA,numA1;
    printf("Enter number A: ");
    scanf("%d",&numA);
    printf("Enter number A: ");
    scanf("%d",&numA1);
    if(numA%2==0){
        printf("%d is an even number",numA);
    }else{
        printf("%d is an odd number ",numA);
    }
    if(numA1%2==0){
        printf("       %d is an even number",numA1);
    }else{
        printf("       %d is an odd number",numA1);
    }
//P4-2:Reads in two numbers and prints which one is the biggest and by how much
    int A,B,A2,B2;
    printf("Enter number A:");
    scanf("%d",&A);
    printf("Enter number B:");
    scanf("%d",&B);
    printf("Enter number A:");
    scanf("%d",&A2);
    printf("Enter number B:");
    scanf("%d",&B2);
    if(A>B){
        printf("A is bigger than B by %d",A-B);
    }else if(B>A){
        printf("B is bigger than A by %d",B-A);
    }
    if(A2>B2){
        printf("              A is bigger than B by %d",A2-B2);
    }else if(B2>A2){
        printf("              B is bigger than A by %d",B2-A2);
    }
//P4-6: Reads three numbers and prints which one is the biggest
        int num1,num2,num3;
        printf("Enter number A:");
        scanf("%d",&num1);
        printf("Enter number B:");
        scanf("%d",&num2);
        printf("Enter number C:");
        scanf("%d",&num3);
        if(num1>=num2&&num1>=num3){
            printf("A is the biggest number.");
        }else if(num2>=num1&&num2>=num3){
            printf("B is the biggest number.");
        }else{
            printf("C is the biggest number.");
        }
// P4-3: Reads two numbers and prints if A is a factor of B
    int Num1,Num2,Num3,Num4;
    printf("Enter number A:"); 
    scanf("%d,%d",&Num1);
    printf("Enter number A: ");
    scanf("%d,%d",&Num2);
    printf("Enter number B:");
    scanf("%d,%d",&Num3);
    printf("Enter number B: ");
    scanf("%d,%d",&Num4);
    if(Num2%Num1==0){
        printf("%d is a factor of %d",Num1,Num2);
    }else{ 
        printf("%d is not a factor of %d",Num1,Num2);}
    if(Num4%Num3==0){
        printf("        %d is a factor of %d",Num3,Num4);
    }else{printf("      %d is not a factor of %d ",Num3,Num4);}
//P4-9 Read three numbers and prints them in ascending order
    int num1,num2,num3,temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
 if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("The numbers in ascending order are: %d, %d, %d\n", num1, num2, num3);


    return 0;
}