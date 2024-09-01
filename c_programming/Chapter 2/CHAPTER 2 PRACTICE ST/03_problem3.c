#include<stdio.h>

int main(){
    int a,b;
    printf(" Enter the number to check if it is divisible with 97\n");
     scanf("%d",&a);
    // //using if else statement
    // if(a%97==0){
    //     printf("The %d number is divisible \n",a);
    // }
    // else{
    //     printf("%d is not divisible \n",a);
    // }
    printf("The value of a%97 is %d",a%97);
    return 0;
}