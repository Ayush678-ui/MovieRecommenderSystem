//reverse the array
#include <stdio.h>
void printarray(int *ptr,int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\t",ptr[i]);
    }
}
void reversearray(int *arr, int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    reversearray(arr, size);
    printarray(arr, size);
    return 0;
}