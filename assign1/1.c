/*
* Copyright Rohit Das (C) 2017
* To display day from date
*/
#include<stdio.h>
#include<math.h>

int fm(int date, int month, int year) {
   int _month, leap;
   //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))   leap = 0;
   else if (year % 4 == 0)   leap = 1;
   else   leap = 0;
   _month = 3 + (2 - leap) * ((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;
   _month %= 7;
   return _month;
}

int day_of_week(int date, int month, int year) {
   int day;
   int yy = year % 100;
   int century = year / 100;
   printf("\nDate: %d/%d/%d \n", date, month, year);
   day = 1.25 * yy + fm(date, month, year) + date - 2 * (century % 4);
   //remainder on division by 7
   day %= 7;
   switch (day) {
      case 0:
         printf("weekday = Saturday");   break;
      case 1:
         printf("weekday = Sunday");   break;
      case 2:
         printf("weekday = Monday");   break;
      case 3:
         printf("weekday = Tuesday");   break;
      case 4:
         printf("weekday = Wednesday");   break;
      case 5:
         printf("weekday = Thursday");   break;
      case 6:
         printf("weekday = Friday");   break;
      default:
         printf("Incorrect data");
   }
   printf("\n");   return 0;
}

int main() {
   int date, month, year;
   printf("\nEnter the year: ");   scanf("%d", &year);
   printf("\nEnter the month: ");   scanf("%d", &month);
   printf("\nEnter the date: ");   scanf("%d", &date);
   day_of_week(date, month, year);
   return 0;
}
