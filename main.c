#include <stdio.h> 
#include <stdbool.h>   
 
struct date
{
    int month;
    int day;
    int year;
};
struct date dateUpdate (struct date today)
{
    struct date tomorrow;
    int numberIfDays(struct date d);

    if (today.day != numberOfDays(today)) { //ordinary day 
        tomorrow.day = today.day+1 ;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12 ){ //the end of the month + the end of the year
        tomorrow.day = 1 ;
        tomorrow.month = 1;
        tomorrow.year= today.year + 1;
    }
    else { //not 12 th month so it is just the end of the month
        tomorrow.day = 1;
        tomorrow.year = today.year;
        tomorrow.month = today.month +1;
    }
    return tomorrow;//the whole structure
}
int numberOfDays (struct date d ){
    int days ;
    bool isLeapYear (struct date d);
    const int DaysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear && d.month ==2 )
        days = 29 ;
    else
        days = daysPerMonth[d.month -1];

    return days;
}

bool isLeapYear (struct date d){
    bool leapYear;

    if (  (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400==0)
        leapYear=true;
    else
        leapYear=false;
    return leapYear
}


int main(void ) {
    struct date dateUpdate (dtruct date today);
    struct date thisDay,nextDay;

    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i",&thisDay.month,&thisDay.day,&thisDay.year);

    nextDay=dateUpdate(thisDay);
    printf("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month,nextDay.day,nextDay.year %100);

    return 0;
}
