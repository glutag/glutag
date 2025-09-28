#include <stdio.h>
#include <string.h>

void selection_sort (int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int minindex = i;
        for (int j = i+1; j <  n; j++){
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}

void printarray(int arr[], int n){
    for (int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int arr[] = {5,8,7,6,3,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("unsorted array: \n");
    printarray(arr, n);
    selection_sort(arr, n);
    printf("sorted array: \n");
    printarray(arr, n);
}