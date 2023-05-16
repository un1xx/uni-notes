// slection sort in c
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

void selection_sort(int arr[], int size){
    int i, j, min;

    for (i=0; i<size-1; i++){
        min=i;
        for (j = i+1; j<size-1; j++)
            if (arr[j] < arr[min])
                min =j;
        swap(&arr[min], &arr[i]);
    }
}




int main(){
int arr[] = {1, 2, 5, 6, 0, 193, 0, 38, 333};
int size = 9;

printf("before sort -");
printarr(arr, size);
printf("after sort -");
selection_sort(arr, size);
printarr(arr, size);
}
