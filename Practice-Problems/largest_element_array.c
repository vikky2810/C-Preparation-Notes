#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {12, 45, 2, 67, 34, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Largest element: %d\n", findLargest(arr, size));

    return 0;
}
