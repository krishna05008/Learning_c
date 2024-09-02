#include<stdio.h>

int main(){
    if(1){
        printf("The non zero is executed\n");

    }
    if(23){
        printf("23 is also non zero\n");

    }
    if('c'){
        printf("This is a character and non zero\n");

    }
    if(0){
        printf("This is zero and wont run");
    }

    return 0;
}