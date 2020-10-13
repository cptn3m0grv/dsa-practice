#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    vector<int> V(arr, arr+12);
    int low = 0;
    int high = V.size() - 1;
    int mid = 0;
    int temp;

    while(mid <= high){
        switch (V[mid])
        {
        case 0:
            temp = V[low];
            V[low] = V[mid];
            V[mid] = temp;
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            temp = V[high];
            V[high] = V[mid];
            V[mid] = temp;
            high--;
            break;
        }
    }


    for(int c: V){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}