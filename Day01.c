//Insert an Element in an Array

//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.


#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int pos, value;
    scanf("%d",&pos);
    scanf("%d",&value);

    int* newArr = (int*)malloc(sizeof(int) *  (n+1));

    for (int i = 0; i < pos - 1; i++) {
        newArr[i] = arr[i];
    }
    newArr[pos - 1] = value;
    for (int i = pos - 1; i < n; i++) {
        newArr[i + 1] = arr[i];
    }

    for (int i = 0; i < n + 1; i++) {
        printf("%d ",newArr[i]);
    }

    free(newArr);


    return 0;
}
