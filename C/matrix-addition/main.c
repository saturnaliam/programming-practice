#include <stdio.h>
#define N 3

void addMatrices(int matrixOne[][N], int matrixTwo[][N], int output[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            output[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }
}

int main() {
    int x[N][N] = {
        1, 3, 5,
        2, 3, 3,
        7, 4, 3
    };

    int y[N][N] = {
        4, 3, 3,
        2, 2, 7,
        6, 4, 1
    };

    int z[N][N] = {};

    addMatrices(x, y, z);

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
}