#include<stdio.h>
int main(){
    int mynum = 654;
    printf("%d\n",mynum);
    printf("%p",mynum);
    return 0;
}


654
0x28e




#include<stdio.h>
int main(){
    int mynum = 10;
    int *point = &mynum;
    
    //output of mynum;
    printf("%d\n",mynum);
    //output of memory of mynum
    printf("%p\n",&mynum);
    // output of memory of pointer
    printf("%p\n",point);
    return 0;
}



10
0x7fff807b3bf4
0x7fff807b3bf4


#include<stdio.h>
int main(){
    int mynum = 67;
    int *point = &mynum;
    
    //output of mynum;
    printf("%d\n",mynum);
    //output of memory of mynum
    printf("%p\n",&mynum);
    // output of memory of pointer
    printf("%p\n",point);
    //output of value in point
    printf("%d",*point);
    
    return 0;
}



#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    }

int main(){
        int x=65,y=54;
        printf("Before swapping\n");
         printf("The value of x:%d\n",x);
         printf("The value of y:%d\n",y);
         
         swap(&x,&y);
         
         printf("After swapping\n");
         printf("The value of x:%d\n",x);
         printf("The value of y:%d\n",y);
         
         return 0;
}




Before swapping
The value of x:65
The value of y:54
After swapping
The value of x:54
The value of y:65



#include<stdio.h>
int main(){
    int arr[] = {20,30,40};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    return 0;
}


0x7ffe301d15d4
0x7ffe301d15d8
