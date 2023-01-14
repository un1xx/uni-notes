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


void bubble_sort(int arr[], int size){
    int i, j;
    for (i=0; i<size-1; i++)
        for(j=0; j<size-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);

}

int main(){
int arr[] = {1, 2, 5, 6, 0, 193, 0, 38, 333};
int size = 9;

printf("before sort -");
printarr(arr, size);
printf("after sort -");
bubble_sort(arr, size);
printarr(arr, size);
}