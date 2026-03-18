//linear search in array
//make a key and a counter
//print the message in the terminal   
//check the number of occurences of the key element in the array.

#include <stdio.h>
//main function
int main()
{
    int arr[5] = {10,20,30,30,30};
    int key=30;
    int count=0;//counter whenever the key value obtained.
    for(int i=0; i<5;i++)
    {
        if(arr[i] == key)
        {
            printf("Element is present in the array at index %d\n",i);
            count++;
        }
    }
    printf("Number of occurences of the element in the array is %d", count);
return 0;
}