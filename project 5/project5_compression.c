/*
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program accepts an input string and returns a compressed output string. The output string replaces the consecutive repeating characters with a number representing the number of times repeated and the character that was repeated.
e.g. input: helllloo
     output: he4l2o
*/

#include <stdio.h>


void compress(char *input, char *output) {
  int count = 1, j = 0;
  for(int i = 0; input[i] != '\0'; i++) {
    if(input[i] == input[i + 1]) {
      count++;
      i++;

      //loop runs until all the repeating characters are counted
      while(input[i] == input[i + 1]) {
        i++;
        count++;
      }

      output[j++] = '0' + count; //converting integer to char
      output[j++] = input[i];

      count = 1; //resets counter to look for consecutive repeat of the characters to follow

    } else {
      output[j++] = input[i]; //no consecutive repeats
    }

  }
}

int main(void) {
  char input[1000], output[1000];

  printf("Enter message: ");
  scanf("%s", input);
  printf("\n");

  compress(input, output);

  printf("Output: %s", output);
}