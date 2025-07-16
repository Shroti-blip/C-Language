#include<stdio.h>
#include<math.h>

int main(){
    
    //type conversion
    int a , b,c;
    a=b=c=2;
    int power = pow(b , c);
    printf("%d \n",power);
    int z = (int)1.9999;
    printf("%d \n",z);

    printf("%d \n",4>5);

    printf("now conditional statements.\n");

    int x;
     printf("Enter a num: ");

    scanf("%d" ,&x );
    if(x>0){
        printf("Postive\n");
    }
    else{
        printf("negative\n");
    }

    printf("ternary operator: \n");
    x>=5?printf("this is greater than 5.\n"):printf("less than 5\n");

    printf("switch case: \n");

    int y =2;
    switch(y){
            case 1: printf("First case.");
            break;
           case 2:printf("second case.");
               break;
            default:printf("default one.");

    }
    
    return 0;
}