#include <stdio.h>

int main() {
    char months[12][10] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        printf("Month name: %s\n", months[month - 1]);
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}


