#include<stdio.h>

void printAddress(int n);

int main(){

    int *ptr;
    int x;

    ptr = &x;
    *ptr =0;

    printf("x =  %d\n" , x);
    printf("ptr =  %d\n" , ptr);//address
    printf("*ptr =  %d\n" , *ptr);//value

    *ptr += 5;
    printf("x = %d\n", x);
    printf("ptr = %d\n", ptr);//address
    printf("*ptr = %d\n", *ptr);//value

    (*ptr)++;
    printf("x = %d\n" , x);
    printf("ptr = %p\n", &ptr);//address
    printf("ptr = %u\n", &ptr);//address
    printf("*ptr = %d\n", *ptr);
    

    int n =10;
    printf("%p\n",&n);
    printAddress(n);//not same address.
    //cause whille calling a function we send a copy of arguement not actual arguements.


    return 0;
}

void printAddress(int n){
    printf("%p\n", &n);
}