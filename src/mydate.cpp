#include "include/mydate.h"

myDate::myDate(int dow, int dom, int mon, int year) {
    m_day_of_week   = dow;
    m_date_of_month = dom;
    m_month         = mon;
    m_year          = year;
}

void myDate::todayIs(int &dow, int &dom, int &mon, int &year) {
    dow  = m_day_of_week;
    dom  = m_date_of_month;
    mon  = m_month;
    year = m_year;
}

bool myDate::isEndOfWeek() {
    if ( m_day_of_week > SUN ) {
        return true;
    } else {
        return false;
    }
}

void myDate::beginNewWeek() {
    m_day_of_week = MON;
}

bool myDate::isLeapYear() {
    if ( m_year % 100 == 0 ) { // century
        return ( m_year % 400 == 0 );
    } else {
        return ( m_year % 4 == 0 );
    }
}

bool myDate::isEndOfMonth() {
    // set default
    int endDate = 31;

    if ( m_month == 2 ) { // February
        endDate = 28;
        if ( isLeapYear() )
            endDate = 29;
    }

    if ( m_month == 4 || m_month == 6 || m_month == 9 || m_month == 11 ) {
        endDate = 30;
    }

    return ( m_date_of_month > endDate );
}

void myDate::nextMonth() {
    m_month++;
    m_date_of_month = 1;
}

bool myDate::isEndOfYear() {
    return (m_month > 12);
}

void myDate::nextYear() {
    m_year++;
    m_month = 1;
}
 
void myDate::nextDay() {

    // increment day of week and date of month
    m_day_of_week++;
    m_date_of_month++;

    if ( isEndOfWeek() ) {
      beginNewWeek();
    }

    if ( isEndOfMonth() ) {
      nextMonth();
    }

    if ( isEndOfYear() ) {
      nextYear();
    }
}
