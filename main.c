#include <stdio.h>

int getIntFromMatrix(int *matrix, int col, int row, int stride){
  return *(matrix + col*stride + row);
}

void
printMatrixLevel(int *matrix, int level, int width, int stride){
  // Print top
  for (int i = level; i < (level + width); i++){
    printf("%d ", getIntFromMatrix(matrix, level, i, stride));
  }

  //Print right most
  for (int i = level + 1; i < level + width - 1; i++){
    printf("%d ", getIntFromMatrix(matrix, i, level + width - 1, stride));
  }

  //Print bottom
  for(int i = level + width - 1; i >= level; i--){
    printf("%d ", getIntFromMatrix(matrix, level + width - 1, i, stride));
  }

  //Print left most
  for(int i = level + width - 2; i > level; i--){
    printf("%d ", getIntFromMatrix(matrix, i, level, stride));
  }
}

void
print_matrix(int *matrix, int stride){
  int level = 0;
  int width = stride - level * 2;
  while(width > 0){
    printMatrixLevel(matrix, level, width, stride);
    level ++;
    width = stride - level * 2;
  }
}

int main(){
#if 0
  int matrix[2][2] = {
    {0,1},
    {1,2}
  };

  const int STRIDE = 2;
#elif 1
  int matrix[4][4] = {
    {0,1,2,3},
    {1,2,3,4},
    {0,1,2,3},
    {1,2,3,4}
  };

  const int STRIDE = 4;

#else
#include "matrix.c"
#endif
  print_matrix((int *)&matrix, STRIDE);
}
