#ifndef LARGEINT_H
#define LARGEINT_H

#include<vector>

class largeInt {

  public:
    // takes in a string and breaks it up and stores the
    // integer segments
    largeInt(char * in_str) {

    }

  private:
    // number of digits
    int m_d;

    // store the short integer segments
    std::vector<int> m_intsegs;
};

#endif // LARGEINT_H
