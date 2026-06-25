#include <stdio.h> 
 
int main() { 
   int x = 5; 
   int *ptr = &x; 
    
   printf("Valor original de x: %d\n", x); 
    
   *ptr = 20;  
    
   printf("Novo valor de x: %d\n", x); 
    
   return 0; 
} 
 
