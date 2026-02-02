#include <stdio.h>
int main(){
    int arr[100]={10,20,30,40,50};
    int pos,n=5,num,x;
    printf("GIVEN ARRAY:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("enter position to be deleted(1 to %d)\n",n);
    scanf("%d",&pos);
    for (int i = pos-1; i <n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("array after deleting element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    return 0;

}