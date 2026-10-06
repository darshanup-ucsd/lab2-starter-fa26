#include <stdio.h>
<<<<<<< HEAD
int contains(int item, int arr[], int size) {
   // Write your solution here!
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
   for(int i = 0; i <size;i++){
      if(arr[i] == item){
		  return 1;
	  }
   }
   return 0;
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};
   int a = contains(2, arr, 6);  
   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n",a );
   return 0;
=======

int contains(int item, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {2, 9, 2, 0, 2, 5};

    printf("contains 2? %d\n", contains(2, arr, 6));
    printf("contains 4? %d\n", contains(4, arr, 6));
    printf("contains 9? %d\n", contains(9, arr, 6));
    printf("contains 3? %d\n", contains(3, arr, 6));

    return 0;
>>>>>>> 71da80e4b657f14fe2781ca223fb90c64bf70fd8
}
