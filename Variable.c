#include<stdio.h>
int main(){
   

    //  int a = 4;
    // int b =4;
    // int c = a + b;
    // printf("Sum of two Variables: \n");
    // printf("%d" , c);

    float pi = 3.14;
    printf("%f \n" , pi);

    char c = '*';
    printf("%c \n" , c);
    
    //user input

    int a , b;
    printf("Enter value of a : ");
    scanf("%d" , &a);//dont take extra anything not even a single space. also dont use + symbol
     printf("Enter value of b : ");
    scanf("%d" , &b);
    printf("Sum is : %d" , a+b);
    return 0;
}