#include<stdio.h>

int main(){
    int b = 10000;
    int w = 11000;
    int total;
    if(b > 11000)
    {
        total = b - w;
        printf("Balance After Transaction = %d", total);
    }
    else
       printf("You dont have a sufficient balance");
}
//code