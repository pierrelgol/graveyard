/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Program to determine tomorrow's date
struct date {
  int month;
  int day;
  int year;
};

// Function to calculate tomorrow's date – using compound literals
struct date dateUpdate(struct date today) {
  struct date tomorrow;
  int numberOfDays(struct date d);
  if (today.day != numberOfDays(today))
    tomorrow = (struct date){today.month, today.day + 1, today.year};
  else if (today.month == 12) // end of year
    tomorrow = (struct date){1, 1, today.year + 1};
  else // end of month
    tomorrow = (struct date){today.month + 1, 1, today.year};
  return tomorrow;
}

// Function to find the number of days in a month
int numberOfDays(struct date d) {
  int days;
  bool isLeapYear(struct date d);
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];
  return days;
}

// Function to determine if it's a leap year
bool isLeapYear(struct date d) {

  bool leapYearFlag;
  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    leapYearFlag = true; // It's a leap year
  else
    leapYearFlag = false; // Not a leap year
  return leapYearFlag;
}

int main(void) {

  struct date dateUpdate(struct date today);
  struct date thisDay, nextDay;

  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

  nextDay = dateUpdate(thisDay);
  printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day,
         nextDay.year % 100);

  return 0;
}
