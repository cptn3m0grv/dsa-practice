#include <bits/stdc++.h>
using namespace std;

void nextLargestElement(long arr[], int size){

    stack<long> st;
    vector<long> v;
    for(int i = size-1; i >= 0; i--){
        if(st.size() == 0){
            v.push_back(-1);
        }else if(st.size() > 0 && st.top() > arr[i]){
            v.push_back(st.top());
        }else if(st.size() > 0 && st.top() <= arr[i]){
            while(st.size() > 0 && st.top() <= arr[i]){
                st.pop();
            }
            if(st.size() == 0){
                v.push_back(-1);
            }else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for(long x: v){
        printf("%ld ", x);
    }

}

int main(void){
    int test;
    scanf("%d", &test);
    while(test--){ 
        int size;
        scanf("%d", &size);
        long arr[size];
        for(int i = 0; i < size; i++){
            scanf("%ld", &arr[i]);
        }
        nextLargestElement(arr, size);
        printf("\n");
    }

    return 0;
}