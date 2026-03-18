//even and odd count
#include <stdio.h>
void countevenodd(int *arr)
{
    int even=0, odd=0;
    for(int i=0; i<6; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers are %d\n", even);
    printf("Odd numbers are %d\n", odd);
}
int main()
{
    int arr[6] = {1,2,3,4,5,9};
    countevenodd(arr);
    return 0;
}