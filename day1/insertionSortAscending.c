#include<stdio.h>
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    
    int arr[] = {815,620,452,359,687,662,269,938,915,319,349,702,169,726,843,722,329,262,609,478,904,938,697,388,714,334,452,219,883,570,498,399,353,341,728,310,831,790,828,751,215,727,936,289,161,151,68,361,502,417,338,613,88,777,398,211,147,28,269,826,762,41,462,434,815,421,869,346,541,871,732,342,753,280,180,558,968,158,978,32,539,485,835,321,789,649,622,391,575,421,145,666,822,853,361,393,97,878,647,25};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}   

void insertionSort(int arr[], int n){
    int i, j, key;
    for(i=1; i<n; i++){
        j = i-1;
        key = arr[i];
        
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        
        arr[j+1] = key;

    }
}

void printArray(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

