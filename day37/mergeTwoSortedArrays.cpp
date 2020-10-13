#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1, 3, 5, 6, 9};
    int b[] = {3, 5, 7, 8};
    int first = 0;
    int second = 0;

    while(first < 5 && second < 4){
        if(a[first] < b[second]){
            first++;
        }
        else if(a[first] == b[second]){
            first++;
        }else if(a[first] > b[second]){
            int temp = b[second];
            b[second] = a[first];
            a[first] = temp;
            sort(b, b+4);
            first++;
        }
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    for(int i = 0; i < 4; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}