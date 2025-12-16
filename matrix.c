#include <stdio.h>

// Function declarations
void add(int a[10][10], int b[10][10], int r, int c);
void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2);
void transpose(int a[10][10], int r, int c);

int main() {
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;

    // Input matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    
    printf("\nMatrix A:\n");
    print(a, r1, c1);

    // Input matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("\nMatrix B:\n");
    print(b, r2, c2);

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Addition:\n");
        add(a, b, r1, c1);
    } else {
        printf("\nAddition not possible\n");
    }

    // Matrix Multiplication
    if (c1 == r2) {
        printf("\nMatrix Multiplication:\n");
        multiply(a, b, r1, c1, c2);
    } else {
        printf("\nMultiplication not possible\n");
    }

    // Transpose of Matrix A
    printf("\nTranspose of Matrix A:\n");
    transpose(a, r1, c1);

    // Transpose of Matrix B
    printf("\nTranspose of Matrix B:\n");
    transpose(b, r2, c2);

    return 0;
}


// Function of Printing the Matrix
void print(int a[10][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Function for Addition of Matrix
void add(int a[10][10], int b[10][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

// Function for multiplication of Mtrix
void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int result[10][10];

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

// Function for transpose of Matrix
void transpose(int a[10][10], int r, int c) {
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
