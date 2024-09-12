#include<stdio.h>
#include<cs50.h>

int main(void)
{
   string num = get_string("USer number\n");
   string name = get_string("User NAme\n");
   int age = get_int("Whats your age\n");
   printf("The user name is %s\n",name);
   printf("The user number is %s\n",num);
   printf("The user number is %i\n",age);
   return 0;

}


