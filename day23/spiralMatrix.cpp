#include <bits/stdc++.h>
using namespace std;


int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int m, n;
        scanf("%d %d", &m, &n);
        int arr[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        int minCol = 0, maxCol = n, minRow = 0, maxRow = m;
        int i;
        while (minCol < maxCol && minRow < maxRow){
            for(i=minCol; i<maxCol; i++){
                printf("%d ", arr[minRow][i]);
            }
            minRow++;
            for(i=minRow; i<maxRow; i++){
                printf("%d ", arr[i][maxCol -1]);
            }
            maxCol--;
            if(minRow < maxRow){
                for(i=maxCol-1; i>=minCol; i--){
                    printf("%d ", arr[maxRow - 1][i]);
                }
                maxRow--;
            }
            if(minCol < maxCol){
                for(i=maxRow-1; i>=minRow; i--){
                    printf("%d ", arr[i][minCol]);
                }
                minCol++;
            }
        }
        printf("\n");
    }
    return 0;
}