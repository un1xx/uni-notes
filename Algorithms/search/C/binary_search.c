// binary search in C

#include <stdio.h>

int binary_search(int arr[], int size, int key){
    int l=0, r=size-1, mid;
    while (l<=r){
        mid = (int)(l+r)/2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            l = mid+1;
        else
            r = mid-1;
    }
    return -1;
}

void main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, key;

    printf("enter value to search -> ");
    scanf("%d", &key);

    int index = binary_search(arr, size, key);
    if (index == -1){
        printf("%d is not in the array\n", key);
        return;
    }
    printf("%d is at the index = %d\n", key, index);
}