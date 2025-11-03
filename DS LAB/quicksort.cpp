#include <iostream>
using namespace std;

// Function to partition the array
int partition(int *arr, int s, int e) {
    int pivot = arr[s];
    int cnt =0;
    for(int i=s+1;i<=e;i++){
        if (arr[i] <= pivot)
        cnt ++ ;

    }
    int pivotindex = cnt +s;
    swap(arr[pivotindex],arr[s]);

    int i=s ;
    int j=e ;
    while(i<pivotindex && j>pivotindex){
        while( arr[i] <= arr[pivotindex])
        {i++;}
        while(arr[j]>arr[pivotindex]){
        j-- ;
    }
    if( i<pivotindex && j>pivotindex)
   {
    swap (arr[i++],arr[j--]);
   }
}
return pivotindex;
}

// Function to implement Quick Sort
void quickSort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partition the array and get the pivot index
    int p = partition(arr, s, e);

    // Recursively sort elements before and after the partition
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[5] = {3, 2, 7, 5, 4};
    int n = 5;

    // Sorting the array
    quickSort(arr, 0, n - 1);

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
