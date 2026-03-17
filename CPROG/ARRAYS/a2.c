//sum average
#include <stdio.h>
void sumcalculate(int *arr)
{
    int sum = 0;
    for(int i=0; i<arr[i]; i++)
    {
        sum+=arr[i];
    }
    printf("Sum is %d",sum);
}

int main()
{
    int arr[5] = {10,20,30, 40, 50};
    sumcalculate(&arr[0]);
    return 0;
}