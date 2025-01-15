#include <stdio.h>
#include <math.h>

void find_roots(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    double root1, root2;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    } else {
        printf("Roots are complex\n");
    }
}

int main() {
    int a, b, c;

    printf("Enter coefficient a :");
    scanf("%d", &a);
    printf("Enter coefficient b :");
    scanf("%d", &b);
    printf("Enter coefficient c :");
    scanf("%d", &c);

    find_roots(a, b, c);

    return 0;
}
