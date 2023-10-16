/*
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: This program computes the amount of time an escalator is active. The escalator, with the help of a sensor, is deactivated in the absence of people to save energy.
*/

#include <stdio.h>

// function computing the time (in seconds) the escalator was in operation
int active_seconds(int arrival[], int n)
{
  int total = 0, *p;
  //array arithmetic used to traverse the array
  for (p = arrival; p < arrival + n - 1; p++)
  {
    int difference = *(p + 1) - *(p);
    if (difference <= 10)
      total += difference;
    else
      total += 10;
  }

  total += 10; // adds 10 seconds for the first person that activated the escalator
  return total;
}

int main(void)
{
  int n;
  printf("Enter number of people: ");
  // if-statement ensures valid input of an integer into n
  if (scanf("%d", &n) != 1)
    return 0;

  int arrival[n], *p;

  printf("Enter arrival times: ");

  for (p = arrival; p < arrival + n; p++)
  {
    if(scanf("%d", p) != 1)
      return 0;
  }

  printf("Active seconds: %d", active_seconds(arrival, n));
  return 0;
}