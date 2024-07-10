#include <stdio.h>

void sierpinski(int row, int col, int size) {
    if(size==1){
        printf("*"); // Base case: Print a single star
    }else{
        if((row+col)/size%3==1){ //Check if
            printf(" "); //Leave blank if in the middle
        }else{
            sierpinski(row/3,col/3,size/3);
        }
    }
}

int main(){
    int size=27;//You can adjust the triangle size
    for(int row=0; row<size; row++){
        for(int col=0;col<size*2-1;col++){
            sierpinski(row,col,size);
        }
        printf("\n");
    }
return 0;
}