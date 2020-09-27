#include <bits/stdc++.h>
using namespace std;
int t[1002][1002];

int knapsack(int weight[], int values[], int capacity, int size){
    if(size == 0 || capacity == 0){
        return 0;
    }

    if(t[size][capacity] != -1){
        return t[size][capacity];
    }

    if(weight[size - 1] <= capacity){
        return t[size][capacity] = max(values[size - 1] + knapsack(weight, values, capacity - weight[size-1], size - 1), knapsack(weight, values, capacity, size -1 ));
    }else if(weight[size - 1] > capacity){
        return t[size][capacity] = knapsack(weight, values, capacity, size - 1);
    }
}

int main(void){
    memset(t, -1, sizeof(t));
    int test;
    scanf("%d", &test);
    while(test--){
        int size;
        scanf("%d", &size);
        int capacity;
        scanf("%d", &capacity);
        int values[size];
        int weight[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &values[i]);
        }
        for(int i = 0; i < size; i++){
            scanf("%d", &weight[i]);
        }
        int max = knapsack(weight, values, capacity, size);
        printf("%d\n", max);
    }
    return 0;
}