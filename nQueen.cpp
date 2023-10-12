#include <iostream>
using namespace std;

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col, int N) {
    
    // for rows
    for(int i=col; i<col; i++) {
        if(board[row][i] == 1) {
            return false;
        }
    }

    // for diagonal from top left to bottom right
    for(int i=0, j=0; i <= row && j <= col; i++, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // for diagonal from bottom left to top right
    for(int i=row, j=0; i >= 0 && j <= col; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

int main() {

    int N;

    cout << "Enter the number of Queens (N): ";
    cin >> N;

    if(N <= 3) {
        cout << "No feasible solution!";
    }

    int board[N][N] = {};


    return 0;
}