#include<stdio.h>
int main(){
    int value;
    int comparison;
    int n=5;
    int a[]={10,20,30,40,50};
    printf("enter the value of the array: ",value);
    scanf("%d",&value);
for(int i=0;i<n;i++){
    if(a[i]==value){
        printf("the index of the array %d\n",i);
comparison=i+1;
    printf("the comparison is %d\n",comparison);
    }
    
}
return 0;

}
