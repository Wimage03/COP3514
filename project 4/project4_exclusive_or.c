/*
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program implements the exclusive-or function that takes two arrays and 
             outputs the unique elements of the two arrays (discarding the dublicate elements).
*/
#include <stdio.h>

// function implementing the exclusive-or function
void exclusive_or(int *a, int n1, int *b, int n2, int *c, int *size)
{
  int *p, *q, flag, counter = 0;

  // first for-loop adds all the unique elements of the first array to array c
  for (p = a; p < a + n1; p++)
  {
    flag = 1;
    for (q = b; q < b + n2; q++)
    {
      if (*p == *q)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      *c = *p;
      c++;
      counter++;
    }
  }

  // second for-loops adds all the unique elements of the second array to array c
  for (p = b; p < b + n2; p++)
  {
    flag = 1;
    for (q = a; q < a + n1; q++)
    {
      if (*q == *p)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      *c = *p;
      c++;
      counter++;
    }
  }

  *size = counter;
}

int main(void)
{
  int n1, n2;
  printf("Enter length of array #1: ");
  scanf("%d", &n1);
  printf("Enter array elements: ");
  int a[n1];

  for (int i = 0; i < n1; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Enter length of array #2: ");
  scanf("%d", &n2);
  printf("Enter array elements: ");
  int b[n2];

  for (int i = 0; i < n2; i++)
  {
    scanf("%d", &b[i]);
  }

  int c[n1 + n2];
  int size;

  exclusive_or(a, n1, b, n2, c, &size);

  printf("Output: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", c[i]);
  }
}
//note to self: never leave pointer assignments for last minute to preserve sanity