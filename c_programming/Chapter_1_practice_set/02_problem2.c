// take radius from user to find the area of the circle
// #include<stdio.h>

// int main(){
//     int r,pi,r2;
//     printf("Enter the radius of the circle : \n");
//     scanf("%d",&r);
//     pi=3.14;
//     r2=r*r;
//     printf("The area of the circle is %d",pi*r2);


//     return 0;
// }
#include<stdio.h>

int main(){
     int r,l;
     float area,pi;
    
    printf("Enter the length of the cylinder : \n");
    scanf("%d",&l);
    printf("Enter the radius of the cylinder : \n");
    scanf("%d",&r);
    pi=3.14;
    area =r*r*l*pi ;
    printf("The area of the circle is %f",area);
    


    return 0;
}