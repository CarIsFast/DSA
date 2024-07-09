#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map <int , bool> rowCheck;
unordered_map <int , bool> upperDiagonal;
unordered_map <int , bool> lowerDiagonal;


void printBoard(vector<vector<char>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(vector<vector<char>> &board, int row, int col, int n){
    if(rowCheck[row] )
        return false;
    if(upperDiagonal[n-1+col-row])
        return false;
    if(lowerDiagonal[col+row])
        return false;
    return true;
    // //check left
    // int i = row;
    // int j = col;
    // while(j>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }    
    //     j--;
    // } 
    // //check upper left diagonal
    // i = row;
    // j = col;
    // while(j>=0 && i>=0){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i--;
    //     j--;
    // } 
    // //check bottom left diagonal
    // i = row;
    // j = col;
    // while(j>=0 && i < n){
    //     if(board[i][j] == 'Q'){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }

    // return true; 
}

void solve(vector<vector<char>> &board, int col, int n){
    //base case
    if(col >= n){
        printBoard(board, n);
        return;
    }
    for(int row=0; row<n; row++){
        if(isSafe(board, row, col, n)){
            board[row][col] = 'Q';

            rowCheck [row] = true;
            upperDiagonal [n-1+col-row] = true;
            lowerDiagonal [col+row] = true;

            solve(board, col+1, n);
            board[row][col] = '-';

            rowCheck [row] = false;
            upperDiagonal [n-1+col-row] = false;
            lowerDiagonal [col+row] = false;
        }
    }

}

int main() {
    int n=5;
    vector<vector<char>> board  (n, vector<char> (n,'-'));
    int col = 0;
    solve(board,col, n);
    return 0;
}