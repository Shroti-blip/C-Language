#include<stdio.h>
//Array.
void printArray(int arr[] , int n);

int main(){

    
int arr[3];
printf("%p\n" , arr);//address

  printf("Enter num: ");
    scanf("%d", &arr[0]);

  printf("Enter num: ");
    scanf("%d", &arr[1]);

      printf("Enter num: ");
    scanf("%d", &arr[2]);


printf(" value : %d\t" , arr[0]);
printf("%d\t" , arr[1]);
printf("%d\t" , arr[2]);



// printf("values are : %d %d %d ", arr[0], arr[1] , arr[2]);
//  int arr7[8] = {1, 2, 3, 4, 5, 6, 7, 8};

//     for (int i = 0; i < 8; i++) {
//         if (arr7[i] % 2 == 0) {
//             printf("%d \n", arr7[i]);
//         }
//     }


// int arr2[5] = {1,2,3,4,5};
// printf("%d\n" , arr2[0]);//value at 0 idx.
// printf("%d\n" , arr2);//address.

//Arithmetic pointers.

int arr[] = {1,2,3,4,5,6,7};
 printArray(arr , 5);
 
    return 0;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

}
