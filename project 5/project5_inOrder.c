/*
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program accepts a string of roman alphabets as inputs and determines whether they are in ascending order.
*/

#include <stdio.h>

int inOrder(char *input); // function prototyping

int main(int argc, char *argv[])
{

  // ensures that no more than two arguments are given in the command line
  if (argc != 2)
  {
    printf("invalid input\n");
    return 0;
  }

  int check = inOrder(argv[1]); // takes the 2nd argument from the command line

  if (check == 1) {
    printf("in order");
  }
  else if (check == 0) {
    printf("not in order");
  }
  else {
    printf("invalid input");
  }
}

int inOrder(char *input)
{
  char *i = input; // i used to check for uppercase and non-alphabetic characters
  char *j = input; // j used to check for order

  // Converts all uppercase characters of string 'input' to lowercase
  while (*i != '\0')
  {
    if ((*i < 'a') || (*i > 'z'))
    {
      if (*i >= 'A' && *i <= 'Z')
      {
        *i += 32; // converts uppercase letters to lowercase
      }

      else
      {
        return -1;
      }
    }
    i++;
  }

  if (*j == '\0')
    return -1; // returns -1(invalid) if input is an empty array

  //checks if the char array/string is in order
  while (*(j + 1) != '\0')
  {
    if (*j > *(j + 1))
      return 0;
    j++;
  }
  return 1;
}