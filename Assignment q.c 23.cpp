#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256

int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0}, max = -1, index;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (max < freq[str[i]]) {
            max = freq[str[i]];
            index = i;
        }
    }

    printf("The maximum occurring character in the string is '%c' with frequency %d.\n", str[index], max);
return 0;
 }