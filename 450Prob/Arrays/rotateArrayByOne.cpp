// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends

void reverse(int arr[], int size, int low, int high){
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

void rotate(int arr[], int n)
{
    reverse(arr, n, 0, n-2);
    reverse(arr, n, 0, n-1);
}
