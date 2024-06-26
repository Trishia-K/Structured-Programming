#include <stdio.h>

int main() {
// Creating an array with four types of meat
//Loop the array until atype of meat u can never eat
//Using breaks to exit loop
    char *meat[5]={"chicken","pork","goat","beef","mutton"};
    //for the loop to print the meats
      for (int i=0; i<5;i++){
        if (meat[i]=="mutton"){
            printf("Cannot be me eating mutton\n");
            break;//loop breaks when it reaches mutton
        }else{
            printf("I eat %s,Yummy!!\n",meat[i]);
        }
    }
    printf("**************************************\n");
    //Using continue to stay in loop
    char *meats[5]={"chicken","pork","mutton","goat","beef"};
    for(int i=0;i<5;i++){
        if(meat[i]=="mutton"){
            printf("Nah,continue!\n");
            continue;
        }else{
            printf("I'll have %s!\n",meat[i]);
        }
    }
    return 0;
}