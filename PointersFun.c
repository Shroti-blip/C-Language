#include<stdio.h>

void max(int *x , int *y){
if(*x >*y){//value comparision
    printf("\n  1st is bigger");
}
else{
    printf("\n 2nd is bigger");
}
}

void main(){

int a =4;
int b = 5;

int *aptr = &a;
int *bptr = &b;

//max(aptr , bptr);
max(&a , &b);
return ;
}
