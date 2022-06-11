#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j,num,row,col,isFound = 0;

    printf("Enter the number that you want to search: ");
    scanf("%d",&num);
    printf("Here is the array element: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]==num){
                isFound =1;
                row = i;
                col = j;
                break;
            }
        }
    }
    if(isFound){
        printf("Your number (%d) is found at index [%d,%d]",num,row,col);
    }
    else{
        printf("Your number (%d) is not found in this array",num);
    }
    getch();
}
