/* 
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program accepts an integer as an input and checks if it is 'special' (contains the digit '3' and is divisible by three)
*/
#include <stdio.h>

//checks whether the inputed number contains the digit '3'
int hasThree(int num) {
  int temp = num;
  
    while(temp != 0) {
      int test = temp % 10;
      if(test == 3) return 1; //returns 1 if the number contains the digit '3'
      temp /= 10;
      
    }
  return 0; //returns 0 if the number does not contain the digit '3'
}

//checks if the inputed number is divisible by 3
int multipleOfThree(int num) {
  if(num % 3 == 0) return 1;
  else return 0;
}


int main(void) {
  int num, condition1, condition2;
  
  printf("Enter input: ");
  // if-statement ensures valid input of an integer into equipment
  if(scanf("%d", &num) != 1) {
    return 0;
  }
  condition1 = hasThree(num);
  condition2 = multipleOfThree(num);
  
  if(condition1 == 1 && condition2 == 1) printf("yes");
  else printf("no");
  
  return 0;
}