#include<stdio.h>

int main()
{
    int a[] = {5, 6, 7, 2};
    int b[] = {8, 7, 2, 6};
    int sizea = sizeof(a) / sizeof(a[0]);
    int sizeb = sizeof(b) / sizeof(b[0]);

    int result[8];
    int resultSize = 0;

    // Add unique elements from array a
    for (int i = 0; i < sizea; i++) {
        int present = 0;
        for (int j = 0; j < resultSize; j++) {
            if (a[i] == result[j]) {
                present = 1;
                break;
            }
        }
        if (present == 0) {
            result[resultSize] = a[i];
            resultSize++;
        }
    }

    // Add unique elements from array b
    for (int i = 0; i < sizeb; i++) {
        int present = 0;
        for (int j = 0; j < resultSize; j++) {
            if (b[i] == result[j]) {
                present = 1;
                break;
            }
        }
        if (present == 0) {
            result[resultSize] = b[i];
            resultSize++;
        }
    }

    // Print the union array
    printf("Union array is: ");
    for (int i = 0; i < resultSize; i++) {
        if (i != 0) {
            printf(", ");
        }
        printf("%d", result[i]);
    }

    printf("\n");
    return 0;
}
