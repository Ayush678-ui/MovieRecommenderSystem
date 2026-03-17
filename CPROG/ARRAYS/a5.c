//copy one array to another
#include <stdio.h>
void printoriginalarray(int *arr1, int size){
    printf("First array is\n");
    for (int i=0; i<size; i++)
    {
        printf("%d\t",arr1[i]);
    }
}
void printarray(int *arr2, int size){
    printf("\nSecond array is\n");
    for (int i=0; i<size; i++)
    {
        printf("%d\t",arr2[i]);
    }
}
void copyarray(int *arr1, int *arr2, int size)
{
    for(int i=0; i<size; i++)
    {
        arr2[i] = arr1[i];
    }
}
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5];
    int size = sizeof(arr1)/sizeof(arr1[0]);
    copyarray(arr1,arr2,size);
    printoriginalarray(arr1, size);
    printarray(arr2, size);
    return 0;
}