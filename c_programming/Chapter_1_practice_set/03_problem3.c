// F=59​C+32
#include<stdio.h>

int main(){
    float f,c;
    printf("Enter the celcius in degre to convert in Ferenhiet :");
    scanf("%f",&c);
    f=((9.0/5.0)*c)+32;//.0 is important
    printf("The value in farenheit is %f",f);
    


    return 0;
}