//lookup table
#include <stdio.h>
int main()
{
    int square[6];
    for(int i=0; i<6; i++)
    {
        square[i]=i*i;
    }
    for(int j=0; j<6; j++)
    {
        printf("%d\n", square[j]);
    }
return 0;
}