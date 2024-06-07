// Online C compiler to run C program online
#include <stdio.h>

int main() {
       int a=5,b=6,c=10,d=11,e,r,r2,r3,r4;
//finding sum
    e=a+b+c;
    printf("Sum=%d\n",e);
//finding remainder
    r=b%a;
    printf("remainder=%d\n",r);
//increment
    r2=++r;
    printf("+remainder=%d\n",r2);
//decrement
    r3=--r;
    printf("-remainder=%d\n",r3);
    r+=e;
    printf("remainder + e =%d\n",r);
//relational operators
    int x=5,y=5;
    int z= x==y;
    int i= x!=y;
    printf("%d!=%d is: %d\n",x,y,i); //not equal
    printf("%d==%d is: %d\n",x,y,z); //equal
//AND,OR
//Greater than or less than
    int T=5,H=6;
    int KT= T>H;
    int KH= T<H;
    printf("%d>%d result is %d\n",T,H,KT);
    printf("%d<%d result is %d\n",T,H,KH);
    //True and false
    int result=  KT && KH;
    printf("%d and %d result is %d\n",KT,KH,result); 
    //True or False
    int result2= KT||KH;
    printf("%d and %d result is %d\n",KT,KH,result2);
    
     return 0;
}
