#pragma one
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include <string>
using namespace std;
namespace ariel
{
    //Note this will be numerator/denominator
    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        // constructor
        Fraction(int num, int den);//: numerator(num), denominator(den){};
        Fraction(const Fraction& temp);
        Fraction(float num);
        // destructor
        ~Fraction();
        int gcd() const;
        // overloaded operators
        friend Fraction operator+ (const Fraction& fraction1, const Fraction& fraction2);//good
        friend Fraction operator- (const Fraction& fraction1, const Fraction& fraction2);//good
        friend Fraction operator* (const Fraction& fraction1, const Fraction& fraction2);//good
        friend Fraction operator/ (const Fraction& fraction1, const Fraction& fraction2);//good

        friend Fraction operator+ (const Fraction& fraction1, const float num1);
        friend Fraction operator- (const Fraction& fraction1, const float num1);
        friend Fraction operator* (const Fraction& fraction1, const float num1);
        friend Fraction operator/ (const Fraction& fraction1, const float num1);

        friend Fraction operator+ (const float num1,const Fraction& fraction1); 
        friend Fraction operator- (const float num1,const Fraction& fraction1);
        friend Fraction operator* (const float num1,const Fraction& fraction1);
        friend Fraction operator/ (const float num1,const Fraction& fraction1);

        friend bool operator==(const Fraction& fraction1, const Fraction& fraction2);//good
        friend bool operator!=(const Fraction& fraction1, const Fraction& fraction2);
        friend bool operator>(const Fraction& fraction1, const Fraction& fraction2);
        friend bool operator<(const Fraction& fraction1, const Fraction& fraction2);
        friend bool operator>=(const Fraction& fraction1, const Fraction& fraction2);
        friend bool operator<=(const Fraction& fraction1, const Fraction& fraction2);

        friend bool operator==(const Fraction& fraction1, const float num1);
        friend bool operator!=(const Fraction& fraction1, const float num1);
        friend bool operator>(const Fraction& fraction1, const float num1);
        friend bool operator<(const Fraction& fraction1, const float num1);
        friend bool operator>=(const Fraction& fraction1, const float num1);
        friend bool operator<=(const Fraction& fraction1, const float num1);

        friend bool operator==(const float num1, const Fraction& fraction1);
        friend bool operator!=(const float num1, const Fraction& fraction1);
        friend bool operator>(const float num1, const Fraction& fraction1);
        friend bool operator<(const float num1, const Fraction& fraction1);
        friend bool operator>=(const float num1, const Fraction& fraction1);
        friend bool operator<=(const float num1, const Fraction& fraction1);

        Fraction& operator++(); // prefix
        Fraction operator++(int); // postfix
        Fraction& operator--(); // prefix
        Fraction operator--(int); // postfix

        friend istream& operator>>(istream& is, Fraction& fraction);
        friend ostream& operator<<(ostream& os, const Fraction& fraction);//good

        // conversion constructor
        Fraction(int num): Fraction(num, 1) { }

        operator double() const {
            cout << "converting Fraction to double" << endl;
            return double(this->numerator) / double(this->denominator);
        }
        
        operator string() const {
            return to_string(this->numerator)+"/"+to_string(this->denominator);
        }

    };
}