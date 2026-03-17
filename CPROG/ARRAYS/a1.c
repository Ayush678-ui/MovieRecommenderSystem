//input the array and print it
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the elements");
        scanf("%d",&arr[i]);
       }

    for(int j=0; j<n; j++)
    {
        printf("\n%d",arr[j]);
    }
    return 0;
}