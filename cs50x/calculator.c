#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("x:");
    int y = get_int("y:");
    double z = (double) x/ (double)y;//output will be imprecisice //for 1/3
    //floating point imprecision
    printf("%.20f\n",z);
}


