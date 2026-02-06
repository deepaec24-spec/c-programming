DYNAMIC MEMORY ALLOCATION

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *array;
    int sum =0;
    //get lenght
    printf("Enter the number of elements :");
    scanf("%d",&n);
    //memeory allocation
    array = (int*)calloc(n,sizeof(int));
    //validation
    if(array == NULL){
        printf("Memory not allocated \n");
        return 0;
    }
    else{
        printf("Memory allocated and the allocated memory is %d\n",n);
        
    }
    
    printf("Enter %d numbers by adding a gap for each numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    
    printf("The sum of all elements is : %d \n",sum);
    
    //destroy the memory
    free(array);
    printf("Memeory deleted successfully");
    return 0;
}