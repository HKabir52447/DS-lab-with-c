#include<stdio.h>
int main()
{
    int arr[10],i,index=0;
    printf("Enter 10 integer number: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxNum = arr[0];
    printf("\n");

    for(i=0; i<10; i++)
    {
        if(maxNum < arr[i])
        {
            maxNum = arr[i];
            index = i;
        }
    }
    printf("The largest number is %d and it's index is %d",maxNum,index);
}
