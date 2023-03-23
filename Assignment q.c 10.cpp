#include<stdio.h>
#include <string.h>

void swap(char *a, char *b);
void sort(char **names, int n, int order);

int main() {
    char *names[] = {"Banana", "Carrot", "Radish", "Apple", "Jack"};
    int n = sizeof(names) / sizeof(names[0]);
    char order;

    printf("Original list of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    printf("Enter order (A for ascending, D for descending): ");
    scanf("%d",&order);
    
    sort(names, n, order);

    printf("Sorted list of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void swap(char *a, char *b) {
    char tmp[100];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

void sort(char **names, int n, int order) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if ((order == 'A' && strcmp(names[j], names[j+1]) > 0) || 
                (order == 'D' && strcmp(names[j], names[j+1]) < 0)) {
                swap(names[j], names[j+1]);
            }
}
}
}
