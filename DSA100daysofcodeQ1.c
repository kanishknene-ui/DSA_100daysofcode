#include<stdio.h>
int main(){
    int num,size,pos,value;
    int arr[100];
printf("enter the size:\n");
scanf("%d",&size);
    printf("enter the elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the position that is to be changed: ");
    scanf("%d",&pos);
    printf("enter the new element: ");
    scanf("%d",&value);
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    size++;
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
return 0;
}