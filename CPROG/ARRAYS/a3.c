//max min element
#include <stdio.h>
void findmaxmin(int *arr, int size, int *min, int *max)
{
    *min = arr[0];
    *max = arr[size-1];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<*min)
        {
            *min = arr[i];
        }
        if(arr[i]>*max)
        {
            *max = arr[i];
        }
    }
}
int main()
{
    int min, max;
    int arr[5]={15,3,56,72,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    findmaxmin(arr, n, &min, &max);
    printf("MAX ELEMENT: %d\n", max);
    printf("MINIMUM ELEMENT:%d\n", min);
    return 0;
}