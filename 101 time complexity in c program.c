#include <stdio.h>

void linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    linearSearch(arr, n, target);
    return 0;
}
