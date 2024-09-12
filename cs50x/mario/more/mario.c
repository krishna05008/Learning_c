#include <cs50.h>
#include <stdio.h>
int print_rows(int rows);
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

int print_rows(int rows)
{
    int i, j, k, l, m, n;
    // Outer loop for
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
        for (l = rows; l < rows + 2; l++)
        {
            printf(" ");
        } printf("\n");
        // second prattern downstairs remaining
    }
return 0;
}
