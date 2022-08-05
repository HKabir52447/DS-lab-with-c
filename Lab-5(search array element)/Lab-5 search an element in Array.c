#include<stdio.h>
int main()
{
    int arr[10]= {10,20,30,40,50,60,70,80,90,100};
    int num,i,index;
    int isFound = 0;
    printf("Enter a integer number between 10 to 100: \n"); // get user input
    scanf("%d",&num);
    printf("Here is the array element: "); // print array element
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0; i<10; i++) // condition checking
    {
        if(arr[i]==num)
        {
            index=i;
            isFound = 1;
            break;
        }
    }
    if(isFound)
    {
        printf("Your number is found at index: %d",index);
    }
    else
    {
        printf("Your number is not found in this array");
    }

getch();
}
