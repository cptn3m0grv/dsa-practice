#include <bits/stdc++.h>
using namespace std;

void permute(string str, int left, int right){
    if(left == right){
        cout << str << " ";
    }else{
        for(int i = left; i <= right; i++){
            swap(str[left], str[i]);
            permute(str, left+1, right);
            swap(str[left], str[i]);
        }
    }
}

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        string str;
        cin >> str;
        int size = str.size();
        permute(str, 0, size-1);
        printf("\n");
    }
    return 0;
}