#include<stdio.h>


int main(){
for(int i=0; i<=5; i++){
    printf("%d \n" , i);
}

printf("\n now while loop");
int n;
printf("\nEnter a number: ");
scanf( "%d" ,&n);

while(n<7){
    printf("%d \n" , n);
    n++;
}

printf("now do while loop.\n");

do{
    printf("Hola amiga.");
}
while(n<7);


    return 0;
}