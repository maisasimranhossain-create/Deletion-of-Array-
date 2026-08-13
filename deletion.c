#include <stdio.h>

int deletion(int arr[],int n, int pos){
    int i;
    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
    return n;
}
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    int i;
    int pos=2;
    n=deletion(arr,n,pos);
    printf("After deletion: ");
    for(i=0; i<n; i++){
        printf("%d,",arr[i]);
    }
}