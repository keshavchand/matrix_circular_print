#include <stdio.h>
#include <stdlib.h>

int main(){
  int size = 100;
   
  printf("int matrix[%d][%d] = {", size, size);
  for (int i = 0 ; i < size; i++){
    if (i != 0) printf(",");
    printf("{");
    
    for (int j = 0 ; j < size; j++){
      if ( j != 0) printf(",");
      printf("%d ", rand());
    }
    
    printf("}");
  }

  printf("};\n");

  printf("const int STRIDE = %d;", size);
}
