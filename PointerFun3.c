#include<stdio.h>

int *max(int *x , int *y){
if(*x>*y)
    return x;//address return...?? not sure
else
    return y;
}
void main(){

int a=4 , b=5, *c;
int *aptr , *bptr;

aptr = &a;
bptr = &b;

c = max(aptr , bptr);
if(c==aptr)
    printf("\n %s " , "x is greater.");
else
    printf("\n %s " , "y is greater.");

}
