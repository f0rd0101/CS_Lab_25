#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    printf("Enter the size of the arrays: ");
    scanf_s("%d", &N);

  
    int* A = (int*)malloc(N * sizeof(int));
    int* B = (int*)malloc(N * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of array A(Example: 2 3 4 5):\n");
    for (i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);
    }

    printf("Enter elements of array B(Example: 2 3 4 5):\n");
    for (i = 0; i < N; i++) {
        scanf_s("%d", &B[i]);
    }

    int maxA = A[0], indexA = 0;
    for (i = 1; i < N; i++) {
        if (A[i] > maxA) {
            maxA = A[i];
            indexA = i;
        }
    }

    int maxB = B[0], indexB = 0;
    for (i = 1; i < N; i++) {
        if (B[i] > maxB) {
            maxB = B[i];
            indexB = i;
        }
    }

    printf("Array A: maximum value = %d, index = %d\n", maxA, indexA);
    printf("Array B: maximum value = %d, index = %d\n", maxB, indexB);

   
    free(A);
    free(B);

    return 0;
}
