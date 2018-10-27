//implements bubble sort
#include <stdio.h>
#include <stdlib.h>

//function to print an array
void printArray(int *arr, int n)
{
    int i;
    printf("{");
    for(i=0; i<n; ++i)
        printf(" %d", *(arr+i));
    printf(" }");
}

//function to implemnt bubble sort
void bubbleSort(int *arr, int n)
{
    int i, j, temp;
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n-i-1; ++j)
        {
            if (*(arr+j+1) < *(arr+j))
            {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}


// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
