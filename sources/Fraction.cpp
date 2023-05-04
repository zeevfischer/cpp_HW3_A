#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include <string>

#include "Fraction.hpp"
using namespace std;
namespace ariel
{
    void Fraction::gcd()
    {
        int a = this->numerator;
        int b = this->denominator;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = abs(a);
        if(gcd != 0)
        {
            this->numerator/=gcd;
            this->denominator/=gcd;
        }
    }
    //Note this will be numerator/denominator
    // constructor
    Fraction::Fraction(int numerator, int denominator)
    {
        if (denominator == 0)
        {
            throw invalid_argument("Denominator cannot be zero.");
        }
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction::Fraction(float num)
    {
        this->numerator = num*1000;
        this->denominator = 1000;
        if(this->numerator != 0)
        {
            this->gcd();
        }
    }
    Fraction::Fraction()
    {
        this->numerator = 0;
        this->denominator = 1;
    }
    // overloaded operators
    Fraction operator+ (const Fraction& fraction1, const Fraction& fraction2){return Fraction(1,1);}
    Fraction operator- (const Fraction& fraction1, const Fraction& fraction2){return Fraction(1,1);}
    Fraction operator* (const Fraction& fraction1, const Fraction& fraction2){return Fraction(1,1);}
    Fraction operator/ (const Fraction& fraction1, const Fraction& fraction2){return Fraction(1,1);}

    Fraction operator+ (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator- (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator* (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator/ (const Fraction& fraction1, const float num1){return Fraction(1,1);}


    bool operator==(const Fraction& fraction1, const Fraction& fraction2){return false;}
    bool operator!=(const Fraction& fraction1, const Fraction& fraction2){return false;}
    bool operator>(const Fraction& fraction1, const Fraction& fraction2){return false;}
    bool operator<(const Fraction& fraction1, const Fraction& fraction2){return false;}
    bool operator>=(const Fraction& fraction1, const Fraction& fraction2){return false;}
    bool operator<=(const Fraction& fraction1, const Fraction& fraction2){return false;}

    bool operator==(const Fraction& fraction1, const float num1){return false;}
    bool operator!=(const Fraction& fraction1, const float num1){return false;}
    bool operator>(const Fraction& fraction1, const float num1){return false;}
    bool operator<(const Fraction& fraction1, const float num1){return false;}
    bool operator>=(const Fraction& fraction1, const float num1){return false;}
    bool operator<=(const Fraction& fraction1, const float num1){return false;}

    // prefix
    Fraction& Fraction::operator++(){return *this;}
    // postfix
    Fraction Fraction::operator++(int){return Fraction(1,1);}
    // prefix
    Fraction& Fraction::operator--(){return *this;}
    // postfix
    Fraction Fraction::operator--(int){return Fraction(1,1);}
    //check this is right !!!!
    istream& operator>>(istream& is, Fraction& fraction)
    {
        return is;
    }
    ostream& operator<<(ostream& os, const Fraction& fraction)
    {
        return os;
    }
}