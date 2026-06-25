#include <stdio.h> 
 
// Função que utiliza ponteiros para modificar as variáveis originais
void troca(int *a, int *b) { 
   int temp = *a; 
   *a = *b; 
   *b = temp; 
} 
 
int main() { 
   int num1 = 5, num2 = 10; 
    
   printf("Valores originais: num1 = %d, num2 = %d\n", num1, num2); 
    
   troca(&num1, &num2);  
    
   printf("Após a função de troca: num1 = %d, num2 = %d\n", num1, num2); 
    
   return 0; 
} 
