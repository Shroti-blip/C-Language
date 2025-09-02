
#include<stdio.h>

//Two use Cases in functions

//1. pointer as arguments.

void sum(int a , int b){
int c = a +b;
printf(" value of c is :  %d" , c);
}

void sum2(int *p1 , int *p2){
int c = *p1 + *p2;
printf(" value of sum2 is :  %d" , c);
}


int main(){
int a =4;
int b =5;
int *aptr = &a;
int *bptr = &b;
printf(" a = %d" , a);//original value
printf(" b = %d" , b);
printf(" aptr = %d" , aptr);//address value
printf(" bptr = %d" , bptr);
printf(" value at aptr = %d" , *aptr);//value at address
printf(" value at bptr = %d" , *bptr);

sum(a,b);
printf("%d" , "value of sum2 is : ");
  sum2(aptr , bptr);

return 0;
}
