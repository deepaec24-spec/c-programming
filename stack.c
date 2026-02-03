#include <stdio.h>
#define size 5

int array[size];
int top = -1;
int bottom = -1;
//enqueue
void enqueue(int value){
    if(bottom == size -1){
        printf("No space in queue \n");
    }
    else{
        if(top==-1){
            top =0;
        }
        bottom++;
        array[bottom] = value;
        printf("The Value %d added in queue \n",value);
    }
}
void dequeue(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("The value %d is removed from queue \n",array[top]);
        top++;
    }
}
void peek(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("The value %d is in peek \n",array[top]);
        
    }
}
void isempty(){
    if(top == -1||top>bottom){
        printf("No data in queue \n");
    }
    else{
        printf("The queue has value \n");
        
    }
}
int main() {
enqueue(100);
enqueue(20);
dequeue();
peek();
isempty();
    return 0;
}