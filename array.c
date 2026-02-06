#include<stdio.h>
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
        return i;
    }
    return -1;
}
int main(){
    int arr[10], n,key,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]); 
    }
    scanf("%d",&key);
    int result = linearSearch(arr, n, key);
    if(result != -1 )
    printf(" Price available");
    else
    printf("Prize Not found");
    return 0;
}
