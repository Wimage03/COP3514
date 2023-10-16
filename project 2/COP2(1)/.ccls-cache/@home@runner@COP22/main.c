#include <stdio.h>

int hasThree(int num) {
  int temp = num;
  
    while(temp != 0) {
      int test = temp % 10;
      if(test == 3) return 1;
      temp /= 10;
      
    }
  return 0;
}

int multipleOfThree(int num) {
  if(num % 3 == 0) return 1;
  else return 0;
}


int main(void) {
  int num, condition1, condition2;
  
  printf("Enter input: ");
  if(scanf("%d", &num) != 1) {
    return 0;
  }
  condition1 = hasThree(num);
  condition2 = multipleOfThree(num);
  
  if(condition1 == 1 && condition2 == 1) printf("yes");
  else printf("no");
  
  return 0;
}