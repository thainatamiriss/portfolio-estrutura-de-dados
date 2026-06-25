#include <stdio.h> 
 
int main() { 
   int arr[3] = {10, 20, 30}; 
   int *p_arr = arr; 
    
   printf("Elemento 1 via aritmética de ponteiros: %d\n", *(p_arr + 1)); 
    
   return 0; 
} 
