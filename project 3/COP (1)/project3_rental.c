/* 
Name: Chowdhury Nafiun Nuru
U#: 42355430

Description: To create a program that calculates the total charge for a floor cleaning equipment rental company by using the 4-hour, daily and weekly charges and calculating the minimum charge
*/

#include <stdio.h>

// min function finds the minimum of the two integers x and y
int min(int x, int y) {
  if(x < y) return x;
  else return y;
}

// This function calculates the total charge for the rental by taking into account the equipment, days and hours
int chargefunc(int equipment, int days, int hours) {
  int data[][3] = {{7, 10, 40},
                   {27, 39, 156},
                   {61, 87, 348},
                   {59, 84, 336}};

  int hourly_charge = data[equipment][0]; //hourly charge here indicates charge for 4 hours
  int daily_charge = data[equipment][1];
  int weekly_charge = data[equipment][2];

  // charge by taking the capped weekly charge (if days > 0)
  int charge1;

  if(days != 0) {
    
    if(days/7 == 0) {
        charge1 = (days/7) * weekly_charge;
      } else {
        charge1 = ((days/7) + 1) * weekly_charge;
      }
    
      int rem_days = days % 7;
      int weeks = days / 7;
      if(hours > 4) hourly_charge = daily_charge;
    
      //charge calculated by taking into account the rented days, hours or both
      int charge2 = (weeks * weekly_charge) + (rem_days * daily_charge) + (hourly_charge);
    
      return min(charge1, charge2);
    
    } else {

      // calculates charge if days == 0
      if(hours <= 4) return hourly_charge;
      else return daily_charge;
    
    }
}

int main(void) {

  int equipment, days, hours;

  printf("Please select from four equipment: 1, 2, 3, and 4\n");

  printf("Enter equipment selection: ");

  // if-statement ensures valid input of an integer into equipment
  if(scanf("%d", &equipment) != 1) {
    return 0;
  }

  if(equipment < 1 || equipment > 4) {
    printf("Invalid selection. Select from 1 to 4.\n");
    return 1;
  }

  equipment = equipment - 1;

  printf("Enter days: ");

  if(scanf("%d", &days) != 1) {
    return 0;
  }

  printf("Enter hours: ");

  if(scanf("%d", &hours) != 1) {
    return 0;
  }

  if(hours >= 24 || hours < 0) {
    printf("Invalid hours.");
    return 1;
  }

  int charge = chargefunc(equipment, days, hours);
  printf("Charge($): %d", charge);

  return 0;
}