#include <stdio.h>

int find_index(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int index = find_index(arr, n, x);
    if (index == -1) {
        printf("%d not found\n", x);
    } else {
        printf("%d found at index %d\n", x, index);
    }
    
    return 0;
}
