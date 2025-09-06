#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int n = 8;

    for (int i = 1; i <= n; i++) {
        int next = a + b;
        printf("%d\n", next);

        // Update a and b for the next iteration (reassign not swap)
        a = b;
        b = next;
    }

    return 0;
}
