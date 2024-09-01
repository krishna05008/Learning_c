
// CHAPTER 1- PRACTICE SET
// 1. Write a C program to calculate area of a rectangle:
// a.user supplied input
#include<stdio.h>

int main(){

    int l,b,c;


    printf("Input the length of the rectangle :");
    
    scanf ("%d",&l);
    
    printf("Input the breadth of the rectangle ");
    scanf ("%d",&b);
    c=l*b;

    printf("The area of the rectangle is %d",c);



    return 0;
}