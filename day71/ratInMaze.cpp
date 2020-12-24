#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    
    return false;
}


bool ratMaze(int** arr, int x, int y, int n, int** solArr){
    
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    
    if(isSafe(arr, x, y, n)){
        solArr[x][y]=1;
        if(ratMaze(arr, x+1, y, n, solArr)){
            
            return true;
        }
        if(ratMaze(arr, x, y+1, n, solArr)){
            
            return true;
        }
        
        solArr[x][y]=0;
        return false;
    }
    return false;
}


int main(){
    fastio;
    int N;
    cin>>N;
    
    int** arr = new int*[N];
    
    for(int i = 0; i < N; ++i){
        arr[i] = new int[N];
    }
    
    int** solArr = new int*[N];
    
    for(int i = 0; i < N; ++i){
        solArr[i] = new int[N];
        for(int j = 0; j < N; ++j){
            solArr[i][j]=0;
        }
    }
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> arr[i][j];
        }
    }
    
    if(ratMaze(arr, 0, 0, N, solArr)){
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                cout << solArr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}