#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Not a palindrome.\n");
            return 0;
        }
    }

    printf("Palindrome.\n");

    return 0;
}