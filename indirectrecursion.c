#include <stdio.h>

void func1(int n) {
    if (n > 0) {
        printf("%d ", n);
        func2(n - 1);
    }
}

void func2(int n) {
    if (n > 0) {
        printf("%d ", n);
        func1(n - 1);
    }
}

int main() {
    func1(5);
    return 0;
}

