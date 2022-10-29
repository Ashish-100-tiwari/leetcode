//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int i = l ;        // starting index of left half of arr
        int j = m + 1;   // starting index of right half of arr
        int f = l ;        // index used to transfer elements in temporary array
        int temp[100000] ; // temporary array

        //storing elements in the temporary array in a sorted manner//

        while (i <= m && j <= r) {
            if (arr[i] < arr[j]) {
                temp[f] = arr[i]  ;
                i++ ;
            }
            else {
                temp[f] = arr[j]  ;
                j++ ;
            }
            f++ ;
        }

        // if elements on the left half are still left //

        if (i > m) {
            while (j <= r) {
                temp[f] = arr[j]  ;
                f++ ; j++ ;
            }
        }
        else {
            //  if elements on the right half are still left //
            while (i <= m) {
                temp[f] = arr[i]  ;
                f++ ; i++ ;
            }
        }

        // transfering all elements from temporary to arr //
        for (int f = l ; f <= r; f++) {
            arr[f] = temp[f] ;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r) {
            int mid = (l + r) / 2 ;
            mergeSort(arr, l, mid)  ;  // left half
            mergeSort(arr, mid + 1, r)  ; // right half
            merge(arr, l, mid, r)  ;  // merging sorted halves
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends