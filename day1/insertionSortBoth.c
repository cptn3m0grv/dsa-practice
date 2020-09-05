#include<stdio.h>

void ascendingSort(int arr[], int n){
    int i, j, key;
    for(i = 1; i<n; i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void descendingSort(int arr[], int n){
    int i, j, key;
    for(i=n-1; i>=0; i--){
        key = arr[i];
        j = i + 1;

        while(j<=n-1 && arr[j]>key){
            arr[j-1] = arr[j];
            j = j + 1;
        }

        arr[j-1] = key;
    }
}

void printArray(int arr[], int n){
    int i;
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){

    int arr[] = {815,620,452,359,687,662,269,938,915,319,349,702,169, 620, 915};
    int n = sizeof(arr)/sizeof(arr[0]);
    int choice;

    while(1){
        printf("0. To sort the array in descending order.\n1. To sort the array in ascending order.\n");
        printf("Enter you choice (0/1):  ");
        scanf("%d", &choice);

        if(choice == 0){
            printf("Descending order: \n");
            descendingSort(arr, n);
        }else{
            printf("Ascending order: \n");
            ascendingSort(arr, n);
        }

        printArray(arr, n);
    }

    return 0;
}