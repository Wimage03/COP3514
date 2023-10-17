/*
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program accepts an input string and returns a compressed output string. The output string replaces the consecutive repeating characters with a number representing the number of times repeated and the character that was repeated.
e.g. input: helllloo
     output: he4l2o
*/

#include <stdio.h>

#define MSG_LEN 1000 // sets the maximum length of the message

void compress(char *input, char *output)
{
  char *i = input, *o = output; // i and o represent the pointers pointing to the input and output arrays respectively

  int count = 1; // counts the number of repeats

  for (i = input; *i != '\0'; i++)
  {
    if (*i == *(i + 1))
    {
      count++;
      i++;

      // loop runs until all the repeating characters are counted
      while (*i == *(i + 1))
      {
        count++;
        i++;
      }
      if (count > 2)
      {
        *o++ = '0' + count; // converts integer count to char
        *o++ = *i;          // adds the repeating char to the output string
      }
      else if (count > 1)
      {
        *o++ = *i;
        *o++ = *i; // one consecutive repeat
      }
      else
      {
        *o++ = *i; // no consecutive repeats
      }

      count = 1; // resets counter to look for consecutive repeat of the characters to follow
    }

    else
    {
      *o++ = *i; // adds the char that are not repeated
    }
  }
  *o = '\0'; // adds a null character to the output string to mark the end of the string
}

int main(void)
{
  char input[MSG_LEN], output[MSG_LEN];

  printf("Enter message:");
  scanf("%s", input);

  compress(input, output);

  printf("Output: %s", output);
}