#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("  "); // Print spaces
        }
        for (int k = 10 - i; k >= 6; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}