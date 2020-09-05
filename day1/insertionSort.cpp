#include<iostream>

void ascendingSort(int arr[], int size);
void descendingSort(int arr[], int size);
void printArray(int arr[], int size);

int main(){

    int arr[] = {2,14,9,3,1,7,3,1,7,11,5,11,15,14,8,15,12,12,12,3,4,10,15,15,7,3,3,8,11,1,9,9,4,11,12,13,1,9,9,7,3,6,12,3,11,3,12,6,8,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"0. For sorting the array in ascending order" << std::endl <<"1. For sorting the array in descending order." << std::endl;
    int choice;
    int i = 0;

    while(i<=1){
        std::cout<< "Enter your choice:  " << std::endl;
        std::cin >> choice;

        if(choice == 0){
            ascendingSort(arr, size);
        }else if(choice == 1){
            descendingSort(arr, size);
        }

        printArray(arr, size);

        i++;
    }

    return 0;
}

void ascendingSort(int arr[], int size){
    int i, j, key;
    for(i = 1; i<size; i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1]  = key;
    }
}

void descendingSort(int arr[], int size){
    int i, j, key;
    for(i = size - 2; i>=0; i--){
        key = arr[i];
        j = i + 1;
        while(j<size && arr[j]>key){
            arr[j-1] = arr[j];
            j = j + 1;
        }
        arr[j-1] = key;
    }
}

void printArray(int arr[], int size){
    int i;
    std::cout << std::endl;
    for(i=0; i<size; i++){
        std::cout << arr[i] << "\t";
    }
}