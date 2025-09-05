#include<stdio.h>
int factorial(int n);
int main(){
   int num =  factorial(5);
   printf("%d" , num);
    return 0;
}

int factorial(int n){

    if(n == 0 || n == 1){
        return n;
    }
    else{
        int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
    }
    
}