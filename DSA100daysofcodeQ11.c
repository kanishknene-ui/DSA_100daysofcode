#include<stdio.h>
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[j]){
            j++;
            a[j]=a[i];
        }
    }
    for(int i=0;i<=j;i++){
        printf("%d",a[i]);
    }

    return 0;
}