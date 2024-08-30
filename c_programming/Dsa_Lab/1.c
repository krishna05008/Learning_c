//Write a program to 
#include <stdio.h>

int main() {
    int a[7] = {6, 4, 3, 2, 19, 7, 1};
    int i, j, temp;

    // Sorting the array in ascending order
    for (i = 0; i < 6; ++i) {
        for (j = i + 1; j < 7; ++j) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array elements:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Shift elements to the right to make space for a new element at the beginning
    for (i = 7; i > 0; i--) {
        a[i] = a[i - 1];
    }

    // Add a new element at the beginning
    printf("Enter the new element: ");
    scanf("%d", &a[0]);

    // Display the updated array
    printf("Updated array elements:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
