#include <cs50.h>
#include <stdio.h>

// Function to print the pattern
void print_rows(int rows)
{
    int i, j, k;
    for (i = 0; i <= rows - 1; i++)
    {
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main(void)
{
    int rows;
    do
    {
        rows = get_int("Enter the number of rows: ");
    }
    while (rows < 1);
    print_rows(rows);
}
