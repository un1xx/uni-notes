// insertion sort in c
// slection sort in c

// bubble sort in C
// Time complexity = O(n^2)
#include <stdio.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printarr(int arr[], int size){
    int i=0;
    printf("[ ");
    for (i; i<size; i++)
        printf("%d ", arr[i]);
    printf("]\n");
}

void insertion_sort(int arr[], int size){
    int i, j, k;
    for (i=1; i<size; i++){
        j = i-1;
        k = arr[i];
        while (j>=0 && arr[j]>k)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
        
    }
}




int main(){
int arr[] = {1, 2, 5, 6, 0, 193, 0, 38, 333};
int size = 9;

printf("before sort -");
printarr(arr, size);
printf("after sort -");
insertion_sort(arr, size);
printarr(arr, size);
}