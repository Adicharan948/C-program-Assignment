#include<stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            printf("  "); // print two spaces
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", k); // print the number k
        }
        printf("\n"); // move to the next line
    }
    
    return 0;
}