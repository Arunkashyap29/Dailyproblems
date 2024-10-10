#include <stdio.h>

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[index++] = arr[i] + arr[n - 1 - i];
            
          
        } else {
            arr[index++] = arr[i] * 2;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}