
#include <stdio.h>
void array_reversse(int *rev ,int size){
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp = rev[i];
        rev[i]=rev[j];
        rev[j]=temp;
    }
}
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<sz;i++){
        scanf("%d",&arr[i]);
    }
    array_reversse(arr,sz);
    for(int i =0;i<sz;i++){
        printf("%d ",arr[i]);
    }
}