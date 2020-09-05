#include<iostream>

using namespace std;
void printSpiral(int m, int n, int arr[][5]){
    int minCol = 0, maxCol = n, minRow = 0, maxRow = m;
    int i;
    while (minCol < maxCol && minRow < maxRow){
        for(i=minCol; i<maxCol; i++){
            cout << arr[minRow][i] << "\t";
        }
        cout<<"\n";
        minRow++;
        for(i=minRow; i<maxRow; i++){
            cout<< arr[i][maxCol -1] <<"\t";
        }
        cout<<"\n";
        maxCol--;
        if(minRow < maxRow){
            for(i=maxCol-1; i>=minCol; i--){
                cout<< arr[maxRow - 1][i]<<"\t";
            }
            maxRow--;
        }
        cout<<"\n";
        if(minCol < maxCol){
            for(i=maxRow-1; i>=minRow; i--){
                cout<< arr[i][minCol]<<"\t";
            }
            minCol++;
        }
        cout<<"\n";
    }
}
int main(){
    int R = 4, C = 5;
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    printSpiral(R, C, arr);
    return 0;
}