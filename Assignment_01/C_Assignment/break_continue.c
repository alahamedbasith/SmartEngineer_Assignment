#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    
    if (i==8){
    printf("eight is enough");
      break;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}
