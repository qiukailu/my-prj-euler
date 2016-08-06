#include "include/myInteger.h"

myInt::myInt()
{
    m_data = 0;
    m_prime_vec.clear();
}

myInt::myInt(uint64_t in)
{
    setValue(in);
    m_prime_vec.clear();
}

myInt::~myInt()
{
	// do nothing
    m_prime_vec.clear();
}

void myInt::setValue(uint64_t in)
{
    m_data = in;
}

uint64_t myInt::value()
{
    return m_data;
}

void myInt::fill_in_primes(int n)
{
    m_prime_vec.clear();
    int value = 2;
    int prime_counter = 0;
    while (1) {
        if (is_prime_num(value)) {
            m_prime_vec.push_back(value);
            prime_counter++;
        }
        if (prime_counter == n) {
            break;
        } else {
            value++;
        }
    }
}

int myInt::num_divisors() 
{
    int retval = 2;
    for (uint64_t i = 2; i*i <= m_data; i++) {
        if (m_data % i == 0) {
            retval += 2;
        }
        if ( i*i == m_data ) {
            retval --;
        }
    }
    return retval;
}

void myInt::print() 
{
    std::cout << "Value of data: " << m_data << "\n";
    if (m_prime_vec.size() > 0) {
        std::cout << "List of prime numbers stored: " << std::endl;

        for (int i = 0; i < m_prime_vec.size(); i++ ) {
            std::cout << i + 1 <<" : " << m_prime_vec[i] << ";   ";
        }

        std::cout << std::endl;
    }
}

int myInt::check_palindrome() 
{
    if (this->reverse_itself() == this->m_data) {
        return 1;
    } else {
        return 0;
    }
}

int myInt::is_prime() 
{
    if (m_data <= 0) {
        std::cout << "Non-positive integer input for prime checking ... " << std::endl;
        return 0;
    }
    if (m_data == 1) return 0;
    if (m_data == 2) return 1;
    uint64_t divider = 2;
    if ( m_data % divider == 0 ) return 0;
    while (divider * divider < m_data) {
        divider ++;
        if (m_data % divider == 0 ) return 0;
    }
    return 1;
}

int myInt::is_divisor(int value) {
    if (m_data % value == 0) {
        return 1;
    } else {
        return 0;
    }
}

void myInt::calc_prime_divisors() {
    m_prime_divisors.clear();
    int value = 2;
    while (1) {
        if (value * 2 > m_data) break;
        if (is_divisor(value) && is_prime_num(value) ) {
            m_prime_divisors.push_back(value);
//            std::cout << value << std::endl;
        }
        value++;
    }
//    std::cout << "All prime divisors -- " << std::endl;
    m_prime_exp.clear();

    for (int i = 0; i < m_prime_divisors.size(); i++) {
        int iexp = 1;
        int ibase = m_prime_divisors[i];
        while ( is_divisor(pow(ibase, iexp)) ) {
            iexp++;
        }
        m_prime_exp.push_back(iexp-1);
    }

    int tnum = 1;
    for (int i=0; i<m_prime_exp.size() ; i++) {
        tnum *= m_prime_exp[i] + 1;
    }
}

uint64_t myInt::reverse_itself() {
    uint64_t data = this->m_data;
    std::vector<int> mystack;
    mystack.clear(); 
    int value = data % 10;
    mystack.push_back(value);
    data /= 10;
    uint64_t newvalue = 0;

    while (data) {

        value = data % 10;
        mystack.push_back(value);
        data /= 10;

    }

    for (int i = 0; i < mystack.size(); ++i) {
        int a = mystack[i]; 
        newvalue = newvalue * 10 + a;
    }
    return newvalue;
}

