/* 
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program accepts a string of roman alphabets as inputs and determines whether they are in ascending order.
*/
#include <stdio.h>

//function to check whether the input character are in ascending order
int inOrder() {
  char prev, next;
  prev = getchar();
  
  if(prev < 'a' || prev > 'z') {
    if(prev >= 'A' && prev <= 'Z') prev += 32; //converts capital letters to lowercase letters
    else return -1; //-1 indicates invalid input
  }
  
  while((next = getchar()) != '\n') {
    if(next < 'a' || next > 'z') {
      if(next >= 'A' && next <= 'Z') next += 32;
      else return -1;
    }

  if(next < prev) return 0; //0 indicates a break in order
  prev = next;
  }
  
  return 1; //if the inputs are valid and the order, not broken, then return 1
}

int main(void) {
  printf("Enter input: ");
  int result = inOrder();
  
  if(result == -1) printf("invalid input");
  else if(result == 0) printf("not in order");
  else printf("in order");
  
  return 0;
}