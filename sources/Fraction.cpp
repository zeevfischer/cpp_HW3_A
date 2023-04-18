#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include <string>

#include "Fraction.hpp"
using namespace std;
namespace ariel
{
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
    // Fraction::Fraction(Fraction& temp)
    // {
    //     this->numerator = temp.numerator;
    //     this->denominator = temp.denominator;
    // }
    // destructor
    Fraction::~Fraction() {}
    int Fraction::gcd() const
    {
        int a = numerator;
        int b = denominator;
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return abs(a);
    }
    // overloaded operators
    Fraction operator+ (const Fraction& fraction1, const Fraction& fraction2)
    {
        // int new_numerator = fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator;
        // int new_denominator = fraction1.denominator * fraction2.denominator;
        // Fraction temp = Fraction(new_numerator, new_denominator);
        // int gcd = temp.gcd();
        // return Fraction(new_numerator/gcd, new_denominator/gcd);
        return Fraction(1,1);
    }
    Fraction operator- (const Fraction& fraction1, const Fraction& fraction2)
    {
        // int new_numerator = fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator;
        // int new_denominator = fraction1.denominator * fraction2.denominator;
        // Fraction temp = Fraction(new_numerator, new_denominator);
        // int gcd = temp.gcd();
        // return Fraction(new_numerator/gcd, new_denominator/gcd);
        return Fraction(1,1);
    }
    Fraction operator* (const Fraction& fraction1, const Fraction& fraction2)
    {
        // int new_numerator = fraction1.numerator *  fraction2.numerator;
        // int new_denominator = fraction1.denominator * fraction2.denominator;
        // Fraction temp = Fraction(new_numerator, new_denominator);
        // int gcd = temp.gcd();
        // return Fraction(new_numerator/gcd, new_denominator/gcd);
        return Fraction(1,1);
    }
    Fraction operator/ (const Fraction& fraction1, const Fraction& fraction2)
    {
        // int new_numerator = fraction1.numerator *  fraction2.denominator;
        // int new_denominator = fraction1.denominator * fraction2.numerator;
        // Fraction temp = Fraction(new_numerator, new_denominator);
        // int gcd = temp.gcd();
        // return Fraction(new_numerator/gcd, new_denominator/gcd);
        return Fraction(1,1);
    }
    Fraction operator+ (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator- (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator* (const Fraction& fraction1, const float num1){return Fraction(1,1);}
    Fraction operator/ (const Fraction& fraction1, const float num1){return Fraction(1,1);}

    Fraction operator+ (const float num1,const Fraction& fraction1){return Fraction(1,1);}
    Fraction operator- (const float num1,const Fraction& fraction1){return Fraction(1,1);}
    Fraction operator* (const float num1,const Fraction& fraction1){return Fraction(1,1);}
    Fraction operator/ (const float num1,const Fraction& fraction1){return Fraction(1,1);}

    bool operator==(const Fraction& fraction1, const Fraction& fraction2)
    {
        // if(fraction1.numerator == fraction2.numerator && fraction1.denominator == fraction2.denominator)
        // {
        //     return true;
        // }
        // else if((double)fraction1 == (double)fraction2)
        // {
        //     return true;
        // }
        // return false;
        return false;
    }
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

    bool operator==(const float num1, const Fraction& fraction1){return false;}
    bool operator!=(const float num1, const Fraction& fraction1){return false;}
    bool operator>(const float num1, const Fraction& fraction1){return false;}
    bool operator<(const float num1, const Fraction& fraction1){return false;}
    bool operator>=(const float num1, const Fraction& fraction1){return false;}
    bool operator<=(const float num1, const Fraction& fraction1){return false;}

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
        // Fraction temp;
        // char c;
        // is >> fraction.numerator >> c >> fraction.denominator;
        return is;
    }
    ostream& operator<<(ostream& os, const Fraction& fraction)
    {
	    // return os << fraction.numerator << '/' << fraction.denominator;
        return os;
    }
}