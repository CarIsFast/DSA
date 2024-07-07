#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int arr[][3], int row, int col, int x, int y, vector<vector<bool>> &visited){
    if((x>=0 && x<row && y>=0 && y<col ) && (arr[x][y] == 1) && (visited[x][y] == false)){
        return true;
    }else {return false;}
}

void solve(int arr[3][3], int row, int col, int x, int y, vector<vector<bool>> &visited, vector<string> &path, string output){
    if(x == row-1 && y==col-1){
        path.push_back(output);
        return;
    }
    //down  i+1, j
    if(isSafe(arr, row, col, x+1 , y , visited)){
        visited[x+1][y] = true;
        solve(arr, row, col, x+1, y, visited, path, output + 'D');
        visited[x+1][y] = false;
    }
    //left i,j-1
    if(isSafe(arr, row, col, x , y-1 , visited)){
        visited[x][y-1] = true;
        solve(arr, row, col, x, y-1, visited, path, output + 'L');
        visited[x][y-1] = false;
    }
    //right i, j+1
    if(isSafe(arr, row, col, x , y+1 , visited)){
        visited[x][y+1] = true;
        solve(arr, row, col, x, y+1, visited, path, output + 'R');
        visited[x][y+1] = false;
    }
    //up i-1, j
    if(isSafe(arr, row, col, x-1 , y , visited)){
        visited[x-1][y] = true;
        solve(arr, row, col, x-1, y, visited, path, output + 'U');
        visited[x-1][y] = false;
    }
}
int main() {
    int arr [3][3] = {{1,0,0},
                      {1,1,0},
                      {1,1,1}};
    int row=3;
    int col=3;

    vector<vector<bool>> visited (row,vector<bool>(col,false));
    vector<string> path;
    string output = "";

    visited [0][0] = true;

    solve(arr, row, col,0,0, visited, path, output);

    for(auto i : path){
        cout<<i<<" ";
    }
    return 0;
}