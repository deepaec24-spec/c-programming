#include <stdio.h>
#define size 5

char *array[size];
int top = -1;

void push (char *value){
    if(top == size-1){
        printf("Not space in stack\n");
    }else{
            top++;
            array[top] = value;
            printf("Open pages :%s\n",value);
        }
    }

void pop(){
    if(top == -1){
        printf("No data in stack\n");
    }else{
        printf("Back pressed - removed -> %s\n",array[top]);
        top--;
    }
}

void peak(){
        if(top == -1 ){
        printf("No data in stack\n");
    }else{
        printf("Current page -> %s\n",array[top]);
    }
}
 
 void isempty(){
        if(top == -1){
        printf("No data in stack\n");
    }else{
        printf("stack has value\n");
        
    }
 }

int main() {
     push("type A");
    push("type B");
     push("type C");
    pop();
     peak();
   
   
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Sensor triggered %d times\n",n);
    printf("Total triggers:%d",n);
    return 0;
}