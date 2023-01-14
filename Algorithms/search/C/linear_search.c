// linear search in C

#include <stdio.h>

int linear_search(int arr[], int size,  int key){
    int i=0;
    for (i; i<size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

void main(){
    int arr[] = {1, 2, 4, 5, 6, 3, 10, 9};
    int size = 8, key;

    printf("enter value to search -> ");
    scanf("%d", &key);

    int index = linear_search(arr, size, key);
    if (index == -1){
        printf("%d is not in the array\n", key);
        return;
    }
    printf("%d is at the index = %d\n", key, index);
}