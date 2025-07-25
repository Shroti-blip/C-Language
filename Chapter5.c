#include<stdio.h>

void print();
int sum(int a , int b);
void printRecursion();
int sumOfN(int n);
//normal fun.
void print2(){
    printf("Hola Amiga 2.");
}


int count =5;
int main(){
    print2();
    sum(3,4);
    printRecursion();

    int n;
printf("Enter a num : ");
scanf("%d", &n);
    int c = sumOfN(n);
    printf("%d",c);


    return 0;
}

int sum(int a , int b){
    double c = a + b;
    printf("\n Sum is : ");
    printf( "%f\n",c);
}

void print(){
    printf("Hola Amiga");
}

//Recursion 

void printRecursion(){
    if(count == 0){
        return;
    }
    printf("Recursive function.\n");
     count--;
    printRecursion();
}

//sum of n numbers.

int sumOfN(int n){
    if(n ==0){
        return 0;
    }

   int   sum = sumOfN(n-1);
     int totalsum = sum + n;
     return totalsum;
}

//fibonachhi and factorial.