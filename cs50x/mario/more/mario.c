#include <cs50.h>
#include <stdio.h>

void print_rows(int rows);

int main(void)
{
    int rows;
    do
    {
        rows = get_int("Number of rows :");
    }
    while (rows < 1);
    print_rows(rows);
}

void print_rows(int rows)
{ // Outer loop for rows
    for (int i = 0; i <= rows - 1; i++)
    {
        //loop for left spaces
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        //loop for left aligned #
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        //loop for 2 extra spaces
       printf("  ");
        //loop for right alinged #
        for (int m = 0; m < i + 1; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
