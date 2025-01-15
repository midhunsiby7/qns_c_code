#include <stdio.h>
int main() {
    char name[50], address[100], email[50], phone[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your address: ");
    scanf(" %[^\n]", address);
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("\nYour Bio Data:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Email: %s\n", email);
    printf("Phone Number: %s\n", phone);
}
