#include <stdio.h>

// Raita algoritmasý
void raita_sort(int arr[], int n) {
    int left = 0, right = n - 1;
    int i;
    while (left < right) {
        for ( i = left; i < right; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        right--;
        int i;
        for ( i = right; i > left; i--) {
            if (arr[i] < arr[i-1]) {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
        left++;
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    raita_sort(arr, n);
    int i;

    printf("Siralanmis dizi: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

