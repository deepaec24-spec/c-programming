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


Enter the number of elements :2
Memory allocated and the allocated memory is 2
Enter 2 numbers by adding a gap for each numbers
10 13
The sum of all elements is : 23 
Memeory deleted successfully




#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,newstrength;
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
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
     //allocating new size
    printf("Enter the new total size:");
    scanf("%d",&newstrength);
    
    //new allocation
    array = (int*)realloc(array,newstrength*sizeof(int));
    
    //new validation
    if(array == NULL){
        printf("Memory allocation failed again\n");
    }
    else{
        printf("New allocation successfull with the space of %d items\n",newstrength);
    }
    
    //adding new elements
    printf("Enter remaining numbers with gap for each number:\n");
    for(int i=n; i<newstrength; i++){
        scanf("%d",&array[i]);
        sum += array[i];
    }
    
    printf("The sum of all elements is : %d \n",sum);
    
    //destroy the memory
    free(array);
    printf("Memeory deleted successfully");
    return 0;
}




Enter the number of elements :4
Memory allocated and the allocated memory is 4
Enter 4 numbers by adding a gap for each numbers
10 20 30 40
Enter the new total size:8
New allocation successfull with the space of 8 items
Enter remaining numbers with gap for each number:
20 30 40 50
The sum of all elements is : 240 
Memeory deleted successfully


#include<stdio.h>
int main(){
    int numbers[5] = {8,9,7,5,4};
    int *point = numbers;
    
    printf("%d\n",*point);
    printf("%d\n",*(point +1));
    point++;
    printf("%d\n",*point);
    point--;
    printf("%d\n",*point);
    point+=2;
    printf("%d\n",*point);
    return 0;
}

8
9
9
8
7



#include<stdio.h>
int main(){
    int numbers[5] = {8,9,7,5,4};
    int *point = numbers;
    
    printf("%d\n",*point);
    printf("%d\n",*(point +1));
    printf("%d\n",*(point +2));
    printf("%d\n",*(point+3));
    printf("%d\n",*(point+4));
    printf("%d\n",*(point+5));
    return 0 ;
}


8
9
7
5
4
0


USING LOOPS WITH POINTER
#include <stdio.h>

int main() {
    int numbers[5] = {0,1,2,3,4};
    int  *point = numbers;
    
    for(int i=0; i<5;i++){
        printf("%d \n",*point);
        point++;
    }
    return 0;
}

0 
1 
2 
3 
4 


#include<stdio.h>
int main(){
int number =10;
int *point = &number;
int **secondpoint = &point;

printf("%d \n",number);

printf("%p \n",point);
printf("%d \n", *point);

printf("%p \n", secondpoint);
printf("%d \n", **secondpoint);
return 0;
}


10 
0x7ffcfe7b90b4 
10 
0x7ffcfe7b90a8 
10