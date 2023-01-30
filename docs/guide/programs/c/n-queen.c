//  C program to solve the N-Queen problem
//  using backtracking

#include <stdio.h>
#include <stdlib.h>

#define N 4

int board[N][N];

void print_board(void)
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf(" \n");
    }
}

int is_safe(int row, int col)
{
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

int solve(int col)
{
    int i;
    if (col >= N)
        return 1;

    for (i = 0; i < N; i++) {
        if (is_safe(i, col)) {
            board[i][col] = 1;
            if (solve(col + 1))
                return 1;
            board[i][col] = 0; // BACKTRACK
        }
    }
    return 0;
}

int main(void)
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            board[i][j] = 0;

    if (solve(0) == 0) {
        printf("Solution does not exist");
        return 0;
    }

    print_board();
    return 0;
}

// Output:
// 0 0 1 0 0 0 0 0  0 0 0 0 0 1 0 0  0 0 0 0 0 0 0 1  0 1 0 0 0 0 0 0  0 0 0 0 0 0 1 0  0 0 0 0 1 0 0 0  0 0 0 0 0 0 0 0  1 0 0 0 0 0 0 0