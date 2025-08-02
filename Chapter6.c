#include<stdio.h>

void squre(int n);
void _squre(int *n);


int main(){

    int age = 5;
    int *ptr = &age;
    printf("age is :  %d\n" , *ptr);//value
    printf("age address is :  %p\n" , ptr);//address

   
    int n =4;
    squre(n);
    printf("%d\n", n);

      _squre(&n);         // modifies n to 16
    printf("%d\n", n); 
    return 0;
}

 //call by value
void squre(int n){
     n = n*n;
    printf("%d\n",n);
}

//call by reference.
void _squre(int *n){
*n = (*n)*(*n);
printf("%d\n", n);
}