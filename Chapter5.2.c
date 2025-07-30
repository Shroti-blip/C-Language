#include<stdio.h>
void doWork(int a , int b, int *sum , int *prod , int *avg);

int main(){

    int a = 4;
    int b = 5;
    int sum , prod , avg;
    doWork(a,b,&sum , &prod, &avg);

    printf("sum = %d , prod = %d , avg = %d \n" , sum , prod , avg);

    return 0;
}

void doWork(int a , int b, int *sum , int *prod , int *avg){
*sum = a+b;
*prod = a*b;
*avg = (a+b)/2;
 printf("sum1 = %d , prod1 = %d , avg1 = %d \n" , *sum , *prod , *avg);//value.
 printf("sum1 = %d , prod1 = %d , avg1 = %d \n" , sum , prod , avg);//address.

}