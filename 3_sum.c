#include <stdio.h>
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Partition function 
int partition(int arr[], int low, int high) 
{ 
  
    // initialize pivot to be the first element 
    int pivot = arr[low]; 
    int i = low; 
    int j = high; 
  
    while (i < j) { 
  
        // condition 1: find the first element greater than 
        // the pivot (from starting) 
        while (arr[i] <= pivot && i <= high - 1) { 
            i++; 
        } 
  
        // condition 2: find the first element smaller than 
        // the pivot (from last) 
        while (arr[j] > pivot && j >= low + 1) { 
            j--; 
        } 
        if (i < j) { 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[low], &arr[j]); 
    return j; 
} 
  
// QuickSort function 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) { 
  
        // call Partition function to find Partition Index 
        int partitionIndex = partition(arr, low, high); 
  
        // Recursively call quickSort() for left and right 
        // half based on partition Index 
        quickSort(arr, low, partitionIndex - 1); 
        quickSort(arr, partitionIndex + 1, high); 
    } 
} 
  
// driver code 










int main()
{
    int n ;
    printf("Enter the length of an array\n");
    scanf ("%d", &n);
    int arr[n];
    if (n==0){printf ("none");}
    else{
    printf("Enter the indices of an array\n");
    for (int i = 0 ; i < n ; ++i){
        int k ;
        scanf("%d",&k);
        arr[i] = k ;
    }}
    
    int sum ;
    printf("Enter the result sum\n");
    scanf("%d", &sum);
    
    if (n == 1){
        if (arr[0] == sum){printf("%d", arr[0]);}
    }
    else if (n == 2){
        if ( arr[0] + arr[1] == sum ){ printf("%d , %d ",arr[0], arr[1]);}
    }
    else{
    quickSort( arr , 0 , n - 1) ;
    
    
    
    
    for (int i = 0 ;i <= n - 3 ; i ++){
        int j = i + 1 ;
        int k = n - 1;
        while (i > 0 && arr[i] == arr [i - 1]){continue ;}
        
        while ( j < k ){
            int sum_0 = arr[i] + arr[j] + arr[k] ;
            if ( sum_0 > sum ){
                k--;
            }
            else if ( sum_0 < sum ){
                j++;
            }
            else{
                printf ("the triple is : %d , %d, %d \n",arr[i] , arr[j] ,arr[k] );
                while(arr[j] == arr[j+1]){ j++ ; }
                while(arr[k] == arr[k - 1]){ k --; }
                j++; 
                k--; 
            }
        }
    }}
    
    return 0;}

