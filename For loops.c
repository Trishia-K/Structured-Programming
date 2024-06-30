#include <stdio.h>
//By Kobumanzi Trishia
//ASSIGNMENT ON FOR LOOPS
int main() {
//P5-1: Prints a box of 5x5 asterisks
     for(int r=1;r<=5;r++){
     for(int i=1;i<=5;i++){
         printf("*",i);
     }
      printf("\n");}
//P5-2: Reads in a number N and prints N asterisks on the same line
     int n;
     printf("Enter the number N: ");
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         printf("*",i);
     }
//P5-3: Reads a number N and prints numbers from 1 to N
    int N;
    printf("Enter number N: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("%d\n",i);
    }
// P5-4:Reads a number N and prints numbers from 1-N or N-1 depending on the user's request
    int num,i,n;
    char ch;
    printf("Enter number N: ");
    scanf("%d",&num);
    printf("Enter F for forward or B for the opposite: ");
    scanf("%c",&ch);
    ch=getchar();
    if(ch=='F'){
        for( int i=1;i<=num;i++){
        printf("%d\n",i);}
    }
    else if(ch=='B'){
        for(int n=num;n>=1;n--){
            printf("%d\n",n);
        }
    }else{
        printf("Invalid");
    }
//P5-5: Reads a number N and prints N times table
    int N;
    printf("Enter table N: ");
    scanf("%d",&N);
    for(int i=1;i<13;i++){
        printf("%d x %d= %d\n",i,N,N*i);
    }
//P5-7: Reads a number N and prints a table from 1 to N, N^2 and N^3
     int N;
     printf("Enter value of N: ");
     scanf("%d",&N);
     printf("N    N*N    N*N*N\n");
     for(int i=1;i<=N;i++){
         printf("%d    %d    %d\n",i,i*i,i*i*i);
     }
//P5-10: Reads a number N which represents number of pupils in a class and then reads in their marks and prints sum and average
    int i, numb,mark,total,count,average;
    printf("Enter number of pupils: ");
    scanf("%d",&numb);
    for(int i=0;i<numb;i++){
        printf("Enter mark for pupil %d: ",i+1);
        scanf("%d",&mark);
        total+=mark;
        count++;
        average=total/count;}
        printf("TOTAL MARK= %d   PUPILS= %d\n",total,count);
        printf("AVERAGE =%d",average);
  //P5-11: Reads a number N and tests the user on the N times table then prints the number correct as well as the percentage
     int Num;
     float percentage;
     int correct,i;
     int ans=Num*(i+1);
     printf("Enter table N: ");
     scanf("%d",&Num);
     for(int i=0;i<12;i++){
         
         printf("%d x %d=?.. ",i+1,Num,ans);
         scanf("%d",&ans);
    if(ans/Num==i+1){
        correct++;
       }}
        printf("You had %d correct out of 12  Percentage=%.1f%%\n",correct,(correct%10)*100);
         
//P5-12: Sums all odd and even numbers from 1-1000
    int sum=0,sum2=0;
    for(int i=1;i<=1000;i++){
        if(i%2==0){
        sum+=i;}
    else{
        sum2+=i;
    }
    }
        printf("Sum of even numbers from 1 to 1000=%d\n ",sum);
        printf("Sum of odd numbers from 1 to 1000=%d",sum2);
 //P5-13: Enters a number N in the range 1-20 and prints a pyramid
    int num,row,i;
    printf("Enter a number in the range 1-20: ");
    scanf("%d",&num);
    if(num>1||num<20){
        for(int row=1;row<=num;row++){
            for(int i=1;i<=row;i++){
                printf("%d",i);
            }
            printf("\n");
        }
    }          
    return 0;}