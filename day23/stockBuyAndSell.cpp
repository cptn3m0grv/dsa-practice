#include <bits/stdc++.h>
using namespace std;

struct Interval{
    int buy;
    int sell;
};

void stockBuyAndSell(int arr[], int size){
    if(size == 1){
        return;
    }
    int count = 0;
    Interval sol[size/2 + 1]; 
    int i = 0;
    while(i < size - 1){
        while((i < size-1) && (arr[i+1] <= arr[i])){
            i++;
        }
        if(i == size - 1){
            break;
        }
        sol[count].buy = i++;

        while((i < size) && (arr[i] >= arr[i-1])){
            i++;
        }

        sol[count].sell = i-1;
        count ++;
    }
    if(count == 0){
        printf("No Profit");
    }else{
        for(i = 0; i < count; i ++){
            printf("(%d %d) ", sol[i].buy, sol[i].sell);
        }
    }
    return;
}


int main(){

    int test, size;
    scanf("%d", &test);

    while(test--){
        scanf("%d", &size);
        int arr[size];
        for(int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }

        stockBuyAndSell(arr, size);
        printf("\n");
    }
    return 0;
}