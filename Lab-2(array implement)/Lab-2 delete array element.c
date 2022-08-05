#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int i,j,num,isFind=0;
    printf("Here is the array element: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the element position that you want to delete: ");
    scanf("%d",&num);
    if(num >10){
        printf("Please enter the position number from 1 to 10");
    }
    else{
        for(i=num-1; i<10; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("Here is the array element after deletion :\n");
    for(i=0; i<10-1; i++)
    {
        printf("%d ",arr[i]);
    }
    }

    getch();
}
