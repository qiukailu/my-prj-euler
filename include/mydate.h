#ifndef MYDATE_H
#define MYDATE_H

class myDate {

  enum DoW { MON, TUE, WED, THU, FRI, SAT, SUN };

  public:
    myDate(int dow, int dom, int mon, int year);

    // geter
    void  todayIs(int &dow, int &dom, int &mon, int &year);

    bool isEndOfWeek();
    bool isLeapYear();
    bool isEndOfMonth();
    bool isEndOfYear();

    void beginNewWeek();

    /// get next day
    void nextDay();
    void nextMonth();
    void nextYear();

  private:
    int m_day_of_week;
    int m_date_of_month;
    int m_month;
    int m_year;
};

#endif // MYDATE_H
