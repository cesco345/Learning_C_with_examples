// Write a program to print the position of the smallest number of n numbers using arrays.

#include <stdio.h>

int main()
{
    int i, n, arr[20], small, pos;
    
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    printf("\n Enter the elements : ");
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    small = arr[0];
    pos =0;

    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
        small = arr[i];
        pos = i;
        }
    }   
    
    printf("\n The smallest element is : %d", small);
    printf("\n The position of the smallest element in the array is : %d\n", pos);

    return 0;
}
