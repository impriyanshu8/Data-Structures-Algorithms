#include <iostream>
using namespace std;

// Function to merge two sorted sub-arrays
void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values to the first array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy values to the second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge the two sorted arrays
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of the first array
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of the second array
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free the memory allocated for temporary arrays
    delete[] first;
    delete[] second;
}

// Function to perform merge sort
void mergeSort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    // Sort the left part
    mergeSort(arr, s, mid);

    // Sort the right part
    mergeSort(arr, mid + 1, e);

    // Merge the sorted parts
    merge(arr, s, e);
}

int main() {
    int arr[5] = {3, 2, 7, 5, 4};
    int n = 5;

    // Sorting the array
    mergeSort(arr, 0, n - 1);

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
