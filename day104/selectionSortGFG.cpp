// { Driver Code Starts
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends




class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        return 0;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       int mNm;
       for(int i=0; i<n; ++i){
           mNm=i;
           for(int j=i+1; j<n; ++j){
               if(arr[j]<arr[mNm]){
                   mNm=j;
               }
           }
           int temp = arr[mNm];
           arr[mNm]=arr[i];
           arr[i]=temp;
       }
    }
};

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
