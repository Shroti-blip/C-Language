#include<stdio.h>
int* sum(int *a , int *b){
int c = *a + *b;
int *res ;
res = &c;
return res;
}

void main(){

int a=4, b=5 , *c;

int *aptr , *bptr;
aptr=&a;
bptr=&b;


c = sum(aptr , bptr);
printf("\n %d" , *c);
}
