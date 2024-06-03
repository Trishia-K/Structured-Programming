#include <stdio.h>

int main() {
    int choice,amount1,amount2,amount3,balance1,balance2;
    int initialamount=200000;
    printf("1.Check balance\n");
    printf("2.Withdraw\n");
    printf("3.Deposit\n");
    printf("Choose an option:  ");
    scanf("%d",&choice);
    if (choice==1){
        printf("Balance=%d", initialamount);
    }
    else{
        printf("Enter amount to withdraw: ");
        scanf("%d",&amount2);
    }
    if(choice==2){
        balance1=initialamount-amount2;
        printf("New balance=%d ",balance1);
          }
    else {
        printf("Enter amount to deposit: ");
        scanf("%d",&amount3);
    }
     if(choice==3);{
       balance2=initialamount+amount3;
       printf("New balance=%d",balance2);
    }
    
    return 0;
}

