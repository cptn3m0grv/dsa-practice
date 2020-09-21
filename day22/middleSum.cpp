#include <bits/stdc++.h>
using namespace std;

int middleSum(vector<int> A, int size){
    auto iter = A.at(size/2);
    auto iter2 = A.at(size/2 + 1);
    // return (iter
    return iter+iter2;
}


int main(){

    int test, size;
    scanf("%d", &test);

    while(test--){
        scanf("%d", &size);
        vector<int> A;

        for(int i = 0; i < (size*2); i++){
            int data;
            scanf("%d", &data);
            A.push_back(data);
        }
        sort(A.begin(), A.end());
        int sum = middleSum(A, (size*2)-1);
        printf("%d\n", sum);
    }

    return 0;
}