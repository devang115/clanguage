#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of two arrays using pointers
int* sumArrays(int *arr1, int *arr2, int size) {
    int *sum = (int*)malloc(size * sizeof(int));
    if (sum == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
    return sum;
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int *arr1 = (int*)malloc(size * sizeof(int));
    int *arr2 = (int*)malloc(size * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr1 + i);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", arr2 + i);
    }

    int *sum_array = sumArrays(arr1, arr2, size);

    if (sum_array != NULL) {
        printf("Sum of the two arrays:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", *(sum_array + i));
        }
        printf("\n");
        free(sum_array);
    }

    free(arr1);
    free(arr2);

    return 0;
}