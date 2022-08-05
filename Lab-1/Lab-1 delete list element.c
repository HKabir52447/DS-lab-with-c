#include<stdio.h>
// array implementation
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int i,j,num,isFind=0;
    printf("Here is the array element: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element value that you want to delete: ");
    scanf("%d",&num);
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            j = i;
            isFind =1;
        }
    }
    if(isFind){
        for(i=j; i<10-1; i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Here is the array element after deletion :\n");
    for(i=0; i<10-1; i++)
    {
        printf("%d ",arr[i]);
    }
    }
    else{
        printf("Ops! this element is not present in this array");
    }
    getch();
}

